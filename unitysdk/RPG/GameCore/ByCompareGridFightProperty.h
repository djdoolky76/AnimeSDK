#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipMask.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGridFightProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B22F0)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B2600)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B25C0)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B2300)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B22B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGridFightProperty_TypeDefinitionIndex = 22528;

	class ByCompareGridFightProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::GridFightPropertyType PropertyType; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::RPG::GameCore::GridFightEquipMask EquipMask; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
