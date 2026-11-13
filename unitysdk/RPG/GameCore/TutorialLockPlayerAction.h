#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialLockPlayerAction; }

#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED2B0F0)
#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED2B100)
#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED2B0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialLockPlayerAction_TypeDefinitionIndex = 24740;

	class TutorialLockPlayerAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialLockPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialLockPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialLockPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialLockPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
