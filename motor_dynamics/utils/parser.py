import argparse as ag


def get_parser_with_args():
    """Use this to parse the parameter passed to the training/inference code.

    Returns:
        argparse.ArgumentParser: ArgumentParser object.

    Raises:        ExceptionName: Why the exception is raised.

    Examples
        Examples should be written in doctest format, and
        should illustrate how to use the function/class.
        >>>

    """
    parser = ag.ArgumentParser(description='Training or inference')

    parser.add_argument('--task',
                        type=str,
                        default='train_sim',
                        required=True,
                        help='''Train on sim(train_sim), train on raw(train_raw), fine-tune on raw(fine_tune_raw),
                        or test model(test).''')

    parser.add_argument('--train_sim_dir',
                        type=str,
                        default='../datasets/data/train_sim/',
                        required=False,
                        help='Simulated dataset directory for training.')

    parser.add_argument('--train_raw_dir',
                        type=str,
                        default='../datasets/data/train_raw/',
                        required=False,
                        help='Raw dataset directory for training.')

    parser.add_argument('--val_sim_dir',
                        type=str,
                        default='../datasets/data/val_sim/',
                        required=False,
                        help='Smimulated dataset directory for validation.')

    parser.add_argument('--test_raw_dir',
                        type=str,
                        default='../datasets/data/test_raw/',
                        required=False,
                        help='Raw dataset directory for testing.')

    parser.add_argument('--weight_dir',
                        type=str,
                        default='../weights/',
                        required=False,
                        help='Directory to save model weights.')

    parser.add_argument('--log_dir',
                        type=str,
                        default='../logs/',
                        required=False,
                        help='Directory to save training logs.')

    parser.add_argument('--model',
                        type=str,
                        required=True,
                        help='''shallow_ffn, deep_fnn,
                        shallow_rnn, deep_rnn,
                        shallow_lstm, deep_lstm,
                        shallow_cnn, deep_cnn,
                        shallow_encdec, deep_encdec,
                        encdec_skip,
                        encdec_rnn_skip,
                        encdec_birnn_skip,
                        encdec_diag_birnn_skip''')

    parser.add_argument('--epochs',
                        type=int,
                        default=10,
                        required=False,
                        help='Number of epochs to train.')

    parser.add_argument('--batch_size',
                        type=int,
                        default=1024,
                        required=False,
                        help='Training or test batch size.')

    parser.add_argument('--lr',
                        type=float,
                        default=0.01,
                        required=False,
                        help='Learning rate.')

    parser.add_argument('--inp_quant',
                        type=str,
                        default='Voltage1,Voltage2,Speed',
                        required=False,
                        help='Input quantites to the model.')

    parser.add_argument('--out_quant',
                        type=str,
                        default='Current1,Current2,Torque',
                        requried=False,
                        help='Output quantities from the model.')

    parser.add_argument('--stride',
                        type=int,
                        default=1,
                        required=False,
                        help='Stride to sample sequence from dataset.')

    parser.add_argument('--window',
                        type=int,
                        default=100,
                        required=False,
                        help='Size of the input sequence.')

    parser.add_argument('--act',
                        type=str,
                        default='relu',
                        required=False,
                        help='Activation function.')

    parser.add_argument('--hidden_size',
                        type=int,
                        default=32,
                        required=False,
                        help='''Hidden vector size in models where RNN and
                        LSTM can be varied.''')

    return parser