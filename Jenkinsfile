pipeline {
    agent any

    stages {
        stage('Checkout SCM') {
            steps {
                git 'https://github.com/YOUR_GITHUB_REPO.git' // Update with your repo URL
            }
        }

        stage('Build') {
            steps {
                script {
                    sh 'g++ main.cpp -o PES2UG22CS662-1' // Replace with your SRN
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    def result = sh(script: './PES2UG22CS662-1', returnStatus: true)
                    if (result != 0) {
                        error "Test Failed: Detected an invalid case."
                    }
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
            echo 'Pipeline failed due to an error in one of the stages.'
        }
    }
}
