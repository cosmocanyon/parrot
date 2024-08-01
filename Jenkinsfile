pipeline {
    agent any

    stages {
        stage('Check') {
            steps {
                echo 'Any checking...'
            }
        }
        stage('Build1') {
            agent {
                node {
                label 'Master'
                }
	        }

            steps {
                echo 'Linux building...'
                sh '''
                    g++ -c main.cpp
                    g++ -o main.sh main.o
                '''
            }
        }
        stage('Test1') {
            agent {
                node {
                label 'Master'
                }
	        }

            steps {
                echo 'Linux testing...'
                sh './main.sh Ciao a tutti'
            }
        }
        stage('Build2') {
            agent {
                node {
                label 'Master'
                }
	        }

            steps {
                echo 'Kuber building...'
            }
        }
        stage('Test2') {
            agent {
                node {
                label 'Master'
                }
	        }

            steps {
                echo 'Kuber testing...'
            }
        }
        stage('Release') {
            steps {
                echo 'Releasing...'
            }
        }
    }
}