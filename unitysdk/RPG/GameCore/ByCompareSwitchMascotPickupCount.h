#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSwitchMascotPickupCount; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED850)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6EDA50)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6EDA10)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6ED860)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6ED810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchMascotPickupCount_TypeDefinitionIndex = 22390;

	class ByCompareSwitchMascotPickupCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* CompareCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
