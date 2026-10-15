#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JBACCAGFHON;
class MIMCAGPCALM;
class NAJCEIHIIIP;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceSupportIndicatorMonoView; }
namespace UnityEngine { class Transform; }

#define NAJCEIHIIIP_BFKHBGNKOCD_OFFSET UNITYSDK_OFFSET(0xBA9F030)
#define NAJCEIHIIIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA9EAB0)
#define NAJCEIHIIIP_CLOGKFGJHHO_OFFSET UNITYSDK_OFFSET(0xBA9FB30)
#define NAJCEIHIIIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9EB40)
#define NAJCEIHIIIP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xBA9EB50)
#define NAJCEIHIIIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA9EEC0)
#define NAJCEIHIIIP_EDEGBMKLPDP_OFFSET UNITYSDK_OFFSET(0xBA9FBC0)
#define NAJCEIHIIIP_FLBKGIBACOC_OFFSET UNITYSDK_OFFSET(0xBA9F3E0)
#define NAJCEIHIIIP_GCKPLNKLKGM_OFFSET UNITYSDK_OFFSET(0xBA9F320)
#define NAJCEIHIIIP_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0xBA9ECE0)
#define NAJCEIHIIIP_JHIEBLMNBCA_OFFSET UNITYSDK_OFFSET(0xBA9FA10)
#define NAJCEIHIIIP_KKJFEMCCFHP_OFFSET UNITYSDK_OFFSET(0xBA9FE10)
#define NAJCEIHIIIP_MIFGAJHHKKP_OFFSET UNITYSDK_OFFSET(0xBA9F9A0)
#define NAJCEIHIIIP_NDLAPNBKJMF_OFFSET UNITYSDK_OFFSET(0xBA9EA50)
#define NAJCEIHIIIP_OMBFLGKDPDN_OFFSET UNITYSDK_OFFSET(0xBA9EFD0)
#define NAJCEIHIIIP_OMLKKAIIDGF_OFFSET UNITYSDK_OFFSET(0xBA9FCE0)
#define NAJCEIHIIIP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA9F370)

	class NAJCEIHIIIP : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* PKLKICDBPGE; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* JFNFGOOLJIB; // 0x20
		::UnityEngine::Transform* ICNPLPKEMGH; // 0x28
		::System::Single EAKCFBOHADC; // 0x30
		::System::Single PGAAMPLHHBK; // 0x34
		::System::Single BBNACKEDMCK; // 0x38
		::System::Boolean KOFOPBKCHDP; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single PHCDAPJOFGE; // 0x40
		// static const ::System::Object CPNOGDFKCLM; // 0x0
		// static const ::System::Object IHDNABNIJKC; // 0x0
		// static const ::System::Object EPBPEEHCPHB; // 0x0
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_CTOR_OFFSET))(this, a1);
		}

		::MIMCAGPCALM* NDLAPNBKJMF()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_NDLAPNBKJMF_OFFSET))(this);
		}

		static ::NAJCEIHIIIP* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::NAJCEIHIIIP*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_DISPOSE_OFFSET))(this);
		}

		::System::Void OMBFLGKDPDN(::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView*))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_OMBFLGKDPDN_OFFSET))(this, a1);
		}

		::System::Void GCKPLNKLKGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_GCKPLNKLKGM_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void MIFGAJHHKKP(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_MIFGAJHHKKP_OFFSET))(this, a1);
		}

		::System::Void BFKHBGNKOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_BFKHBGNKOCD_OFFSET))(this);
		}

		::System::Void FLBKGIBACOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_FLBKGIBACOC_OFFSET))(this);
		}

		::UnityEngine::Vector2 JHIEBLMNBCA(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_JHIEBLMNBCA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 EDEGBMKLPDP(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_EDEGBMKLPDP_OFFSET))(this, a1, a2);
		}

		::System::Boolean CLOGKFGJHHO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_CLOGKFGJHHO_OFFSET))(this, a1, a2);
		}

		::System::Void KKJFEMCCFHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_KKJFEMCCFHP_OFFSET))(this);
		}

		::System::Void OMLKKAIIDGF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAJCEIHIIIP_OMLKKAIIDGF_OFFSET))(this, a1);
		}

	};
