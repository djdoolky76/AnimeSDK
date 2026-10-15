#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ToggleUITop; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLEUITOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFA540)
#define RPG_GAMECORE_TOGGLEUITOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFA580)
#define RPG_GAMECORE_TOGGLEUITOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFA4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleUITop_TypeDefinitionIndex = 23153;

	class ToggleUITop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::System::String* TriggerName; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* UIImageNodes; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleUITop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleUITop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
