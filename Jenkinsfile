pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ main.cpp -o PES2UG22CS662-1'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    sh './PES2UG22CS662-1'
                }
            }
        }

        stage('Deploy') {
            steps {
                echo 'Deployment successful!'
            }
        }
    }

    post {
        failure {
            error 'Pipeline failed'
        }
    }
}
