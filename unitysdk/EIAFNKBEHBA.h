#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierUIPosition.h"
#include "unitysdk/System/Object.h"
class EIAFNKBEHBA;
class EIAFNKBEHBA_EADMIIGLDHK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define EIAFNKBEHBA_AKPKOGDGKEN_OFFSET UNITYSDK_OFFSET(0x163BA310)
#define EIAFNKBEHBA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x163B9C30)
#define EIAFNKBEHBA_CBFBHLACLPC_OFFSET UNITYSDK_OFFSET(0x163B9E90)
#define EIAFNKBEHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x163B9CA0)
#define EIAFNKBEHBA_EECBOHAFLAP_OFFSET UNITYSDK_OFFSET(0x163BA420)
#define EIAFNKBEHBA_GJADDMAOFHC_OFFSET UNITYSDK_OFFSET(0x163BA060)
#define EIAFNKBEHBA_HAABKANKPKB_OFFSET UNITYSDK_OFFSET(0x163BA0B0)
#define EIAFNKBEHBA_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x163B9CB0)
#define EIAFNKBEHBA_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x163BA1A0)
#define EIAFNKBEHBA_LHGFDOFLLBM_OFFSET UNITYSDK_OFFSET(0x163B9FB0)
#define EIAFNKBEHBA_MBMFEMBBCJE_OFFSET UNITYSDK_OFFSET(0x163BA150)
#define EIAFNKBEHBA_NHOCLKNNDIJ_OFFSET UNITYSDK_OFFSET(0x163BA3B0)
#define EIAFNKBEHBA_OHHJCALLOEA_OFFSET UNITYSDK_OFFSET(0x163BA270)

inline static constexpr unsigned int EIAFNKBEHBA_TypeDefinitionIndex = 73425;

	class EIAFNKBEHBA : public ::System::Object
	{
	public:
		::EIAFNKBEHBA_EADMIIGLDHK* LBIGLGPJAJD; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* BODCMMACKEG; // 0x18
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

		::System::String* AKPKOGDGKEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_AKPKOGDGKEN_OFFSET))(this);
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
