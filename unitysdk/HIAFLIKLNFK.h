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

#define HIAFLIKLNFK_ACKGEPOJEIN_1_OFFSET UNITYSDK_OFFSET(0x16C28C40)
#define HIAFLIKLNFK_ACKGEPOJEIN_OFFSET UNITYSDK_OFFSET(0x16C28B50)
#define HIAFLIKLNFK_AECGGAEPJMN_OFFSET UNITYSDK_OFFSET(0x16C26710)
#define HIAFLIKLNFK_AMFOHINNOLJ_OFFSET UNITYSDK_OFFSET(0x16C258B0)
#define HIAFLIKLNFK_BLOOMOEFPMF_OFFSET UNITYSDK_OFFSET(0x16C25EA0)
#define HIAFLIKLNFK_BNPFIAJBDDJ_OFFSET UNITYSDK_OFFSET(0x16C25260)
#define HIAFLIKLNFK_CBPLBKLKNLJ_OFFSET UNITYSDK_OFFSET(0x16C25630)
#define HIAFLIKLNFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x16C28D40)
#define HIAFLIKLNFK_CFOKPECBFKD_OFFSET UNITYSDK_OFFSET(0x16C279B0)
#define HIAFLIKLNFK_CLLEAEOJCIC_OFFSET UNITYSDK_OFFSET(0x16C28AC0)
#define HIAFLIKLNFK_DEDAFGBMDMJ_OFFSET UNITYSDK_OFFSET(0x16C28D00)
#define HIAFLIKLNFK_DNGJCKDNADG_OFFSET UNITYSDK_OFFSET(0x16C28490)
#define HIAFLIKLNFK_DOJINIGMOJK_OFFSET UNITYSDK_OFFSET(0x16C27420)
#define HIAFLIKLNFK_EEHADOKFANG_OFFSET UNITYSDK_OFFSET(0x16C27050)
#define HIAFLIKLNFK_EHKCDKFHMAH_OFFSET UNITYSDK_OFFSET(0x16C26D00)
#define HIAFLIKLNFK_ELDIDDPOOHP_OFFSET UNITYSDK_OFFSET(0x16C27C00)
#define HIAFLIKLNFK_EOFBBPGMGMH_OFFSET UNITYSDK_OFFSET(0x16C26510)
#define HIAFLIKLNFK_GCFMHAKKJFP_OFFSET UNITYSDK_OFFSET(0x16C27FD0)
#define HIAFLIKLNFK_HIPCPGKOPGO_OFFSET UNITYSDK_OFFSET(0x16C25730)
#define HIAFLIKLNFK_HJALMJIJCBN_OFFSET UNITYSDK_OFFSET(0x16C26940)
#define HIAFLIKLNFK_HMCDJHJDGLN_OFFSET UNITYSDK_OFFSET(0x16C281F0)
#define HIAFLIKLNFK_IGKCJMGODCM_OFFSET UNITYSDK_OFFSET(0x16C27840)
#define HIAFLIKLNFK_IHMFGKPCIKB_OFFSET UNITYSDK_OFFSET(0x16C27520)
#define HIAFLIKLNFK_IJCFADHBDJI_OFFSET UNITYSDK_OFFSET(0x16C28340)
#define HIAFLIKLNFK_JNLCBPKLJCM_OFFSET UNITYSDK_OFFSET(0x16C28860)
#define HIAFLIKLNFK_KJDBJDEHPEG_OFFSET UNITYSDK_OFFSET(0x16C26E50)
#define HIAFLIKLNFK_LKDGKOIKCMC_OFFSET UNITYSDK_OFFSET(0x16C25C50)
#define HIAFLIKLNFK_LOOHFEONOAN_OFFSET UNITYSDK_OFFSET(0x16C27780)
#define HIAFLIKLNFK_MAAGLBHLOCO_OFFSET UNITYSDK_OFFSET(0x16C26290)
#define HIAFLIKLNFK_MKBPFPKPJBI_OFFSET UNITYSDK_OFFSET(0x16C25510)
#define HIAFLIKLNFK_NCNILFNJBOC_OFFSET UNITYSDK_OFFSET(0x16C28A40)
#define HIAFLIKLNFK_NEHAPPDMBIC_OFFSET UNITYSDK_OFFSET(0x16C27100)
#define HIAFLIKLNFK_NHNKFKNGOAP_OFFSET UNITYSDK_OFFSET(0x16C28080)
#define HIAFLIKLNFK_ODLPELPNPLH_OFFSET UNITYSDK_OFFSET(0x16C27F40)
#define HIAFLIKLNFK_OELCPCHDDKG_OFFSET UNITYSDK_OFFSET(0x16C25460)
#define HIAFLIKLNFK_OFACPKPKNLG_OFFSET UNITYSDK_OFFSET(0x16C25920)
#define HIAFLIKLNFK_OKJBPIABNCB_OFFSET UNITYSDK_OFFSET(0x16C28730)
#define HIAFLIKLNFK_OLCMDCFPENK_OFFSET UNITYSDK_OFFSET(0x16C24F60)
#define HIAFLIKLNFK_PCNEDGKONPD_OFFSET UNITYSDK_OFFSET(0x16C25F80)
#define HIAFLIKLNFK_PJJHOMMCJOL_OFFSET UNITYSDK_OFFSET(0x16C27CC0)
#define HIAFLIKLNFK_PPPAMCBGBON_OFFSET UNITYSDK_OFFSET(0x16C26450)

inline static constexpr unsigned int HIAFLIKLNFK_TypeDefinitionIndex = 68265;

	class HIAFLIKLNFK : public ::System::Object
	{
	public:
		static ::RPG::Client::MuseumPropertyData** StaticGet_CKMKIJPBAKK()
		{
			return (::RPG::Client::MuseumPropertyData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB60);
		}

		static ::RPG::GameCore::MuseumStatsRow** StaticGet_OLPOOIPFNDE()
		{
			return (::RPG::GameCore::MuseumStatsRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB68);
		}

		static ::RPG::GameCore::MuseumAreaRow** StaticGet_DECIFAHEKIM()
		{
			return (::RPG::GameCore::MuseumAreaRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB70);
		}

		static ::RPG::Client::MuseumData** StaticGet_JBOBJCKEGPJ()
		{
			return (::RPG::Client::MuseumData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB78);
		}

		static ::System::Text::StringBuilder** StaticGet_GIPPFBOJENO()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB80);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_CMOLADJDOGG()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB88);
		}

		static ::RPG::GameCore::MuseumPhaseUpgradeRow** StaticGet_JCOINEFMILK()
		{
			return (::RPG::GameCore::MuseumPhaseUpgradeRow**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB90);
		}

		static ::RPG::Client::MuseumAreaData** StaticGet_HINPOOKICHN()
		{
			return (::RPG::Client::MuseumAreaData**)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0xBB98);
		}

		static ::System::UInt32* StaticGet_BFBNDNMNCNM()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HIAFLIKLNFK")->GetStaticField(0x1500);
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
