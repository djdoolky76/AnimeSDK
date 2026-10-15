#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicEnterNextRoom; }

#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6920)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A6930)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A6860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicEnterNextRoom_TypeDefinitionIndex = 22124;

	class RogueMagicEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
