Action()
{

	web_add_header("X-P2P-PeerDist", 
		"Version=1.1");

	web_add_header("X-P2P-PeerDistEx", 
		"MinContentInformation=1.0, MaxContentInformation=1.0");

	web_url("request.s", 
		"URL=http://gorgon.youdao.com/gorgon/request.s?s=%3D%3DAM98kTfNUSHFUTmITOwcTZkZWNiVWZ1ATN%0A%0DyQjMDBVPklGZ1ZCM9Q3YkZSM9Q3YmATNhZGZiJWNwYjYhVTMwYmN2MWOwkjYjJjMxEmM0QDN9QWa&ydet=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://oimagec3.ydstatic.com/image?id=6765010721196479494&product=adpublish&sc=0&rm=2&gsb=0&gsbd=60", "Referer=", ENDITEM, 
		"Url=http://log.yex.youdao.com/it?yexi=2154c7ed90003e9d3e1cecedb04614d6&yexcb=dN28fzMmoX87oW_Vmuv0Bsqh51AmR16IuVmaSDFv2zD75Cr16-LGDb1HYZXg2UAnE8fnQVbAs4-7VKl84VPrZU1uX_MBt3NwjPlNJFtqBjCJt5y31zQJtyW4EVj96-CgdDZcvu1iAYCN9MK8TAArZxXSs6xztL2oxn_z-x04GB2kHqccOchSHukTMBGTC9McTuRvWOFSm25qFjiXooodtwsYkMIrr7mLU0tcORwi4Mxbqs6tM6Jg6F9SI5Q3eEdQuBvdXPFQhu8JrnfqtMhBSg&yext="
		"Kz4LFU_dEfQfAcA4u59tbybro4WyH_adHxx9fVrV1wBiVkF4qrzyLs9X-DmHRJcv8d0JVI2qBUWbBDiwRPPXxi_cyybD2ov7XIKYKcdxy4uaMuAA3Cc03JXPeSCjuu4dp4OHYSqaQI9uL-iy_avgTNwALl0HPXp4wPtyy7hIi4fUHWnUR1joHBmdBPfIIGAHgvOvPSJ3n7h3m4WYHpDaQKTbO57IzXbFVhvqMNDPMbJNS8hPZojc_HlTtxtqmH06we1XxewGVK92JaCTkWJUv45Eu-Dh0OWEWOmDzvhZ6JWRDdoL-SB-GY3URXTGLGHVt5A-iTm6N-3nFD4WBc4X2Bk9NnvSacZKsCt_d7f2qqrdeyUuEdVhVKTuNSA_-WybfyPTAipv16G0ugnKH3PnKYNxoo3mw0O8BjTksGld_EtiRxqrxi7lMNY5ydSskIF8kVeUH5okiF9sO2G7V2XWvXOgEBvs95foNs1KiKUCbYrPMiAhmz-jZv"
		"TewIcc35gTtgDDSpPz6henFJZcHEMSRc7nsNxuRX2GPQSrFIcBplhURbTrbHfqo4s5AFNbEja8ojUTowJOFoM59HzkfY6LVeyZTkw86-Jjjz98U6Hc1XtxmPYkBZDab3_XZMc5NJru35UkmnU86gj3bO4MJeaqhA&yexv=0&iid=%7B%226765010721196479494%22%3A4%7D&sid=2710&tid=20", "Referer=", ENDITEM, 
		LAST);

	return 0;
}