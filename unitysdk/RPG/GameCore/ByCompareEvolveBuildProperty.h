#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareEvolveBuildProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47C730)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D47C9D0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D47C9A0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D47C740)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D47C700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildProperty_TypeDefinitionIndex = 22518;

	class ByCompareEvolveBuildProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
