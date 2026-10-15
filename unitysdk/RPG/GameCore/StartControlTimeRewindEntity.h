#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartControlTimeRewindEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C570)
#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1C580)
#define RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1C540)

namespace RPG::GameCore
{
	class StartControlTimeRewindEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Control; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartControlTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartControlTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartControlTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartControlTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCONTROLTIMEREWINDENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
