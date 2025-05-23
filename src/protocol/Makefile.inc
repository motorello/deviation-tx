ifndef BUILD_TARGET

PROTO_MODULES += $(ODIR)/protocol/devo.mod
PROTO_MODULES += $(ODIR)/protocol/dsm2.mod
PROTO_MODULES += $(ODIR)/protocol/dsmx.mod
PROTO_MODULES += $(ODIR)/protocol/flysky.mod
PROTO_MODULES += $(ODIR)/protocol/afhds-2a.mod
PROTO_MODULES += $(ODIR)/protocol/hubsan4.mod
PROTO_MODULES += $(ODIR)/protocol/joysway.mod
PROTO_MODULES += $(ODIR)/protocol/j6pro.mod
PROTO_MODULES += $(ODIR)/protocol/ppm.mod
PROTO_MODULES += $(ODIR)/protocol/wk2801.mod
PROTO_MODULES += $(ODIR)/protocol/wk2601.mod
PROTO_MODULES += $(ODIR)/protocol/wk2401.mod
PROTO_MODULES += $(ODIR)/protocol/frsky-v8.mod
PROTO_MODULES += $(ODIR)/protocol/frsky.mod
PROTO_MODULES += $(ODIR)/protocol/skyartec.mod
PROTO_MODULES += $(ODIR)/protocol/v202.mod
PROTO_MODULES += $(ODIR)/protocol/slt.mod
PROTO_MODULES += $(ODIR)/protocol/usbhid.mod
PROTO_MODULES += $(ODIR)/protocol/hisky.mod
PROTO_MODULES += $(ODIR)/protocol/yd717.mod
PROTO_MODULES += $(ODIR)/protocol/symax.mod
PROTO_MODULES += $(ODIR)/protocol/cflie.mod
PROTO_MODULES += $(ODIR)/protocol/h377.mod
PROTO_MODULES += $(ODIR)/protocol/hm830.mod
PROTO_MODULES += $(ODIR)/protocol/kn.mod
PROTO_MODULES += $(ODIR)/protocol/esky150.mod
PROTO_MODULES += $(ODIR)/protocol/esky.mod
PROTO_MODULES += $(ODIR)/protocol/bluefly.mod
PROTO_MODULES += $(ODIR)/protocol/cx10.mod
PROTO_MODULES += $(ODIR)/protocol/cg023.mod
PROTO_MODULES += $(ODIR)/protocol/hontai.mod
PROTO_MODULES += $(ODIR)/protocol/fy326.mod
PROTO_MODULES += $(ODIR)/protocol/bayang.mod
PROTO_MODULES += $(ODIR)/protocol/h8-3d.mod
PROTO_MODULES += $(ODIR)/protocol/mjxq.mod
PROTO_MODULES += $(ODIR)/protocol/mt99xx.mod
PROTO_MODULES += $(ODIR)/protocol/s-fhss.mod
PROTO_MODULES += $(ODIR)/protocol/frskyx.mod
PROTO_MODULES += $(ODIR)/protocol/assan.mod
PROTO_MODULES += $(ODIR)/protocol/fq777.mod
PROTO_MODULES += $(ODIR)/protocol/q303.mod
PROTO_MODULES += $(ODIR)/protocol/gw008.mod
PROTO_MODULES += $(ODIR)/protocol/dm002.mod
PROTO_MODULES += $(ODIR)/protocol/corona.mod
PROTO_MODULES += $(ODIR)/protocol/bugs3.mod
PROTO_MODULES += $(ODIR)/protocol/crsf.mod
PROTO_MODULES += $(ODIR)/protocol/hitec.mod
PROTO_MODULES += $(ODIR)/protocol/wfly.mod
PROTO_MODULES += $(ODIR)/protocol/bugs3min.mod
PROTO_MODULES += $(ODIR)/protocol/e012.mod
PROTO_MODULES += $(ODIR)/protocol/e015.mod
PROTO_MODULES += $(ODIR)/protocol/ncc1701.mod
PROTO_MODULES += $(ODIR)/protocol/v911s.mod
PROTO_MODULES += $(ODIR)/protocol/gd00x.mod
PROTO_MODULES += $(ODIR)/protocol/sbus.mod
PROTO_MODULES += $(ODIR)/protocol/pxx.mod
PROTO_MODULES += $(ODIR)/protocol/e016h.mod
PROTO_MODULES += $(ODIR)/protocol/sumd.mod
ifeq "$(SUPPORT_SCANNER)" "1"
PROTO_MODULES += $(ODIR)/protocol/scancyrf.mod
endif
ifeq "$(SUPPORT_XN297DUMP)" "1"
PROTO_MODULES += $(ODIR)/protocol/xn297dmp.mod
endif
PROTO_MODULES += $(ODIR)/protocol/e010.mod
PROTO_MODULES += $(ODIR)/protocol/radiolink.mod
PROTO_MODULES += $(ODIR)/protocol/v761.mod
PROTO_MODULES += $(ODIR)/protocol/redpine.mod

ALL += $(PROTO_MODULES)
else #BUILD_TARGET
$(ODIR)/protocol/devo.mod : $(ODIR)/devo_cyrf6936.bin
	@echo Building 'devo' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/dsm2.mod : $(ODIR)/dsm2_cyrf6936.bin
	@echo Building 'dsm2' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/dsmx.mod : $(ODIR)/dsm2_cyrf6936.bin
	@echo Building 'dsmx' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/flysky.mod : $(ODIR)/flysky_a7105.bin
	@echo Building 'flysky' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/afhds-2a.mod : $(ODIR)/flysky_afhds2a_a7105.bin
	@echo Building 'afhds-2a' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/frsky-v8.mod : $(ODIR)/frsky1way_cc2500.bin
	@echo Building 'frsky1way' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/frsky.mod : $(ODIR)/frsky2way_cc2500.bin
	@echo Building 'frsky2way' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/hubsan4.mod : $(ODIR)/hubsan_a7105.bin
	@echo Building 'hubsan4' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/joysway.mod : $(ODIR)/joysway_a7105.bin
	@echo Building 'joysway' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/j6pro.mod : $(ODIR)/j6pro_cyrf6936.bin
	@echo Building 'j6pro' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/ppm.mod : $(ODIR)/ppmout.bin
	@echo Building 'ppm' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/skyartec.mod : $(ODIR)/skyartec_cc2500.bin
	@echo Building 'skyartec' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/wk2801.mod : $(ODIR)/wk2x01.bin
	@echo Building 'wk2801' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/wk2601.mod : $(ODIR)/wk2x01.bin
	@echo Building 'wk2601' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/wk2401.mod : $(ODIR)/wk2x01.bin
	@echo Building 'wk2401' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/v202.mod : $(ODIR)/v202_nrf24l01.bin
	@echo Building 'v202' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/slt.mod : $(ODIR)/slt_nrf24l01.bin
	@echo Building 'slt' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/usbhid.mod : $(ODIR)/usbhid.bin
	@echo Building 'usbhid' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/hisky.mod : $(ODIR)/hisky_nrf24l01.bin
	@echo Building 'hisky' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/yd717.mod : $(ODIR)/yd717_nrf24l01.bin
	@echo Building 'yd717' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/symax.mod : $(ODIR)/symax_nrf24l01.bin
	@echo Building 'symax' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/cflie.mod : $(ODIR)/cflie_nrf24l01.bin
	@echo Building 'cflie' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/h377.mod : $(ODIR)/h377_nrf24l01.bin
	@echo Building 'h377' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/hm830.mod : $(ODIR)/hm830_nrf24l01.bin
	@echo Building 'hm830' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/kn.mod : $(ODIR)/kn_nrf24l01.bin
	@echo Building 'kn' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/esky150.mod : $(ODIR)/esky150_nrf24l01.bin
	@echo Building 'esky150' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/esky.mod : $(ODIR)/esky_nrf24l01.bin
	@echo Building 'esky' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/bluefly.mod : $(ODIR)/bluefly_nrf24l01.bin
	@echo Building 'bluefly' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/cx10.mod : $(ODIR)/cx10_nrf24l01.bin
	@echo Building 'cx10' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/cg023.mod : $(ODIR)/cg023_nrf24l01.bin
	@echo Building 'cg023' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    
    
$(ODIR)/protocol/hontai.mod : $(ODIR)/hontai_nrf24l01.bin
	@echo Building 'hontai' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/fy326.mod : $(ODIR)/fy326_nrf24l01.bin
	@echo Building 'fy326' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/bayang.mod : $(ODIR)/bayang_nrf24l01.bin
	@echo Building 'bayang' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/h8-3d.mod : $(ODIR)/h8_3d_nrf24l01.bin
	@echo Building 'h8-3d' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/mjxq.mod : $(ODIR)/mjxq_nrf24l01.bin
	@echo Building 'mjxq' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/mt99xx.mod : $(ODIR)/mt99xx_nrf24l01.bin
	@echo Building 'mt99xx' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/s-fhss.mod : $(ODIR)/sfhss_cc2500.bin
	@echo Building 'sfhss' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@    

$(ODIR)/protocol/frskyx.mod : $(ODIR)/frskyx_cc2500.bin
	@echo Building 'frskyx' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/assan.mod : $(ODIR)/assan_nrf24l01.bin
	@echo Building 'assan' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/fq777.mod : $(ODIR)/fq777_nrf24l01.bin
	@echo Building 'fq777' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/q303.mod : $(ODIR)/q303_nrf24l01.bin
	@echo Building 'q303' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/gw008.mod : $(ODIR)/gw008_nrf24l01.bin
	@echo Building 'gw008' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/dm002.mod : $(ODIR)/dm002_nrf24l01.bin
	@echo Building 'dm002' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/corona.mod : $(ODIR)/corona_cc2500.bin
	@echo Building 'corona' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/bugs3.mod : $(ODIR)/bugs3_a7105.bin
	@echo Building 'bugs3' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/crsf.mod : $(ODIR)/crsf_uart.bin
	@echo Building 'crsf' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/hitec.mod : $(ODIR)/hitec_cc2500.bin
	@echo Building 'hitec' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/wfly.mod : $(ODIR)/wfly_cyrf6936.bin
	@echo Building 'wfly' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/bugs3min.mod : $(ODIR)/bugs3mini_nrf24l01.bin
	@echo Building 'bug3mini' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/e012.mod : $(ODIR)/e012_nrf24l01.bin
	@echo Building 'e012' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/e015.mod : $(ODIR)/e015_nrf24l01.bin
	@echo Building 'e015' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/ncc1701.mod : $(ODIR)/ncc1701_nrf24l01.bin
	@echo Building 'ncc1701' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/v911s.mod : $(ODIR)/v911s_nrf24l01.bin
	@echo Building 'v911s' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/gd00x.mod : $(ODIR)/gd00x_nrf24l01.bin
	@echo Building 'gd00x' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
    
$(ODIR)/protocol/sbus.mod : $(ODIR)/sbus_uart.bin
	@echo Building 'sbus' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/pxx.mod : $(ODIR)/pxxout.bin
	@echo Building 'pxx' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/e016h.mod : $(ODIR)/e016h_nrf24l01.bin
	@echo Building 'e016h' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/sumd.mod : $(ODIR)/sumd_uart.bin
	@echo Building 'sumd' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

ifeq "$(SUPPORT_SCANNER)" "1"
$(ODIR)/protocol/scancyrf.mod : $(ODIR)/scanner_cyrf6936.bin
	@echo Building 'scancyrf' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
endif

ifeq "$(SUPPORT_XN297DUMP)" "1"
$(ODIR)/protocol/xn297dmp.mod : $(ODIR)/xn297dump_nrf24l01.bin
	@echo Building 'xn297dmp' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
endif

$(ODIR)/protocol/e010.mod : $(ODIR)/e010_cc2500.bin
	@echo Building 'e010' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/radiolink.mod : $(ODIR)/radiolink_cc2500.bin
	@echo Building 'radiolink' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/v761.mod : $(ODIR)/v761_nrf24l01.bin
	@echo Building 'v761' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@

$(ODIR)/protocol/redpine.mod : $(ODIR)/redpine_cc2500.bin
	@echo Building 'redpine' module
	/bin/mkdir -p $(ODIR)/protocol/ 2>/dev/null; /bin/cp $< $@
endif #BUILD_TARGET
