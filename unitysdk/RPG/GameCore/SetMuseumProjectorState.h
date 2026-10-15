#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMuseumProjectorState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD1A0)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABD1B0)
#define RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABD160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMuseumProjectorState_TypeDefinitionIndex = 22197;

	class SetMuseumProjectorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ThemeNum; // 0x20
		::System::Single SwitchSpeed; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSEUMPROJECTORSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
