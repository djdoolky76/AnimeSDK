#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A7720)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A7AC0)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A7A60)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A7760)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A76C0)

namespace RPG::GameCore
{
	class ByCompareDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DynamicValue; // 0x38
		::RPG::GameCore::CompareType CompareType; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
