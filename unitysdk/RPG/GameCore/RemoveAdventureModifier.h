#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveAdventureModifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D983A40)
#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D983A50)
#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D983A10)

namespace RPG::GameCore
{
	class RemoveAdventureModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
