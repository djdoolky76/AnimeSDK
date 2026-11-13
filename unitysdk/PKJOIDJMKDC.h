#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define PKJOIDJMKDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x147C7DB0)
#define PKJOIDJMKDC_CTOR_OFFSET UNITYSDK_OFFSET(0x147C81A0)
#define PKJOIDJMKDC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x147C7EE0)
#define PKJOIDJMKDC_GJNMIAOLOMO_OFFSET UNITYSDK_OFFSET(0x147C7E80)
#define PKJOIDJMKDC_HELIEDLACFC_OFFSET UNITYSDK_OFFSET(0x147C8140)
#define PKJOIDJMKDC_LJFDKLFDNPK_OFFSET UNITYSDK_OFFSET(0x147C7E20)

inline static constexpr unsigned int PKJOIDJMKDC_TypeDefinitionIndex = 56923;

	class PKJOIDJMKDC : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* ONMEAPKALEO; // 0x10
		::RPG::GameCore::FixPoint EIMIIHEDKFM; // 0x18
		::RPG::GameCore::FixPoint PPBNKKKIIIN; // 0x20
		::System::Boolean MFIBFJPLCOG; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint DDAGDNNDCDI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_CLEAR_OFFSET))(this);
		}

		::System::Void LJFDKLFDNPK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_LJFDKLFDNPK_OFFSET))(this, a1);
		}

		::System::Void GJNMIAOLOMO(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_GJNMIAOLOMO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FENOMPCEFII()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_FENOMPCEFII_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint HELIEDLACFC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOIDJMKDC_HELIEDLACFC_OFFSET))(this);
		}

	};
