
RTL=tb.sv

run: work compile sim

work:
	vlib work

compile:
	vlog ${RTL}

sim:
	vsim -c -L work tb -do "run -all; quit"

clean:
	rm -rf work transcript vsim.wlf

