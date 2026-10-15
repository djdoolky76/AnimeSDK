#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KLEFGGIHGMI;
class NEOCEOCDEAF;
class PFJNGFLBJFO;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class String; }
namespace UnityEngine { class Light; }

#define BNIEAMHOKJE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBDD7330)
#define BNIEAMHOKJE_ADDPHKJOOMD_OFFSET UNITYSDK_OFFSET(0xBDD68C0)
#define BNIEAMHOKJE_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xBDD73C0)
#define BNIEAMHOKJE_BIBPADDAOPP_OFFSET UNITYSDK_OFFSET(0xBDD6B60)
#define BNIEAMHOKJE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD76A0)
#define BNIEAMHOKJE_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0xBDD7490)
#define BNIEAMHOKJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD7690)
#define BNIEAMHOKJE_DJJKFEMOBFM_OFFSET UNITYSDK_OFFSET(0xBDD6920)
#define BNIEAMHOKJE_FCCGDJLPHBN_OFFSET UNITYSDK_OFFSET(0xBDD6980)
#define BNIEAMHOKJE_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0xBDD7380)
#define BNIEAMHOKJE_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0xBDD75D0)
#define BNIEAMHOKJE_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0xBDD69D0)
#define BNIEAMHOKJE_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xBDD72F0)
#define BNIEAMHOKJE_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0xBDD7550)
#define BNIEAMHOKJE_KLIDCDLOBEH_OFFSET UNITYSDK_OFFSET(0xBDD6D80)
#define BNIEAMHOKJE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDD72A0)
#define BNIEAMHOKJE_MFJHFCKDKBO_1_OFFSET UNITYSDK_OFFSET(0xBDD6C00)
#define BNIEAMHOKJE_MFJHFCKDKBO_OFFSET UNITYSDK_OFFSET(0xBDD69E0)
#define BNIEAMHOKJE_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0xBDD7590)
#define BNIEAMHOKJE_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0xBDD74F0)
#define BNIEAMHOKJE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBDD7440)
#define BNIEAMHOKJE_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0xBDD7400)
#define BNIEAMHOKJE_PLGMDMJENBH_OFFSET UNITYSDK_OFFSET(0xBDD7630)
#define BNIEAMHOKJE_PPOGJCDIGPC_OFFSET UNITYSDK_OFFSET(0xBDD6910)

inline static constexpr unsigned int BNIEAMHOKJE_TypeDefinitionIndex = 49569;

	class BNIEAMHOKJE : public ::System::Object
	{
	public:
		::System::String* DJNKMHHLKHM; // 0x10
		::System::String* DAHENCMPLOD; // 0x18
		::NEOCEOCDEAF* KJAHGCMAKNA; // 0x20
		::KLEFGGIHGMI* CPPILCGEAKC; // 0x28
		::System::String* DIEGNJFBPHN; // 0x30
		::System::String* FFHJENBPOAI; // 0x38
		::EnviromentSystem::BlockEnvDataStmState KOEKPKHCLCM; // 0x40
		::System::Int32 CGDPPGNJFGC; // 0x44
		::RPG::Client::OpenWorld::StreamingBlockType CFGEJHAOKED; // 0x48
		::System::Int32 IJNDNFMBNGC; // 0x4C
		::System::Single IAJFEFLCEDB; // 0x50
		::System::Single EJNNCAFADFL; // 0x54
		::System::Boolean FEEFLJBILJN; // 0x58
		::System::Boolean ELMDIMHMCKA; // 0x59
		::System::Boolean FIEJAHOMJHM; // 0x5A
		static ::System::Boolean* StaticGet_HOAEJJBJLLN()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNIEAMHOKJE")->GetStaticField(0x2C70);
		}

		static ::System::Boolean* StaticGet_LCDCHEKNEFK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNIEAMHOKJE")->GetStaticField(0x2C71);
		}

		static ::System::Boolean* StaticGet_NMNPEILBNHG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNIEAMHOKJE")->GetStaticField(0x2C72);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNIEAMHOKJE_CCTOR_OFFSET))();
		}

		::System::Void ADDPHKJOOMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_ADDPHKJOOMD_OFFSET))(this, a1);
		}

		::System::Boolean PPOGJCDIGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_PPOGJCDIGPC_OFFSET))(this);
		}

		static ::System::Void DJJKFEMOBFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_DJJKFEMOBFM_OFFSET))(a1);
		}

		::System::Void FCCGDJLPHBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_FCCGDJLPHBN_OFFSET))(this, a1);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_GHHOOCLEENA_OFFSET))(this);
		}

		::System::Void MFJHFCKDKBO(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_MFJHFCKDKBO_OFFSET))(this, a1);
		}

		static ::System::Void BIBPADDAOPP(::System::Boolean a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::StreamingLightEnum a3, ::System::Boolean a4, ::RPG::Client::OpenWorld::StreamingLightEnum a5)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingLightEnum, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_BIBPADDAOPP_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void MFJHFCKDKBO_1(::PFJNGFLBJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJNGFLBJFO*))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_MFJHFCKDKBO_1_OFFSET))(this, a1);
		}

		static ::System::String* KLIDCDLOBEH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_KLIDCDLOBEH_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_GCICAABIGKP_OFFSET))(this);
		}

		::System::Void BDEJBBALMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_BDEJBBALMHE_OFFSET))(this);
		}

		::System::Void PBJMDPEDKPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_PBJMDPEDKPI_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::UnityEngine::Light* CEHOBKMKHAN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_CEHOBKMKHAN_OFFSET))(this, a1);
		}

		::UnityEngine::Light* OJCHKAEEKDO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_OJCHKAEEKDO_OFFSET))(this, a1);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_KDCBKBJKGOP_OFFSET))(this);
		}

		::System::Void OIEFNJAFDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_OIEFNJAFDLK_OFFSET))(this);
		}

		::System::Void GDJEIGJGFHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_GDJEIGJGFHK_OFFSET))(this, a1);
		}

		::System::Void PLGMDMJENBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNIEAMHOKJE_PLGMDMJENBH_OFFSET))(this, a1);
		}

	};
