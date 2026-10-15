#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::GameCore { class MuseumAreaRow; }
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }
namespace RPG::GameCore { class MuseumStatsRow; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HIAFLIKLNFK_ACKGEPOJEIN_1_OFFSET UNITYSDK_OFFSET(0x15CDB350)
#define HIAFLIKLNFK_ACKGEPOJEIN_OFFSET UNITYSDK_OFFSET(0x15CDB260)
#define HIAFLIKLNFK_AECGGAEPJMN_OFFSET UNITYSDK_OFFSET(0x15CD8E10)
#define HIAFLIKLNFK_AMFOHINNOLJ_OFFSET UNITYSDK_OFFSET(0x15CD7FB0)
#define HIAFLIKLNFK_BLOOMOEFPMF_OFFSET UNITYSDK_OFFSET(0x15CD85A0)
#define HIAFLIKLNFK_BNPFIAJBDDJ_OFFSET UNITYSDK_OFFSET(0x15CD7950)
#define HIAFLIKLNFK_CBPLBKLKNLJ_OFFSET UNITYSDK_OFFSET(0x15CD7D20)
#define HIAFLIKLNFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CDB450)
#define HIAFLIKLNFK_CFOKPECBFKD_OFFSET UNITYSDK_OFFSET(0x15CDA0C0)
#define HIAFLIKLNFK_CLLEAEOJCIC_OFFSET UNITYSDK_OFFSET(0x15CDB1D0)
#define HIAFLIKLNFK_DEDAFGBMDMJ_OFFSET UNITYSDK_OFFSET(0x15CDB410)
#define HIAFLIKLNFK_DNGJCKDNADG_OFFSET UNITYSDK_OFFSET(0x15CDABA0)
#define HIAFLIKLNFK_DOJINIGMOJK_OFFSET UNITYSDK_OFFSET(0x15CD9B30)
#define HIAFLIKLNFK_EEHADOKFANG_OFFSET UNITYSDK_OFFSET(0x15CD9760)
#define HIAFLIKLNFK_EHKCDKFHMAH_OFFSET UNITYSDK_OFFSET(0x15CD9410)
#define HIAFLIKLNFK_ELDIDDPOOHP_OFFSET UNITYSDK_OFFSET(0x15CDA310)
#define HIAFLIKLNFK_EOFBBPGMGMH_OFFSET UNITYSDK_OFFSET(0x15CD8C10)
#define HIAFLIKLNFK_GCFMHAKKJFP_OFFSET UNITYSDK_OFFSET(0x15CDA6E0)
#define HIAFLIKLNFK_HIPCPGKOPGO_OFFSET UNITYSDK_OFFSET(0x15CD7E20)
#define HIAFLIKLNFK_HJALMJIJCBN_OFFSET UNITYSDK_OFFSET(0x15CD9040)
#define HIAFLIKLNFK_HMCDJHJDGLN_OFFSET UNITYSDK_OFFSET(0x15CDA900)
#define HIAFLIKLNFK_IGKCJMGODCM_OFFSET UNITYSDK_OFFSET(0x15CD9F50)
#define HIAFLIKLNFK_IHMFGKPCIKB_OFFSET UNITYSDK_OFFSET(0x15CD9C30)
#define HIAFLIKLNFK_IJCFADHBDJI_OFFSET UNITYSDK_OFFSET(0x15CDAA50)
#define HIAFLIKLNFK_JNLCBPKLJCM_OFFSET UNITYSDK_OFFSET(0x15CDAF70)
#define HIAFLIKLNFK_KJDBJDEHPEG_OFFSET UNITYSDK_OFFSET(0x15CD9560)
#define HIAFLIKLNFK_LKDGKOIKCMC_OFFSET UNITYSDK_OFFSET(0x15CD8350)
#define HIAFLIKLNFK_LOOHFEONOAN_OFFSET UNITYSDK_OFFSET(0x15CD9E90)
#define HIAFLIKLNFK_MAAGLBHLOCO_OFFSET UNITYSDK_OFFSET(0x15CD8990)
#define HIAFLIKLNFK_MKBPFPKPJBI_OFFSET UNITYSDK_OFFSET(0x15CD7C00)
#define HIAFLIKLNFK_NCNILFNJBOC_OFFSET UNITYSDK_OFFSET(0x15CDB150)
#define HIAFLIKLNFK_NEHAPPDMBIC_OFFSET UNITYSDK_OFFSET(0x15CD9810)
#define HIAFLIKLNFK_NHNKFKNGOAP_OFFSET UNITYSDK_OFFSET(0x15CDA790)
#define HIAFLIKLNFK_ODLPELPNPLH_OFFSET UNITYSDK_OFFSET(0x15CDA650)
#define HIAFLIKLNFK_OELCPCHDDKG_OFFSET UNITYSDK_OFFSET(0x15CD7B50)
#define HIAFLIKLNFK_OFACPKPKNLG_OFFSET UNITYSDK_OFFSET(0x15CD8020)
#define HIAFLIKLNFK_OKJBPIABNCB_OFFSET UNITYSDK_OFFSET(0x15CDAE40)
#define HIAFLIKLNFK_OLCMDCFPENK_OFFSET UNITYSDK_OFFSET(0x15CD7650)
#define HIAFLIKLNFK_PCNEDGKONPD_OFFSET UNITYSDK_OFFSET(0x15CD8680)
#define HIAFLIKLNFK_PJJHOMMCJOL_OFFSET UNITYSDK_OFFSET(0x15CDA3D0)
#define HIAFLIKLNFK_PPPAMCBGBON_OFFSET UNITYSDK_OFFSET(0x15CD8B50)

	class HIAFLIKLNFK : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_GIPPFBOJENO()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F50);
		}

		static ::RPG::Client::MuseumData** StaticGet_JBOBJCKEGPJ()
		{
			return (::RPG::Client::MuseumData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F58);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_CMOLADJDOGG()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F60);
		}

		static ::RPG::Client::MuseumAreaData** StaticGet_HINPOOKICHN()
		{
			return (::RPG::Client::MuseumAreaData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F68);
		}

		static ::RPG::GameCore::MuseumStatsRow** StaticGet_OLPOOIPFNDE()
		{
			return (::RPG::GameCore::MuseumStatsRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F70);
		}

		static ::RPG::GameCore::MuseumPhaseUpgradeRow** StaticGet_JCOINEFMILK()
		{
			return (::RPG::GameCore::MuseumPhaseUpgradeRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F78);
		}

		static ::RPG::Client::MuseumPropertyData** StaticGet_CKMKIJPBAKK()
		{
			return (::RPG::Client::MuseumPropertyData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F80);
		}

		static ::RPG::GameCore::MuseumAreaRow** StaticGet_DECIFAHEKIM()
		{
			return (::RPG::GameCore::MuseumAreaRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x19F88);
		}

		static ::System::UInt32* StaticGet_BFBNDNMNCNM()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x5E40);
		}

		// static const ::System::Object OLMJJHDENOG; // 0x0
		// static const ::System::Object IOHMBOMACME; // 0x0
		// static const ::System::String* KDEACIJOGPD; // 0x0
		// static const ::System::String* NCLHGIKPLLJ; // 0x0
		// static const ::System::String* GOFHOIJMGJD; // 0x0
		// static const ::System::String* FFOCHHBDKKC; // 0x0
		// static const ::System::String* OJNBDHHHNCA; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_CCTOR_OFFSET))();
		}

		static ::System::Void OLCMDCFPENK(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_OLCMDCFPENK_OFFSET))(a1);
		}

		static ::System::Void HIPCPGKOPGO(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_HIPCPGKOPGO_OFFSET))(a1);
		}

		static ::System::Void LKDGKOIKCMC(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_LKDGKOIKCMC_OFFSET))(a1, a2);
		}

		static ::System::Void PCNEDGKONPD(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_PCNEDGKONPD_OFFSET))(a1);
		}

		static ::System::Void MAAGLBHLOCO(::RPG::Client::MuseumAreaData* a1, ::RPG::Client::MuseumStaffData* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_MAAGLBHLOCO_OFFSET))(a1, a2);
		}

		static ::System::UInt32 EOFBBPGMGMH(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_EOFBBPGMGMH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 AECGGAEPJMN(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_AECGGAEPJMN_OFFSET))(a1);
		}

		static ::System::Void HJALMJIJCBN(::RPG::Client::MuseumData* a1, ::RPG::Client::MuseumTurnResult* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumData*, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_HJALMJIJCBN_OFFSET))(a1, a2);
		}

		static ::System::Void NEHAPPDMBIC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_NEHAPPDMBIC_OFFSET))();
		}

		static ::System::Void EHKCDKFHMAH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_EHKCDKFHMAH_OFFSET))();
		}

		static ::System::Void BNPFIAJBDDJ(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_BNPFIAJBDDJ_OFFSET))(a1, a2);
		}

		static ::System::Void OELCPCHDDKG(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2, ::RPG::GameCore::StuffStats a3)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_OELCPCHDDKG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AMFOHINNOLJ(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_AMFOHINNOLJ_OFFSET))(a1);
		}

		static ::System::Void DOJINIGMOJK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_DOJINIGMOJK_OFFSET))();
		}

		static ::System::Void OFACPKPKNLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_OFACPKPKNLG_OFFSET))(a1);
		}

		static ::System::Void CBPLBKLKNLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_CBPLBKLKNLJ_OFFSET))(a1);
		}

		static ::System::Void LOOHFEONOAN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_LOOHFEONOAN_OFFSET))();
		}

		static ::System::Void IGKCJMGODCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_IGKCJMGODCM_OFFSET))();
		}

		static ::System::Void MKBPFPKPJBI(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_MKBPFPKPJBI_OFFSET))(a1, a2);
		}

		static ::System::Void ODLPELPNPLH(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_ODLPELPNPLH_OFFSET))(a1);
		}

		static ::System::UInt32 DNGJCKDNADG(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_DNGJCKDNADG_OFFSET))(a1, a2);
		}

		static ::System::Void GCFMHAKKJFP(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_GCFMHAKKJFP_OFFSET))(a1);
		}

		static ::System::UInt32 JNLCBPKLJCM(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_JNLCBPKLJCM_OFFSET))(a1);
		}

		static ::System::Void BLOOMOEFPMF(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_BLOOMOEFPMF_OFFSET))(a1);
		}

		static ::System::Void NHNKFKNGOAP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_NHNKFKNGOAP_OFFSET))();
		}

		static ::System::UInt32 IJCFADHBDJI(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_IJCFADHBDJI_OFFSET))(a1);
		}

		static ::System::UInt32 HMCDJHJDGLN(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_HMCDJHJDGLN_OFFSET))(a1);
		}

		static ::System::UInt32 OKJBPIABNCB(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_OKJBPIABNCB_OFFSET))(a1);
		}

		static ::System::UInt32 PPPAMCBGBON(::RPG::Client::MuseumStaffData* a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::MuseumStaffData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_PPPAMCBGBON_OFFSET))(a1, a2);
		}

		static ::System::UInt32 CFOKPECBFKD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_CFOKPECBFKD_OFFSET))();
		}

		static ::System::Boolean ELDIDDPOOHP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_ELDIDDPOOHP_OFFSET))(a1);
		}

		static ::System::Void IHMFGKPCIKB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_IHMFGKPCIKB_OFFSET))();
		}

		static ::System::Void PJJHOMMCJOL(::RPG::GameCore::StuffStats a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_PJJHOMMCJOL_OFFSET))(a1);
		}

		static ::System::UInt32 EEHADOKFANG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_EEHADOKFANG_OFFSET))(a1);
		}

		static ::System::UInt32 KJDBJDEHPEG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_KJDBJDEHPEG_OFFSET))();
		}

		static ::System::Void NCNILFNJBOC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_NCNILFNJBOC_OFFSET))();
		}

		static ::System::Void CLLEAEOJCIC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_CLLEAEOJCIC_OFFSET))(a1);
		}

		static ::System::Void ACKGEPOJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIAFLIKLNFK_ACKGEPOJEIN_OFFSET))(a1);
		}

		static ::System::Void ACKGEPOJEIN_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_ACKGEPOJEIN_1_OFFSET))();
		}

		static ::System::Void DEDAFGBMDMJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFLIKLNFK_DEDAFGBMDMJ_OFFSET))();
		}

	};
