#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareModifierCallBackDynamicValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BE730)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BEA00)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BE9D0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BE740)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BE700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCallBackDynamicValue_TypeDefinitionIndex = 23004;

	class ByCompareModifierCallBackDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ResultWhenNoValue; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
