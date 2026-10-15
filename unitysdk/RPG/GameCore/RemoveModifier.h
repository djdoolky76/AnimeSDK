#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RemoveModifier; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985F30)
#define RPG_GAMECORE_REMOVEMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985F40)
#define RPG_GAMECORE_REMOVEMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985F00)

namespace RPG::GameCore
{
	class RemoveModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ModifierName; // 0x20
		::System::Boolean OnlyRemoveCasterAdded; // 0x28
		::System::Boolean RemoveAllInstance; // 0x29
		::System::Boolean RemoveToBeAdded; // 0x2A
		::System::Boolean MuteVisualStateRecover; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
