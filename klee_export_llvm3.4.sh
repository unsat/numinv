export DEVEL=/home/tnguyen/Src/Devel
export KLEE_BASE=$DEVEL/KLEE/
export KLEE=$KLEE_BASE/klee/Release+Asserts
export PATH=$PATH:$KLEE/bin
export SAGE=$DEVEL/SAGE/sage
export Z3=$DEVEL/Z3/z3
export PYTHONSTARTUP=$HOME/.pystartup

export VRS=$HOME/Dropbox/git
export VRS_COMMON_CODE=$VRS/common_code

export PYTHONPATH=$VRS_COMMON_CODE:$Z3/build
export SAGE_PATH=$VRS_COMMON_CODE:$DIG/dig:$DIG2:$Z3/src/api/python
export SAGE=$DEVEL/SAGE/sage