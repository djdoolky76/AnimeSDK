#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EHLMPJIELJF;
class FHNIMGBMPLN;
class HKENHAIMOCH;
class JHGAJMAOPJE;
class JPCLJKFJALE;
class PLEODCMINJF;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimNavMapConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBinding; }
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLEODCMINJF_ANBJKOKGADB_OFFSET UNITYSDK_OFFSET(0xCC2BB50)
#define PLEODCMINJF_BHKBAFPOPPA_OFFSET UNITYSDK_OFFSET(0xCC2CA60)
#define PLEODCMINJF_BIIOCMIMBDO_OFFSET UNITYSDK_OFFSET(0xCC2CBB0)
#define PLEODCMINJF_BNLJMCKFGEB_OFFSET UNITYSDK_OFFSET(0xCC305F0)
#define PLEODCMINJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCC26CE0)
#define PLEODCMINJF_CAIOHGLJFKL_OFFSET UNITYSDK_OFFSET(0xCC2E520)
#define PLEODCMINJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC30A40)
#define PLEODCMINJF_CDAGBCKEMIF_OFFSET UNITYSDK_OFFSET(0xCC30A00)
#define PLEODCMINJF_CKFJIGKNJBP_OFFSET UNITYSDK_OFFSET(0xCC2D320)
#define PLEODCMINJF_CMCOKJICIJK_OFFSET UNITYSDK_OFFSET(0xCC2FE30)
#define PLEODCMINJF_CMMGOHDLNEG_OFFSET UNITYSDK_OFFSET(0xCC2EAB0)
#define PLEODCMINJF_CNNHIKIOBEL_OFFSET UNITYSDK_OFFSET(0xCC2E280)
#define PLEODCMINJF_CNPBGPMKLLN_OFFSET UNITYSDK_OFFSET(0xCC2DC20)
#define PLEODCMINJF_COIAOIAONEA_OFFSET UNITYSDK_OFFSET(0xCC28980)
#define PLEODCMINJF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC26F60)
#define PLEODCMINJF_DHILPGIIFNJ_OFFSET UNITYSDK_OFFSET(0xCC2EE00)
#define PLEODCMINJF_DIIBHNFCKCK_OFFSET UNITYSDK_OFFSET(0xCC30460)
#define PLEODCMINJF_DKHIJIPBAEN_OFFSET UNITYSDK_OFFSET(0xCC271A0)
#define PLEODCMINJF_EJEJKBCCIPN_OFFSET UNITYSDK_OFFSET(0xCC27550)
#define PLEODCMINJF_EMAJLBABELI_1_OFFSET UNITYSDK_OFFSET(0xCC2DE20)
#define PLEODCMINJF_EMAJLBABELI_OFFSET UNITYSDK_OFFSET(0xCC287A0)
#define PLEODCMINJF_EOFAEMDAFEP_OFFSET UNITYSDK_OFFSET(0xCC2C8C0)
#define PLEODCMINJF_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xCC2B240)
#define PLEODCMINJF_FBNGAHBHAGG_OFFSET UNITYSDK_OFFSET(0xCC2DD20)
#define PLEODCMINJF_FIFLAHGCPJP_OFFSET UNITYSDK_OFFSET(0xCC2F9E0)
#define PLEODCMINJF_FJBGDPLFLJM_OFFSET UNITYSDK_OFFSET(0xCC2CD00)
#define PLEODCMINJF_FJNIGEEONCA_OFFSET UNITYSDK_OFFSET(0xCC28B40)
#define PLEODCMINJF_GET_REQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xCC309B0)
#define PLEODCMINJF_GET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0xCC30990)
#define PLEODCMINJF_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0xCC30980)
#define PLEODCMINJF_GMFPNKHEKPD_OFFSET UNITYSDK_OFFSET(0xCC2C6B0)
#define PLEODCMINJF_HBFPNDJFOAK_OFFSET UNITYSDK_OFFSET(0xCC2B290)
#define PLEODCMINJF_HKGJOCDLEHB_OFFSET UNITYSDK_OFFSET(0xCC2C600)
#define PLEODCMINJF_HKPHCBDEJFB_OFFSET UNITYSDK_OFFSET(0xCC2E6C0)
#define PLEODCMINJF_HOGCJJEKAGF_OFFSET UNITYSDK_OFFSET(0xCC297B0)
#define PLEODCMINJF_IBFKCEDMPDP_OFFSET UNITYSDK_OFFSET(0xCC2BD30)
#define PLEODCMINJF_ICFMJAGPFJE_OFFSET UNITYSDK_OFFSET(0xCC2C720)
#define PLEODCMINJF_IMNMGBAICAG_OFFSET UNITYSDK_OFFSET(0xCC27750)
#define PLEODCMINJF_INGNBAIHPAI_OFFSET UNITYSDK_OFFSET(0xCC2CF10)
#define PLEODCMINJF_JCNCALOIAJH_OFFSET UNITYSDK_OFFSET(0xCC2FC40)
#define PLEODCMINJF_JGFHICLCIDO_OFFSET UNITYSDK_OFFSET(0xCC30780)
#define PLEODCMINJF_JJPBHHBHGDK_OFFSET UNITYSDK_OFFSET(0xCC29040)
#define PLEODCMINJF_JNNDFMELADJ_OFFSET UNITYSDK_OFFSET(0xCC2E430)
#define PLEODCMINJF_KEIGOMJFKOJ_OFFSET UNITYSDK_OFFSET(0xCC2BCF0)
#define PLEODCMINJF_KGPGNGOAFFN_OFFSET UNITYSDK_OFFSET(0xCC2D8D0)
#define PLEODCMINJF_KHLLFBIPNMP_OFFSET UNITYSDK_OFFSET(0xCC309C0)
#define PLEODCMINJF_KLFFFMFIBHK_OFFSET UNITYSDK_OFFSET(0xCC2D590)
#define PLEODCMINJF_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xCC30350)
#define PLEODCMINJF_LILGNDPJEOF_OFFSET UNITYSDK_OFFSET(0xCC2F530)
#define PLEODCMINJF_LKPPHJMNHBI_OFFSET UNITYSDK_OFFSET(0xCC2F450)
#define PLEODCMINJF_LLLNAKJKOKK_OFFSET UNITYSDK_OFFSET(0xCC28290)
#define PLEODCMINJF_LPGDIDCJGCB_OFFSET UNITYSDK_OFFSET(0xCC29960)
#define PLEODCMINJF_MDPJDAKMMJD_OFFSET UNITYSDK_OFFSET(0xCC2D980)
#define PLEODCMINJF_MEJGEEHPEEO_OFFSET UNITYSDK_OFFSET(0xCC2FFD0)
#define PLEODCMINJF_NBIGOPOLHKL_OFFSET UNITYSDK_OFFSET(0xCC2D160)
#define PLEODCMINJF_NKDEABEBOBL_OFFSET UNITYSDK_OFFSET(0xCC30930)
#define PLEODCMINJF_OAMGAGFDKKO_OFFSET UNITYSDK_OFFSET(0xCC28050)
#define PLEODCMINJF_OBFHHMANOEH_OFFSET UNITYSDK_OFFSET(0xCC2E850)
#define PLEODCMINJF_OPFFNAOEIEK_OFFSET UNITYSDK_OFFSET(0xCC299C0)
#define PLEODCMINJF_PMBFAOEECEM_OFFSET UNITYSDK_OFFSET(0xCC2F610)
#define PLEODCMINJF_SET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0xCC309A0)

inline static constexpr unsigned int PLEODCMINJF_TypeDefinitionIndex = 63614;

	class PLEODCMINJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequireSubMissionIDs_k__BackingField; // 0x10
		::RPG::GameCore::FiveDimNavMapConfig* DGNHEOPGJJE; // 0x18
		::HKENHAIMOCH* _SubNavGraphInfo_k__BackingField; // 0x20
		::RPG::GameCore::LevelLittleGameInfo* MHKIDMHMMCL; // 0x28
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x30
		::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* DOOJHNILCED; // 0x40
		::System::Collections::Generic::List_1<::EHLMPJIELJF*>* _SurfaceList_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* AKMEAPBBNDH; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DHIBGONCNAP; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int16>* CHKAALLGBOM; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EHLMPJIELJF*>* DOCIJHJHIFN; // 0x68
		::RPG::GameCore::FiveDimLevelSettings* LHBPBEADJLE; // 0x70
		::KLNKLOMDIIC CPONBGCBBKO; // 0x78
		static ::System::Single* StaticGet_ANKAMHOJOOM()
		{
			return (::System::Single*)UnitySDK::FromName("", "PLEODCMINJF")->GetStaticField(0x16080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLEODCMINJF_CCTOR_OFFSET))();
		}

		static ::PLEODCMINJF* BPLPBPMEODA(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
		{
			return ((::PLEODCMINJF*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + PLEODCMINJF_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void EPNKLHCHFIH(::FHNIMGBMPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + PLEODCMINJF_EPNKLHCHFIH_OFFSET))(this, a1);
		}

		static ::System::String* LPGDIDCJGCB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PLEODCMINJF_LPGDIDCJGCB_OFFSET))(a1);
		}

		::EHLMPJIELJF* ANBJKOKGADB(::System::UInt32 a1)
		{
			return ((::EHLMPJIELJF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_ANBJKOKGADB_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimNavMapConfig* KEIGOMJFKOJ()
		{
			return ((::RPG::GameCore::FiveDimNavMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_KEIGOMJFKOJ_OFFSET))(this);
		}

		::System::Boolean IBFKCEDMPDP(::System::UInt32 a1, ::System::String* a2, ::KLNKLOMDIIC a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::KLNKLOMDIIC, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEODCMINJF_IBFKCEDMPDP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HKGJOCDLEHB(::System::UInt32 a1, ::RPG::GameCore::LittleGameNavMapIconConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + PLEODCMINJF_HKGJOCDLEHB_OFFSET))(this, a1, a2);
		}

		::System::Void GMFPNKHEKPD(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_GMFPNKHEKPD_OFFSET))(this, a1);
		}

		::System::Void BHKBAFPOPPA(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_BHKBAFPOPPA_OFFSET))(this, a1);
		}

		::System::Void BIIOCMIMBDO(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_BIIOCMIMBDO_OFFSET))(this, a1);
		}

		::System::Void ICFMJAGPFJE(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_ICFMJAGPFJE_OFFSET))(this, a1);
		}

		::System::Void EOFAEMDAFEP(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_EOFAEMDAFEP_OFFSET))(this, a1);
		}

		::System::Void HOGCJJEKAGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_HOGCJJEKAGF_OFFSET))(this);
		}

		::System::Void EJEJKBCCIPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_EJEJKBCCIPN_OFFSET))(this);
		}

		::System::Void DKHIJIPBAEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_DKHIJIPBAEN_OFFSET))(this);
		}

		::System::Boolean FJBGDPLFLJM(::EHLMPJIELJF* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_FJBGDPLFLJM_OFFSET))(this, a1, a2);
		}

		::System::Boolean INGNBAIHPAI(::EHLMPJIELJF* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_INGNBAIHPAI_OFFSET))(this, a1, a2);
		}

		::System::Void NBIGOPOLHKL(::EHLMPJIELJF* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_NBIGOPOLHKL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKFJIGKNJBP(::EHLMPJIELJF* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_CKFJIGKNJBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KGPGNGOAFFN(::EHLMPJIELJF* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_KGPGNGOAFFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MDPJDAKMMJD(::EHLMPJIELJF* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_MDPJDAKMMJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KLFFFMFIBHK(::System::String* a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::System::Int16 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::NavMap::IMapDataSource*, ::System::Int16, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEODCMINJF_KLFFFMFIBHK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CNPBGPMKLLN(::EHLMPJIELJF* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + PLEODCMINJF_CNPBGPMKLLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IMNMGBAICAG(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + PLEODCMINJF_IMNMGBAICAG_OFFSET))(this, a1);
		}

		::System::Void OAMGAGFDKKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_OAMGAGFDKKO_OFFSET))(this);
		}

		::System::Void LLLNAKJKOKK(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + PLEODCMINJF_LLLNAKJKOKK_OFFSET))(this, a1, a2);
		}

		::System::Void EMAJLBABELI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_EMAJLBABELI_OFFSET))(this);
		}

		::System::Void EMAJLBABELI_1(::EHLMPJIELJF* a1, ::KLNKLOMDIIC a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + PLEODCMINJF_EMAJLBABELI_1_OFFSET))(this, a1, a2);
		}

		::System::Void COIAOIAONEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_COIAOIAONEA_OFFSET))(this);
		}

		::System::Void CNNHIKIOBEL(::EHLMPJIELJF* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_CNNHIKIOBEL_OFFSET))(this, a1, a2);
		}

		::System::Void FJNIGEEONCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_FJNIGEEONCA_OFFSET))(this);
		}

		::System::Void JJPBHHBHGDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_JJPBHHBHGDK_OFFSET))(this);
		}

		::System::Void OPFFNAOEIEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_OPFFNAOEIEK_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavNodeInfo CMMGOHDLNEG(::FHNIMGBMPLN* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::GameCore::LevelNavNodeInfo(*)(::PVOID, ::FHNIMGBMPLN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLEODCMINJF_CMMGOHDLNEG_OFFSET))(this, a1, a2);
		}

		::System::Boolean DHILPGIIFNJ(::RPG::GameCore::LevelNavNodeInfo a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInfo, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLEODCMINJF_DHILPGIIFNJ_OFFSET))(this, a1, a2);
		}

		::System::Void HBFPNDJFOAK(::FHNIMGBMPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + PLEODCMINJF_HBFPNDJFOAK_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAnchorInfo* LKPPHJMNHBI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelAnchorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_LKPPHJMNHBI_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelPropInfo* LILGNDPJEOF(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelPropInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_LILGNDPJEOF_OFFSET))(this, a1);
		}

		::JHGAJMAOPJE* CAIOHGLJFKL(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a1, ::System::UInt32 a2)
		{
			return ((::JHGAJMAOPJE*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_CAIOHGLJFKL_OFFSET))(this, a1, a2);
		}

		::System::String* FBNGAHBHAGG(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEODCMINJF_FBNGAHBHAGG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeConditionInfos* PMBFAOEECEM(::RPG::GameCore::FiveDimCustomLoadConfig* a1, ::RPG::GameCore::LittleGameEntityVarConfig* a2)
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + PLEODCMINJF_PMBFAOEECEM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LevelNavNodeConditionInfos* FIFLAHGCPJP(::RPG::GameCore::FiveDimPortalConfig* a1, ::RPG::GameCore::LittleGameEntityVarConfig* a2)
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + PLEODCMINJF_FIFLAHGCPJP_OFFSET))(this, a1, a2);
		}

		::System::Void JCNCALOIAJH(::EHLMPJIELJF* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>*))((::PBYTE)hIl2Cpp + PLEODCMINJF_JCNCALOIAJH_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* OBFHHMANOEH(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF_OBFHHMANOEH_OFFSET))(this, a1);
		}

		::System::Void HKPHCBDEJFB(::JHGAJMAOPJE* a1, ::EHLMPJIELJF* a2, ::RPG::GameCore::FiveDimPortalTarget* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::JHGAJMAOPJE*, ::EHLMPJIELJF*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*))((::PBYTE)hIl2Cpp + PLEODCMINJF_HKPHCBDEJFB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::LittleGameLevelVarBinding* LAGAFLIFFMN(::System::String* a1)
		{
			return ((::RPG::GameCore::LittleGameLevelVarBinding*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEODCMINJF_LAGAFLIFFMN_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameNavConnectInfo* CMCOKJICIJK(::EHLMPJIELJF* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a4)
		{
			return ((::RPG::GameCore::LittleGameNavConnectInfo*(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*))((::PBYTE)hIl2Cpp + PLEODCMINJF_CMCOKJICIJK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::LevelEntityRef* DIIBHNFCKCK(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEODCMINJF_DIIBHNFCKCK_OFFSET))(this, a1);
		}

		::RPG::GameCore::LGameEntityRef* BNLJMCKFGEB(::System::String* a1)
		{
			return ((::RPG::GameCore::LGameEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLEODCMINJF_BNLJMCKFGEB_OFFSET))(this, a1);
		}

		::System::Boolean JGFHICLCIDO(::EHLMPJIELJF* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLMPJIELJF*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEODCMINJF_JGFHICLCIDO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::JPCLJKFJALE* MEJGEEHPEEO(::EHLMPJIELJF* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>* a4)
		{
			return ((::JPCLJKFJALE*(*)(::PVOID, ::EHLMPJIELJF*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JHGAJMAOPJE*>*))((::PBYTE)hIl2Cpp + PLEODCMINJF_MEJGEEHPEEO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single JNNDFMELADJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_JNNDFMELADJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EHLMPJIELJF*>* get_SurfaceList()
		{
			return ((::System::Collections::Generic::List_1<::EHLMPJIELJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_GET_SURFACELIST_OFFSET))(this);
		}

		::System::UInt32 NKDEABEBOBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_NKDEABEBOBL_OFFSET))(this);
		}

		::HKENHAIMOCH* get_SubNavGraphInfo()
		{
			return ((::HKENHAIMOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_GET_SUBNAVGRAPHINFO_OFFSET))(this);
		}

		::System::Void set_SubNavGraphInfo(::HKENHAIMOCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKENHAIMOCH*))((::PBYTE)hIl2Cpp + PLEODCMINJF_SET_SUBNAVGRAPHINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_RequireSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_GET_REQUIRESUBMISSIONIDS_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimLevelSettings* KHLLFBIPNMP()
		{
			return ((::RPG::GameCore::FiveDimLevelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_KHLLFBIPNMP_OFFSET))(this);
		}

		::RPG::GameCore::LevelLittleGameInfo* CDAGBCKEMIF()
		{
			return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF_CDAGBCKEMIF_OFFSET))(this);
		}

	};
