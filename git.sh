#!/bin/bash
echo "write your commit message"
read MESSAGE
git add .
git commit -m "$MESSAGE"
git push
