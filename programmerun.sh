echo "============MAKE==============="
make re
echo "\n=================TESTING=====================\n"
./fdf test_map/10-2.fdf
./fdf test_map/10-70.fdf
./fdf test_map/100-6.fdf
./fdf test_map/20-60.fdf
./fdf test_map/42.fdf
./fdf test_map/first_line_null.fdf
./fdf test_map/first_line_too_short.fdf
./fdf test_map/last_line_null.fdf
./fdf test_map/map_with_caract.fdf
./fdf test_map/50-4.fdf
./fdf test_map/basictest.fdf
./fdf test_map/elem.fdf
./fdf test_map/mars.fdf
./fdf test_map/pentenegpos.fdf
./fdf test_map/plat.fdf
./fdf test_map/pnp_flat.fdf
./fdf test_map/pylone.fdf
./fdf test_map/pyra.fdf
./fdf test_map/pyramide.fdf

