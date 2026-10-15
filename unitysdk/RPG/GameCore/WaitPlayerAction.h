#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialPlayerActionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D980)
#define RPG_GAMECORE_WAITPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9D990)
#define RPG_GAMECORE_WAITPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9D940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerAction_TypeDefinitionIndex = 24330;

	class WaitPlayerAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialPlayerActionType ActionType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::System::Single ProtectTime; // 0x28
		::System::Boolean ForceSetNavigation; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
