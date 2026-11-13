#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGroupProperty; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF3A00)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CDF3C90)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CDF3C50)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDF3A10)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF39C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupProperty_TypeDefinitionIndex = 21068;

	class ByCompareGroupProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Int16 CompareValue; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
