#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define PKJOIDJMKDC_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2BC000)
#define PKJOIDJMKDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BC3F0)
#define PKJOIDJMKDC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0xC2BC130)
#define PKJOIDJMKDC_GJNMIAOLOMO_OFFSET UNITYSDK_OFFSET(0xC2BC0D0)
#define PKJOIDJMKDC_HELIEDLACFC_OFFSET UNITYSDK_OFFSET(0xC2BC390)
#define PKJOIDJMKDC_LJFDKLFDNPK_OFFSET UNITYSDK_OFFSET(0xC2BC070)

inline static constexpr unsigned int PKJOIDJMKDC_TypeDefinitionIndex = 55721;

	class PKJOIDJMKDC : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* ONMEAPKALEO; // 0x10
		::RPG::GameCore::FixPoint DDAGDNNDCDI; // 0x18
		::System::Boolean MFIBFJPLCOG; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint EIMIIHEDKFM; // 0x28
		::RPG::GameCore::FixPoint PPBNKKKIIIN; // 0x30
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
