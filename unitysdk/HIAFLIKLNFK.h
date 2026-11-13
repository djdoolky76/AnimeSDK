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

#define HIAFLIKLNFK_ACKGEPOJEIN_1_OFFSET UNITYSDK_OFFSET(0x19027080)
#define HIAFLIKLNFK_ACKGEPOJEIN_OFFSET UNITYSDK_OFFSET(0x19026F90)
#define HIAFLIKLNFK_AECGGAEPJMN_OFFSET UNITYSDK_OFFSET(0x19024B50)
#define HIAFLIKLNFK_AMFOHINNOLJ_OFFSET UNITYSDK_OFFSET(0x19023CF0)
#define HIAFLIKLNFK_BLOOMOEFPMF_OFFSET UNITYSDK_OFFSET(0x190242E0)
#define HIAFLIKLNFK_BNPFIAJBDDJ_OFFSET UNITYSDK_OFFSET(0x190236A0)
#define HIAFLIKLNFK_CBPLBKLKNLJ_OFFSET UNITYSDK_OFFSET(0x19023A70)
#define HIAFLIKLNFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x19027180)
#define HIAFLIKLNFK_CFOKPECBFKD_OFFSET UNITYSDK_OFFSET(0x19025DF0)
#define HIAFLIKLNFK_CLLEAEOJCIC_OFFSET UNITYSDK_OFFSET(0x19026F00)
#define HIAFLIKLNFK_DEDAFGBMDMJ_OFFSET UNITYSDK_OFFSET(0x19027140)
#define HIAFLIKLNFK_DNGJCKDNADG_OFFSET UNITYSDK_OFFSET(0x190268D0)
#define HIAFLIKLNFK_DOJINIGMOJK_OFFSET UNITYSDK_OFFSET(0x19025860)
#define HIAFLIKLNFK_EEHADOKFANG_OFFSET UNITYSDK_OFFSET(0x19025490)
#define HIAFLIKLNFK_EHKCDKFHMAH_OFFSET UNITYSDK_OFFSET(0x19025140)
#define HIAFLIKLNFK_ELDIDDPOOHP_OFFSET UNITYSDK_OFFSET(0x19026040)
#define HIAFLIKLNFK_EOFBBPGMGMH_OFFSET UNITYSDK_OFFSET(0x19024950)
#define HIAFLIKLNFK_GCFMHAKKJFP_OFFSET UNITYSDK_OFFSET(0x19026410)
#define HIAFLIKLNFK_HIPCPGKOPGO_OFFSET UNITYSDK_OFFSET(0x19023B70)
#define HIAFLIKLNFK_HJALMJIJCBN_OFFSET UNITYSDK_OFFSET(0x19024D80)
#define HIAFLIKLNFK_HMCDJHJDGLN_OFFSET UNITYSDK_OFFSET(0x19026630)
#define HIAFLIKLNFK_IGKCJMGODCM_OFFSET UNITYSDK_OFFSET(0x19025C80)
#define HIAFLIKLNFK_IHMFGKPCIKB_OFFSET UNITYSDK_OFFSET(0x19025960)
#define HIAFLIKLNFK_IJCFADHBDJI_OFFSET UNITYSDK_OFFSET(0x19026780)
#define HIAFLIKLNFK_JNLCBPKLJCM_OFFSET UNITYSDK_OFFSET(0x19026CA0)
#define HIAFLIKLNFK_KJDBJDEHPEG_OFFSET UNITYSDK_OFFSET(0x19025290)
#define HIAFLIKLNFK_LKDGKOIKCMC_OFFSET UNITYSDK_OFFSET(0x19024090)
#define HIAFLIKLNFK_LOOHFEONOAN_OFFSET UNITYSDK_OFFSET(0x19025BC0)
#define HIAFLIKLNFK_MAAGLBHLOCO_OFFSET UNITYSDK_OFFSET(0x190246D0)
#define HIAFLIKLNFK_MKBPFPKPJBI_OFFSET UNITYSDK_OFFSET(0x19023950)
#define HIAFLIKLNFK_NCNILFNJBOC_OFFSET UNITYSDK_OFFSET(0x19026E80)
#define HIAFLIKLNFK_NEHAPPDMBIC_OFFSET UNITYSDK_OFFSET(0x19025540)
#define HIAFLIKLNFK_NHNKFKNGOAP_OFFSET UNITYSDK_OFFSET(0x190264C0)
#define HIAFLIKLNFK_ODLPELPNPLH_OFFSET UNITYSDK_OFFSET(0x19026380)
#define HIAFLIKLNFK_OELCPCHDDKG_OFFSET UNITYSDK_OFFSET(0x190238A0)
#define HIAFLIKLNFK_OFACPKPKNLG_OFFSET UNITYSDK_OFFSET(0x19023D60)
#define HIAFLIKLNFK_OKJBPIABNCB_OFFSET UNITYSDK_OFFSET(0x19026B70)
#define HIAFLIKLNFK_OLCMDCFPENK_OFFSET UNITYSDK_OFFSET(0x190233A0)
#define HIAFLIKLNFK_PCNEDGKONPD_OFFSET UNITYSDK_OFFSET(0x190243C0)
#define HIAFLIKLNFK_PJJHOMMCJOL_OFFSET UNITYSDK_OFFSET(0x19026100)
#define HIAFLIKLNFK_PPPAMCBGBON_OFFSET UNITYSDK_OFFSET(0x19024890)

inline static constexpr unsigned int HIAFLIKLNFK_TypeDefinitionIndex = 68265;

	class HIAFLIKLNFK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::MuseumStatsRow** StaticGet_OLPOOIPFNDE()
		{
			return (::RPG::GameCore::MuseumStatsRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB6F0);
		}

		static ::RPG::Client::MuseumAreaData** StaticGet_HINPOOKICHN()
		{
			return (::RPG::Client::MuseumAreaData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB6F8);
		}

		static ::System::Text::StringBuilder** StaticGet_GIPPFBOJENO()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB700);
		}

		static ::RPG::Client::MuseumPropertyData** StaticGet_CKMKIJPBAKK()
		{
			return (::RPG::Client::MuseumPropertyData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB708);
		}

		static ::RPG::GameCore::MuseumAreaRow** StaticGet_DECIFAHEKIM()
		{
			return (::RPG::GameCore::MuseumAreaRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB710);
		}

		static ::RPG::GameCore::MuseumPhaseUpgradeRow** StaticGet_JCOINEFMILK()
		{
			return (::RPG::GameCore::MuseumPhaseUpgradeRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB718);
		}

		static ::RPG::Client::MuseumData** StaticGet_JBOBJCKEGPJ()
		{
			return (::RPG::Client::MuseumData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB720);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_CMOLADJDOGG()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xB728);
		}

		static ::System::UInt32* StaticGet_BFBNDNMNCNM()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x15E0);
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
