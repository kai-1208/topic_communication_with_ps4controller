import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hisa/ROS2/topic_communication_with_ps4controller/install/hello'
