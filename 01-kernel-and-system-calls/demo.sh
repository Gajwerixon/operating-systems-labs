echo "=== Compiling programs ==="
cc -o create_tree create_tree.c || exit 1
cc -o gettreewidth gettreewidth.c || exit 1

echo ""
echo "=== Process Tree Width Demonstration ==="

echo ""
echo "[1] Starting process tree..."
./create_tree &
sleep 1

echo ""
echo "[2] Listing running processes..."
ps -al

echo ""
echo "[3] Select a process to check"
printf "Enter PID: "
read pid

echo ""
echo "Selected PID: $pid"
echo ""
echo "[4] Calculating process tree width..."
./gettreewidth "$pid"