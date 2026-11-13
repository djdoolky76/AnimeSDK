#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournEnterNextRoom; }

#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF2B9E0)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF2B9F0)
#define RPG_GAMECORE_ROGUETOURNENTERNEXTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF2B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournEnterNextRoom_TypeDefinitionIndex = 22504;

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
