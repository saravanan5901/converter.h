
									/*UNIT CONVERSION LIBRARY*/
/*LENGTH*/

	/*km to ...*/
	float km_m(float km){
		return km*1000;
	}
	float km_cm(float km){
		return km*100000;
	}
	float km_mm(float km){
		return km*1000000;
	}
	float km_microm(float km){
		return km*1000000000;
	}
	float km_mile(float km){
		return km*0.621371;
	}
	float km_yard(float km){
		return km*1093.61;
	}
	float km_foot(float km){
		return km*3280.84;
	}
	float km_inch(float km){
		return km*39370.1;
	}
	float km_nauticalmile(float km){
		return km/1.842;
	}

	/*m to ...*/
	float m_km(float m){
		return m*0.001;
	}
	float m_cm(float m){
		return m*100;
	}
	float m_mm(float m){
		return m*1000;
	}
	float m_nm(float m){
		return m*1000000000;
	}
	float m_mile(float m){
		return m/1609.344;
	}
	float m_yard(float m){
		return m*1.09361;
	}
	float m_foot(float m){
		return m*3.28084;
	}
	float m_inch(float m){
		return m*39.3701;
	}
	float m_nauticalmile(float m){
		return m*1852;
	}

	/*cm to ...*/
	float cm_km(float cm){
		return cm/100000;
	}
	float cm_m(float cm){
		return cm/100;
	}
	float cm_mm(float cm){
		return cm*10;
	}
	float cm_microm(float cm){
		return cm*10000;
	}
	float cm_nm(float cm){
		return cm*10000000;
	}
	float cm_mile(float cm){
		return cm/160934.4;
	}
	float cm_yard(float cm){
		return cm/91.44;
	}
	float cm_foot(float cm){
		return cm/30.48;
	}
	float cm_inch(float cm){
		return cm/2.54;
	}
	float cm_nauticalmile(float cm){
		return cm/185200;
	}

	/*mm to ...*/
	float mm_km(float mm){
		return mm/1000000;
	}
	float mm_m(float mm){
		return mm*0.001;
	}
	float mm_cm(float mm){
		return mm*0.1;
	}
	float mm_microm(float mm){
		return mm*1000;
	}
	float mm_nm(float mm){
		return mm*1000000;
	}
	float mm_yard(float mm){
		return mm/914.4;
	}
	float mm_foot(float mm){
		return mm/304.8;
	}
	float mm_inch(float mm){
		return mm/25.4;
	}

	/*microm to ...*/
	float microm_km(float microm){
                return microm/1000000000;
        }
	float microm_m(float microm){
                return microm/1000000;
        }
	float microm_cm(float microm){
                return microm/10000;
        }
	float microm_mm(float microm){
                return microm/1000;
        }
	float microm_nm(float microm){
                return microm*1000;
	}
	float microm_yard(float microm){
                return microm/914400;
        }
	float microm_foot(float microm){
                return microm/304800;
        }
	float microm_inch(float microm){
		return microm/25400;
	}

	/*nm to ...*/
	float nm_m(float nm){
		return nm/1000000000;
	}
	float nm_cm(float nm){
		return nm/10000000;
	}
	float nm_mm(float nm){
		return nm/1000000;
	}
	float nm_microm(float nm){
		return nm/1000;
	}
	float nm_foot(float nm){
		return nm/304800000;
	}
	float nm_inch(float nm){
		return nm/25400000;
	}

	/*mile to ...*/
	float mile_km(float mile){
		return mile*1.60934;
	}
	float mile_m(float mile){
		return mile*1609.344;
	}
	float mile_cm(float mile){
		return mile*160934;
	}
	float mile_mm(float mile){
		return mile*1609000;
	}
	float mile_yard(float mile){
		return mile*1760;
	}
	float mile_foot(float mile){
		return mile*5280;
	}
	float mile_inch(float mile){
		return mile*63360;
	}
	float mile_nauticalmile(float mile){
		return mile/1.151;
	}

	/*yard to ...*/
	float yard_km(float yard){
		return yard*0.0009144;
	}
	float yard_m(float yard){
		return yard*0.9144;
	}
	float yard_cm(float yard){
		return yard*91.44;
	}
	float yard_mm(float yard){
		return yard*914.4;
	}
	float yard_microm(float yard){
		return yard*914400;
	}
	float yard_nm(float yard){
		return yard*914400000;
	}
	float yard_mile(float yard){
		return yard/1760;
	}
	float yard_foot(float yard){
		return yard*3;
	}
	float yard_inch(float yard){
		return yard*36;
	}
	float yard_nauticalmile(float yard){
		return yard*0.000493737;
	}

	/*foot to ...*/
	float foot_km(float foot){
		return foot*0.0003048;
	}
	float foot_m(float foot){
		return foot*0.3048;
	}
	float foot_cm(float foot){
		return foot*30.48;
	}
	float foot_mm(float foot){
		return foot*304.8;
	}
	float foot_microm(float foot){
		return foot*304800;
	}
	float foot_nm(float foot){
		return foot*304800000;
	}
	float foot_mile(float foot){
		return foot/5280;
	}
	float foot_yard(float foot){
		return foot/3;
	}
	float foot_inch(float foot){
		return foot*12;
	}
	float foot_nauticalmile(float foot){
		return foot*0.000164579;
	}

	/*inch to ...*/
	float inch_km(float inch){
		return inch/39370.079;
	}
	float inch_m(float inch){
		return inch*0.0254;
	}
	float inch_cm(float inch){
		return inch*2.54;
	}
	float inch_mm(float inch){
		return inch*25.4;
	}
	float inch_microm(float inch){
		return inch*25400;
	}
	float inch_nm(float inch){
		return inch*25400000;
	}
	float inch_mile(float inch){
		return inch/63360;
	}
	float inch_yard(float inch){
		return inch/36;
	}
	float inch_foot(float inch){
		return inch/12;
	}
	float inch_nauticalmile(float inch){
		return inch/72913.386;
	}

	/*nautical mile to ...*/
	float nauticalmile_km(float nm){
		return nm*1.852;
	}
	float nauticalmile_m(float nm){
		return nm*1852;
	}
	float nauticalmile_cm(float nm){
		return nm*185200;
	}
	float nauticalmile_mm(float nm){
		return nm*1852000;
	}
	float nauticalmile_microm(float nm){
		return nm*1852000000;
	}
	float nauticalmile_mile(float nm){
		return nm*1.15078;
	}
	float nauticalmile_yard(float nm){
		return nm*2025.37;
	}
	float nauticalmile_foot(float nm){
		return nm*6076.12;
	}
	float nauticalmile_inch(float nm){
		return nm*72913.4;
	}

/*MASS*/

	/*ton to ...*/
	float ton_kg(float ton){
		return ton*1000;
	}
	float ton_g(float ton){
		return ton*1000000;
	}
	float ton_mg(float ton){
		return ton*1000000000;
	}
	float ton_imperialton(float ton){
		return ton*0.984207;
	}
	float ton_USton(float ton){
		return ton*1.10231;
	}
	float ton_stone(float ton){
		return ton*157.473;
	}
	float ton_pound(float ton){
		return ton*2204.62;
	}
	float ton_ounce(float ton){
		return ton*35274;
	}

	/*kg to ...*/
	float kg_ton(float kg){
		return kg*0.001;
	}
	float kg_g(float kg){
		return kg*1000;
	}
	float kg_mg(float kg){
		return kg*1000000;
	}
	float kg_microg(float kg){
		return kg*1000000000;
	}
	float kg_imperialton(float kg){
		return kg/1016.047;
	}
	float kg_USton(float kg){
		return kg*0.00110231;
	}
	float kg_stone(float kg){
		return kg*0.157473;
	}
	float kg_pound(float kg){
		return kg*2.20462;
	}
	float kg_ounce(float kg){
		return kg*35.274;
	}

	/*g to ...*/
	float g_ton(float g){
		return g/1000000;
	}
	float g_kg(float g){
		return g/1000;
	}
	float g_mg(float g){
		return g*1000;
	}
	float g_microg(float g){
		return g*1000000;
	}
	float g_imperialton(float g){
		return g/1016000;
	}
	float g_USton(float g){
		return g/907184.74;
	}
	float g_stone(float g){
		return g*0.000157473;
	}
	float g_pound(float g){
		return g*0.00220462;
	}
	float g_ounce(float g){
		return g*0.035274;
	}

	/*mg to ...*/
	float mg_ton(float mg){
		return mg/1000000000;
	}
	float mg_kg(float mg){
		return mg/1000000;
	}
	float mg_g(float mg){
		return mg/1000;
	}
	float mg_microg(float mg){
		return mg*1000;
	}
	float mg_imperialton(float mg){
		return mg/1016000000;
	}
	float mg_USton(float mg){
		return mg/907200000;
	}
	float mg_stone(float mg){
		return mg/6350000;
	}
	float mg_pound(float mg){
		return mg/453592.37;
	}
	float mg_ounce(float mg){
		return mg/28349.523;
	}

	/*microg to ...*/
	float microg_kg(float mg){
		return mg/1000000000;
	}
	float microg_g(float mg){
		return mg/1000000;
	}
	float microg_mg(float mg){
		return mg/1000;
	}
	float microg_stone(float mg){
		return mg/6350000000;
	}
	float microg_pound(float mg){
		return mg/453600000;
	}
	float microg_ounce(float mg){
		return mg/28350000;
	}

	/*imperialton to ...*/
	float imperialton_ton(float it){
		return it*1.016;
	}
	float imperialton_kg(float it){
		return it*1016.047;
	}
	float imperialton_g(float it){
		return it*1016000;
	}
	float imperialton_mg(float it){
		return it*1016000000;
	}
	float imperialton_USton(float it){
		return it*1.12;
	}
	float imperialton_stone(float it){
		return it*160;
	}
	float imperialton_pound(float it){
		return it*2240;
	}
	float imperialton_ounce(float it){
		return it*35840;
	}

	/*USton to ...*/
	float USton_ton(float us){
		return us*0.907185;
	}
	float USton_kg(float us){
		return us*907.185;
	}
	float USton_g(float us){
		return us*907185;
	}
	float USton_mg(float us){
		return us*907200000;
	}
	float USton_imperialton(float us){
		return us/1.12;
	}
	float USton_stone(float us){
		return us*142.857;
	}
	float USton_pound(float us){
		return us*2000;
	}
	float USton_ounce(float us){
		return us*32000;
	}

	/*stone to ...*/
	float stone_ton(float s){
		return s*0.00635029;
	}
	float stone_kg(float s){
		return s*6.35029;
	}
	float stone_g(float s){
		return s*6350.29;
	}
	float stone_mg(float s){
		return s*6350000;
	}
	float stone_microg(float s){
		return s*6350000000;
	}
	float stone_imperialton(float s){
		return s/160;
	}
	float stone_USton(float s){
		return s*0.007;
	}
	float stone_pound(float s){
		return s*14;
	}
	float stone_ounce(float s){
		return s*224;
	}

	/*pound or lb to ...*/
	float pound_ton(float p){
		return p*0.000453592;
	}
	float lb_ton(float p){
                return p*0.000453592;
        }
	float pound_kg(float p){
		return p*0.453592;
	}
	float lb_kg(float p){
                return p*0.453592;
        }
	float pound_g(float p){
		return p*453.592;
	}
        float lb_g(float p){
                return p*453.592;
        }
	float pound_mg(float p){
		return p*453592;
	}
        float lb_mg(float p){
                return p*453592;
        }
	float pound_microg(float p){
		return p*453600000;
	}
        float lb_microg(float p){
                return p*453600000;
        }
	float pound_imperialton(float p){
		return p/2240;
	}
        float lb_imperialton(float p){
                return p/2240;
        }
	float pound_USton(float p){
		return p/2000;
	}
        float lb_USton(float p){
                return p/2000;
        }
	float pound_stone(float p){
		return p/14;
	}
        float lb_stone(float p){
                return p/14;
        }
	float pound_ounce(float p){
		return p*16;
	}
        float lb_ounce(float p){
                return p*16;
        }

	/*ounce to ...*/
	float ounce_ton(float o){
		return o/35273.962;
	}
	float ounce_kg(float o){
		return o/35.274;
	}
	float ounce_g(float o){
		return o*28.3495;
	}
	float ounce_mg(float o){
		return o*28349.523;
	}
	float ounce_microg(float o){
		return o*28350000;
	}
	float ounce_imperialton(float o){
		return o/35840;
	}
	float ounce_USton(float o){
		return o/32000;
	}
	float ounce_stone(float o){
		return o/224;
	}
	float ounce_pound(float o){
		return o/16;
	}

/*TIME*/

	/*ns to ...*/
	float ns_micros(float ns){
		return ns/1000;
	}
	float ns_ms(float ns){
		return ns/1000000;
	}
	float ns_s(float ns){
		return ns/1000000000;
	}
	float ns_min(float ns){
		return ns/60000000000;
	}
	float ns_hr(float ns){
		return ns/3600000000000;
	}
	float ns_day(float ns){
		return ns/864000000000;
	}
	float ns_week(float ns){
		return ns/604800000000000;
	}
	float ns_month(float ns){
		return ns/2628000000000000;
	}
	float ns_year(float ns){
		return ns/31540000000000000;
	}

	/*micros to ..*/
	float micros_ns(float ms){
		return ms*1000;
	}
	float micros_ms(float ms){
		return ms/1000;
	}
	float micros_s(float ms){
		return ms/1000000;
	}
	float micros_min(float ms){
		return ms/60000000;
	}
	float micros_hr(float ms){
		return ms/3600000000;
	}
	float micros_day(float ms){
		return ms/86400000000;
	}
	float micros_week(float ms){
		return ms/604800000000;
	}
	float micros_month(float ms){
		return ms/2628000000000;
	}
	float micros_year(float ms){
		return ms/31540000000000;
	}

	/*ms to ...*/
	float ms_ns(float ms){
		return ms*1000000;
	}
	float ms_micros(float ms){
		return ms*1000;
	}
	float ms_s(float ms){
		return ms/1000;
	}
	float ms_min(float ms){
		return ms/60000;
	}
	float ms_hr(float ms){
		return ms/3600000;
	}
	float ms_day(float ms){
		return ms/86400000;
	}
	float ms_week(float ms){
		return ms/604800000;
	}
	float ms_month(float ms){
		return ms/2628000000;
	}
	float ms_year(float ms){
		return ms/31540000000;
	}

	/*s to ...*/
	float s_ns(float s){
		return s*1000000000;
	}
	float s_micros(float s){
		return s*1000000;
	}
	float s_ms(float s){
		return s*1000;
	}
	float s_min(float s){
		return s/60;
	}
	float s_hr(float s){
		return s/3600;
	}
	float s_day(float s){
		return s/86400;
	}
	float s_week(float s){
		return s/604800;
	}
	float s_month(float s){
		return s/2628000;
	}
	float s_year(float s){
		return s/31540000;
	}
	float s_decade(float s){
		return s/315400000;
	}
	float s_century(float s){
		return s/3154000000;
	}

	/*min to ...*/
	float min_ns(float m){
		return m*60000000000;
	}
	float min_micros(float m){
		return m*60000000;
	}
	float min_ms(float m){
		return m*60000;
	}
	float min_s(float m){
		return m*60;
	}
	float min_hr(float m){
		return m/60;
	}
	float min_day(float m){
		return m/1440;
	}
	float min_week(float m){
		return m/10080;
	}
	float min_month(float m){
		return m/43800.048;
	}
	float min_year(float m){
		return m/525600;
	}
	float min_decade(float m){
		return m/5256000;
	}
	float min_century(float m){
		return m/52560000;
	}

	/*hr to ...*/
	float hr_ns(float hr){
		return hr*3600000000000;
	}
	float hr_micros(float hr){
		return hr*3600000000;
	}
	float hr_ms(float hr){
		return hr*3600000;
	}
	float hr_s(float hr){
		return hr*3600;
	}
	float hr_min(float hr){
		return hr*60;
	}
	float hr_day(float hr){
		return hr/24;
	}
	float hr_week(float hr){
		return hr/168;
	}
	float hr_month(float hr){
		return hr*0.00136986;
	}
	float hr_year(float hr){
		return hr/8760;
	}
	float hr_decade(float hr){
		return hr/87600;
	}
	float hr_century(float hr){
		return hr/876000;
	}

	/*day to ...*/
	float day_ns(float d){
		return d*86400000000000;
	}
	float day_micros(float d){
		return d*86400000000;
	}
	float day_ms(float d){
		return d*86400000;
	}
	float day_s(float d){
		return d*86400;
	}
	float day_min(float d){
		return d*1440;
	}
	float day_hr(float d){
		return d*24;
	}
	float day_week(float d){
		return d/7;
	}
	float day_month(float d){
		return d*0.0328767;
	}
	float day_year(float d){
		return d/365;
	}
	float day_decade(float d){
		return d/3650;
	}
	float day_century(float d){
		return d/36500;
	}

	/*week to ...*/
	float week_ns(float w){
		return w*604800000000000000;
	}
	float week_micros(float w){
		return w*604800000000;
	}
	float week_ms(float w){
		return w*604800000;
	}
	float week_s(float w){
		return w*604800;
	}
	float week_min(float w){
		return w*10080;
	}
	float week_hr(float w){
		return w*168;
	}
	float week_day(float w){
		return w*7;
	}
	float week_month(float w){
		return w/4.345;
	}
	float week_year(float w){
		return w/52.143;
	}
	float week_decade(float w){
		return w*0.00191781;
	}
	float week_century(float w){
		return w*0.000191781;
	}

	/*month to ...*/
	float month_ns(float m){
		return m*2628000000000000;
	}
	float month_micros(float m){
		return m*2628000000000;
	}
	float month_ms(float m){
		return m*2628000000;
	}
	float month_s(float m){
		return m*2628000;
	}
	float month_min(float m){
		return m*43800;
	}
	float month_hr(float m){
		return m*730.001;
	}
	float month_day(float m){
		return m*30.4167;
	}
	float month_week(float m){
		return m*4.34524;
	}
	float month_year(float m){
		return m/12;
	}
	float month_decade(float m){
		return m/120;
	}
	float month_century(float m){
		return m/1199.999;
	}

	/*year to ...*/
	float year_ns(float y){
		return y*31540000000000000;
	}
	float year_micros(float y){
		return y*31540000000000;
	}
	float year_ms(float y){
		return y*31540000000;
	}
	float year_s(float y){
		return y*31540000;
	}
	float year_min(float y){
		return y*525600;
	}
	float year_hr(float y){
		return y*8760;
	}
	float year_day(float y){
		return y*365;
	}
	float year_week(float y){
		return y*52.1429;
	}
	float year_month(float y){
		return y*12;
	}
	float year_decade(float y){
		return y/10;
	}
	float year_century(float y){
		return y/100;
	}

	/*decade to ...*/
	float decade_s(float d){
		return d*315400000;
	}
	float decade_min(float d){
		return d*5256000;
	}
	float decade_hr(float d){
		return d*87600;
	}
	float decade_day(float d){
		return d*3650;
	}
	float decade_week(float d){
		return d*521.429;
	}
	float decade_month(float d){
		return d*120;
	}
	float decade_year(float d){
		return d*10;
	}
	float decade_century(float d){
		return d/10;
	}

	/*century to ...*/
	float century_s(float c){
		return c*3154000000;
	}
	float century_min(float c){
		return c*52560000;
	}
	float century_hr(float c){
		return c*876000;
	}
	float century_day(float c){
		return c*36500;
	}
	float century_week(float c){
		return c*5214.29;
	}
	float century_month(float c){
		return c*1200;
	}
	float century_year(float c){
		return c*100;
	}
	float century_decade(float c){
		return c*10;
	}

/*TEMPERATURE*/

	/*celsius to ...*/
	float C_F(float c){
		return ((c*1.8)+32);
	}
	float C_K(float c){
		return (c+273.15);
	}

	/*fahrenheit to ...*/
	float F_C(float f){
		return ((f-32)*(float)5.0/9);
	}
	float F_K(float f){
		return ((f-32)*(float)5.0/9+273.15);
	}

	/*kelvin to ...*/
	float K_C(float k){
		return (k-273.15);
	}
	float K_F(float k){
		return ((k-273.15)*1.8+32);
	}


/*AREA*/

	/*sqkm to ...*/
	float sqkm_sqm(float s){
		return (s*1000000);
	}
	float sqkm_sqmile(float s){
		return (s/2.59);
	}
	float sqkm_sqyard(float s){
		return (s*1196000);
	}
	float sqkm_sqfoot(float s){
		return (s*10760000);
	}
	float sqkm_sqinch(float s){
		return (s*155000000);
	}
	float sqkm_hectare(float s){
		return (s*100);
	}
	float sqkm_acre(float s){
		return (s*247.105);
	}

	/*sqm to ...*/
	float sqm_sqkm(float s){
		return (s/1000000);
	}
	float sqm_sqmile(float s){
		return (s/2590000);
	}
	float sqm_sqyard(float s){
		return (s*1.19599);
	}
	float sqm_sqfoot(float s){
		return (s*10.764);
	}
	float sqm_sqinch(float s){
		return (s*1550.003);
	}
	float sqm_hectare(float s){
		return (s/10000);
	}
	float sqm_acre(float s){
		return s*0.000247105;
	}

	/*sqmile to ...*/
	float sqmile_sqkm(float s){
		return s*2.59;
	}
	float sqmile_sqm(float s){
		return s*2590000;
	}
	float sqmile_sqyard(float s){
		return s*3098000;
	}
	float sqmile_sqfoot(float s){
		return s*27880000;
	}
	float sqmile_sqinch(float s){
		return s*4014000000;
	}
	float sqmile_hectare(float s){
		return s*258.999;
	}
	float sqmile_acre(float s){
		return s*640;
	}

	/*sqyard to ...*/
	float sqyard_sqkm(float s){
		return s/1196000;
	}
	float sqyard_sqm(float s){
		return s/1.196;
	}
	float sqyard_sqmile(float s){
		return s/3098000;
	}
	float sqyard_sqfoot(float s){
		return s*9;
	}
	float sqyard_sqinch(float s){
		return s*1296;
	}
	float sqyard_hectare(float s){
		return s/11959.9;
	}
	float sqyard_acre(float s){
		return s/4840;
	}

	/*sqfoot to ...*/
	float sqfoot_sqkm(float s){
		return s/10760000;
	}
	float sqfoot_sqm(float s){
		return s/10.764;
	}
	float sqfoot_sqmile(float s){
		return s/27880000;
	}
	float sqfoot_sqyard(float s){
		return s/9;
	}
	float sqfoot_sqinch(float s){
		return s*144;
	}
	float sqfoot_hectare(float s){
		return s/107639.104;
	}
	float sqfoot_acre(float s){
		return s/43560;
	}

	/*sqinch to ...*/
	float sqinch_sqkm(float s){
		return s/1550000000;
	}
	float sqinch_sqm(float s){
		return s/1550.003;
	}
	float sqinch_sqmile(float s){
		return s/4014000000;
	}
	float sqinch_sqyard(float s){
		return s/1296;
	}
	float sqinch_sqfoot(float s){
		return s/144;
	}
	float sqinch_hectare(float s){
		return s/15500000;
	}
	float sqinch_acre(float s){
		return s/6273000;
	}

	/*hectare to ...*/
	float hectare_sqkm(float s){
		return s/100;
	}
	float hectare_sqm(float s){
		return s*10000;
	}
	float hectare_sqmile(float s){
		return s*0.00386102;
	}
	float hectare_sqyard(float s){
		return s*11959.9;
	}
	float hectare_sqfoot(float s){
		return s*107639.104;
	}
	float hectare_sqinch(float s){
		return s*15500000;
	}
	float hectare_acre(float s){
		return s*2.47105;
	}

	/*acre to ...*/
	float acre_sqkm(float s){
		return s*0.00404686;
	}
	float acre_sqm(float s){
		return s*4046.86;
	}
	float acre_sqmile(float s){
		return s/640;
	}
	float acre_sqyard(float s){
		return s*4840;
	}
	float acre_sqfoot(float s){
		return s*43560;
	}
	float acre_sqinch(float s){
		return s*6273000;
	}
	float acre_hectare(float s){
		return s/2.471;
	}

/*DIGITAL STORAGE*/

	/*bit to ...*/
	float bit_byte(float b){
		return b/8;
	}
	float bit_kb(float b){
		return b/8192;
	}
	float bit_mb(float b){
		return b/8388608;
	}
	float bit_gb(float b){
		return b/8589934592;
	}
	float bit_tb(float b){
		return b/8796093022208;
	}

	/*byte to ...*/
	float byte_bit(float b){
		return b*8;
	}
	float byte_kb(float b){
		return b/1024;
	}
	float byte_mb(float b){
		return b/1048576;
	}
	float byte_gb(float b){
		return b/1073741824;
	}
	float byte_tb(float b){
		return b/1099511627776;
	}

	/*kb to ...*/
	float kb_bit(float b){
		return b*8192;
	}
	float kb_byte(float b){
		return b*1024;
	}
	float kb_mb(float b){
		return b/1024;
	}
	float kb_gb(float b){
		return b/1048576;
	}
	float kb_tb(float b){
		return b/1073741824;
	}

	/*mb to ...*/
	float mb_bit(float b){
		return b*8388508;
	}
	float mb_byte(float b){
		return b*1048576;
	}
	float mb_kb(float b){
		return b*1024;
	}
	float mb_gb(float b){
		return b/1024;
	}
	float mb_tb(float b){
		return b/1048576;
	}

	/*gb to ...*/
	float gb_bit(float b){
		return b*8589934592;
	}
	float gb_byte(float b){
		return b*1073741824;
	}
	float gb_kb(float b){
		return b*1048576;
	}
	float gb_mb(float b){
		return b*1024;
	}
	float gb_tb(float b){
		return b/1024;
	}

	/*tb to ...*/
	float tb_bit(float b){
		return b*8796093022208;
	}
	float tb_byte(float b){
		return b*1099511627776;
	}
	float tb_kb(float b){
		return b*1073741824;
	}
	float tb_mb(float b){
		return b*1048576;
	}
	float tb_gb(float b){
		return b*1024;
	}

/*ENERGY*/

	/*J to ...*/
	float J_kJ(float j){
		return j/1000;
	}
	float kJ_J(float j){
		return j*1000;
	}
	float J_kcal(float j){
		return j/4184;
	}
	float J_kilowatthr(float j){
		return j/3600000;
	}

	/*kcal to ...*/
	float kcal_J(float j){
		return j*4184;
	}
	float kcal_kilowatthr(float j){
		return j*0.00116222;
	}

	/*kilowatthr to ...*/
	float kilowatthr_J(float j){
		return j*3600000;
	}
	float kilowatthr_kcal(float j){
		return j*860.421;
	}

	/*eV to ...*/
	float eV_J(float j){
		return j/6242000000000000000;
	}

	/*degree to ...*/
	float degree_gradian(float d){
		return d*1.11111;
	}
	float degree_radian(float d){
		return d*0.0174533;
	}

	/*gradian to ...*/
	float gradian_degree(float d){
		return d*0.9;
	}
	float gradian_radian(float d){
		return d*0.015708;
	}

	/*radian to ...*/
	float radian_degree(float d){
		return d*57.2958;
	}
	float radian_gradian(float d){
		return d*63.662;
	}

