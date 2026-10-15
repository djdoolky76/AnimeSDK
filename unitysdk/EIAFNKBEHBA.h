#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierUIPosition.h"
#include "unitysdk/System/Object.h"
class EIAFNKBEHBA;
class EIAFNKBEHBA_EADMIIGLDHK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define EIAFNKBEHBA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154AF140)
#define EIAFNKBEHBA_CBFBHLACLPC_OFFSET UNITYSDK_OFFSET(0x154AF3A0)
#define EIAFNKBEHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x154AF1B0)
#define EIAFNKBEHBA_EECBOHAFLAP_OFFSET UNITYSDK_OFFSET(0x154AF870)
#define EIAFNKBEHBA_GJADDMAOFHC_OFFSET UNITYSDK_OFFSET(0x154AF570)
#define EIAFNKBEHBA_HAABKANKPKB_OFFSET UNITYSDK_OFFSET(0x154AF5C0)
#define EIAFNKBEHBA_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x154AF1C0)
#define EIAFNKBEHBA_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x154AF6B0)
#define EIAFNKBEHBA_LHGFDOFLLBM_OFFSET UNITYSDK_OFFSET(0x154AF4C0)
#define EIAFNKBEHBA_MBMFEMBBCJE_OFFSET UNITYSDK_OFFSET(0x154AF660)
#define EIAFNKBEHBA_NHOCLKNNDIJ_OFFSET UNITYSDK_OFFSET(0x154AF7F0)
#define EIAFNKBEHBA_OHHJCALLOEA_OFFSET UNITYSDK_OFFSET(0x154AF750)

inline static constexpr unsigned int EIAFNKBEHBA_TypeDefinitionIndex = 71442;

	class EIAFNKBEHBA : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* BODCMMACKEG; // 0x10
		::EIAFNKBEHBA_EADMIIGLDHK* LBIGLGPJAJD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_CTOR_OFFSET))(this);
		}

		static ::EIAFNKBEHBA* BPLPBPMEODA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::EIAFNKBEHBA*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_BPLPBPMEODA_OFFSET))(a1);
		}

		::EIAFNKBEHBA_EADMIIGLDHK* HNPOGLCAHPK()
		{
			return ((::EIAFNKBEHBA_EADMIIGLDHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Boolean CBFBHLACLPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_CBFBHLACLPC_OFFSET))(this, a1);
		}

		::System::Boolean LHGFDOFLLBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_LHGFDOFLLBM_OFFSET))(this);
		}

		::System::Boolean GJADDMAOFHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_GJADDMAOFHC_OFFSET))(this);
		}

		::System::Boolean MBMFEMBBCJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_MBMFEMBBCJE_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_IAMCNOAAALI_OFFSET))(this);
		}

		::System::String* OHHJCALLOEA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_OHHJCALLOEA_OFFSET))(this);
		}

		::System::Int32 NHOCLKNNDIJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_NHOCLKNNDIJ_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* EECBOHAFLAP()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_EECBOHAFLAP_OFFSET))(this);
		}

		::RPG::GameCore::ModifierUIPosition HAABKANKPKB()
		{
			return ((::RPG::GameCore::ModifierUIPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_HAABKANKPKB_OFFSET))(this);
		}

	};
