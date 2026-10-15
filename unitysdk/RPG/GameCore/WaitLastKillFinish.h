#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitLastKillFinish; }

#define RPG_GAMECORE_WAITLASTKILLFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D2B0)
#define RPG_GAMECORE_WAITLASTKILLFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6D2C0)
#define RPG_GAMECORE_WAITLASTKILLFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6D1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLastKillFinish_TypeDefinitionIndex = 23414;

	class WaitLastKillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* LevelResultEndFinishEventStr; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLastKillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLastKillFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
