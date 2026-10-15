#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournEnterNextRoom; }

#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0B100)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA0B110)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA0B040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournEnterNextRoom_TypeDefinitionIndex = 22099;

	class RogueTournEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
