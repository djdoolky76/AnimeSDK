#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicEnterNextRoom; }

#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x20774490)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207744A0)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207743D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicEnterNextRoom_TypeDefinitionIndex = 22529;

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
