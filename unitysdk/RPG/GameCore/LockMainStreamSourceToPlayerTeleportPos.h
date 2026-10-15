#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockMainStreamSourceToPlayerTeleportPos; }

#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C3770)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C3780)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C36B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockMainStreamSourceToPlayerTeleportPos_TypeDefinitionIndex = 20501;

	class LockMainStreamSourceToPlayerTeleportPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
