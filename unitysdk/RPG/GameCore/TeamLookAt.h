#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceDirectionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamLookAt; }

#define RPG_GAMECORE_TEAMLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7B440)
#define RPG_GAMECORE_TEAMLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7B450)
#define RPG_GAMECORE_TEAMLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7B410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLookAt_TypeDefinitionIndex = 22452;

	class TeamLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::RPG::GameCore::FaceDirectionType TargetType; // 0x1C
		::System::Single AngleOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
