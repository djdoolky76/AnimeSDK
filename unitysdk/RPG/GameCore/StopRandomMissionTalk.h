#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopRandomMissionTalk; }

#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25BE0)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB25BF0)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopRandomMissionTalk_TypeDefinitionIndex = 20847;

	class StopRandomMissionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
