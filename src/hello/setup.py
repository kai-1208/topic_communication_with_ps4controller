from setuptools import setup, find_packages

package_name = 'hello'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/resource', ['resource/hello'])  # ここを追加
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='otete',
    maintainer_email='otete@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker_iseki = hello.talker_ID12:main',
            'talker_nari = hello.talker_ID23:main',
            'listener_robo1 = hello.listener_ID1:main',
            'listener_robo2-1 = hello.listener_ID2:main',
            'listener_robo2-2 = hello.listener_ID3:main',
        ]
    },
)
