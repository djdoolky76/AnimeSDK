#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMFJEMFMLGC_PGAFKENCKDK.h"
#include "unitysdk/RPG/Client/EnviroCharaType.h"
#include "unitysdk/UnityEngine/Rendering/CRPActor.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CharacterLineLightGroup_BCMLJEIDFBN;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T> class RefList_1; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define BMFJEMFMLGC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x23950)
#define BMFJEMFMLGC_ANNGAOHCBOH_OFFSET UNITYSDK_OFFSET(0x23940)
#define BMFJEMFMLGC_BJOGKOADFAH_OFFSET UNITYSDK_OFFSET(0x23A30)
#define BMFJEMFMLGC_BKFLFHJIDJA_OFFSET UNITYSDK_OFFSET(0x23980)
#define BMFJEMFMLGC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDAC5D0)
#define BMFJEMFMLGC_CTOR_OFFSET UNITYSDK_OFFSET(0x23930)
#define BMFJEMFMLGC_DEDACEGBJCC_OFFSET UNITYSDK_OFFSET(0x23A20)
#define BMFJEMFMLGC_DHALAAKDNFE_OFFSET UNITYSDK_OFFSET(0x239A0)
#define BMFJEMFMLGC_EMPKEMEIEBH_OFFSET UNITYSDK_OFFSET(0xBDAB7C0)
#define BMFJEMFMLGC_ENFJIMCHJEI_OFFSET UNITYSDK_OFFSET(0x23A40)
#define BMFJEMFMLGC_IDNONFECACM_OFFSET UNITYSDK_OFFSET(0xBDA5B00)
#define BMFJEMFMLGC_IJDFPJDILIK_OFFSET UNITYSDK_OFFSET(0xBDA5E70)
#define BMFJEMFMLGC_JPJGGLANECK_OFFSET UNITYSDK_OFFSET(0x23960)
#define BMFJEMFMLGC_KEPJPKDAMIO_OFFSET UNITYSDK_OFFSET(0x23970)
#define BMFJEMFMLGC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x23A50)
#define BMFJEMFMLGC_MBKHFGLMCGL_OFFSET UNITYSDK_OFFSET(0xBDABCB0)
#define BMFJEMFMLGC_MHJKKDGPLKO_OFFSET UNITYSDK_OFFSET(0xBDABA50)
#define BMFJEMFMLGC_MIAMFBIMGFM_OFFSET UNITYSDK_OFFSET(0x23990)
#define BMFJEMFMLGC_NLNICABEBEN_OFFSET UNITYSDK_OFFSET(0xBDABB40)
#define BMFJEMFMLGC_OHMFNNPNBLO_OFFSET UNITYSDK_OFFSET(0xBDA5500)
#define BMFJEMFMLGC_OICNIIBMFLK_OFFSET UNITYSDK_OFFSET(0x23920)
#define BMFJEMFMLGC_PHGEFJNIEKF_OFFSET UNITYSDK_OFFSET(0xBDA4EF0)
#define BMFJEMFMLGC_PKKJCDNFFFL_OFFSET UNITYSDK_OFFSET(0xBDA4C30)
#define BMFJEMFMLGC_POIAHGMKPKH_OFFSET UNITYSDK_OFFSET(0xBDA58F0)

	struct alignas(8) BMFJEMFMLGC
	{
		::UnityEngine::GameObject* ALCEFFGNIEL; // 0x10
		::RPG::Client::EnviroCharaType GMPGDEINODK; // 0x18
		::System::Int32 NNAALCLKBCJ; // 0x1C
		::UnityEngine::Vector3 LAADLNFMBCP; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* LLJFFDNFBEN; // 0x30
		::System::Boolean BNIILEPNIOP; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* NCOMOFEPEOF; // 0x40
		::UnityEngine::Light* CBHFCLPDACC; // 0x48
		::UnityEngine::Transform* GMHNBLOBOGP; // 0x50
		::BMFJEMFMLGC_PGAFKENCKDK BEDFKMKNBFG; // 0x58
		::BMFJEMFMLGC_PGAFKENCKDK MMGMKEHDMPM; // 0x78
		::System::Single CCAOGMEFNLB; // 0x98
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x9C
		::UnityEngine::Rendering::CRPActor KPKKDGFCEPH; // 0xA8
		::RPG::CustomRP::CapsuleOcclusion* JIKEEKLAPCM; // 0xC8
		::UnityEngine::Light* HGOBNLNHFAB; // 0xD0
		::UnityEngine::Bounds DGPCMGOJMOP; // 0xD8
		::UnityEngine::Renderer* OHJAILOGCFK; // 0xF0
		::UnityEngine::Renderer* DHDJOJNFLHF; // 0xF8
		::System::Single BPAIDCADMDO; // 0x100
		::System::Boolean FJMFKJEIOIO; // 0x104
		::System::Boolean BDMLDLPDIIA; // 0x105
		::System::Byte _padding2[0x2];
		::BMFJEMFMLGC_PGAFKENCKDK GCNCCBEKFOF; // 0x108
		::BMFJEMFMLGC_PGAFKENCKDK MBLBLDKIIAM; // 0x128
		::System::Int32 KJMDKNBAGNK; // 0x148
		::System::Byte _padding3[0x4];
		::RPG::CustomRP::CustomAdditionalLightData* FLFJAKOEHHJ; // 0x150
		::CharacterLineLightGroup_BCMLJEIDFBN* PJGDMKFIMHM; // 0x158
		::System::Boolean ABHFNIJELNF; // 0x160
		::System::Byte _padding4[0x7];
		::Il2CppArray<::UnityEngine::Plane>* IDMFOAFHLEC; // 0x168
		static ::UnityEngine::Camera** StaticGet_GOFNJPLABPI()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("", "BMFJEMFMLGC")->GetStaticField(0x6FBE0);
		}

		static ::RPG::Client::EnvironmentSystem** StaticGet_LKDKHHMECAG()
		{
			return (::RPG::Client::EnvironmentSystem**)UnitySDK::FromName("", "BMFJEMFMLGC")->GetStaticField(0x6FBE8);
		}

		static ::RPG::Client::RefList_1<::BMFJEMFMLGC>** StaticGet_KEBMBFCNBHN()
		{
			return (::RPG::Client::RefList_1<::BMFJEMFMLGC>**)UnitySDK::FromName("", "BMFJEMFMLGC")->GetStaticField(0x6FBF0);
		}

		static ::System::Single* StaticGet_KOMEOMHBCEC()
		{
			return (::System::Single*)UnitySDK::FromName("", "BMFJEMFMLGC")->GetStaticField(0x15B00);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFJEMFMLGC_CCTOR_OFFSET))();
		}

		static ::System::Void PKKJCDNFFFL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFJEMFMLGC_PKKJCDNFFFL_OFFSET))();
		}

		static ::System::Void PHGEFJNIEKF(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_PHGEFJNIEKF_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 OHMFNNPNBLO(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_OHMFNNPNBLO_OFFSET))(a1);
		}

		static ::System::Void POIAHGMKPKH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_POIAHGMKPKH_OFFSET))(a1);
		}

		static ::System::Void IDNONFECACM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_IDNONFECACM_OFFSET))(a1);
		}

		static ::System::Void IJDFPJDILIK(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_IJDFPJDILIK_OFFSET))(a1, a2);
		}

		static ::System::Void EMPKEMEIEBH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFJEMFMLGC_EMPKEMEIEBH_OFFSET))();
		}

		static ::System::Void MHJKKDGPLKO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFJEMFMLGC_MHJKKDGPLKO_OFFSET))();
		}

		static ::System::Boolean NLNICABEBEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_NLNICABEBEN_OFFSET))(a1);
		}

		static ::RPG::Client::EnviroCharaType MBKHFGLMCGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::EnviroCharaType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_MBKHFGLMCGL_OFFSET))(a1);
		}

		::System::Void OICNIIBMFLK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_OICNIIBMFLK_OFFSET))(this, a1);
		}

		::System::Void ANNGAOHCBOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_ANNGAOHCBOH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void JPJGGLANECK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_JPJGGLANECK_OFFSET))(this, a1);
		}

		::System::Void KEPJPKDAMIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_KEPJPKDAMIO_OFFSET))(this);
		}

		::System::Void BKFLFHJIDJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_BKFLFHJIDJA_OFFSET))(this, a1);
		}

		::System::Void MIAMFBIMGFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_MIAMFBIMGFM_OFFSET))(this, a1);
		}

		::System::Void DHALAAKDNFE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_DHALAAKDNFE_OFFSET))(this, a1);
		}

		::System::Void DEDACEGBJCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_DEDACEGBJCC_OFFSET))(this);
		}

		::System::Void BJOGKOADFAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_BJOGKOADFAH_OFFSET))(this, a1);
		}

		::System::Void ENFJIMCHJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_ENFJIMCHJEI_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJEMFMLGC_LJBCDJNNBJH_OFFSET))(this);
		}

	};
