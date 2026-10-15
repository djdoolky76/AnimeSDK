#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncMonsterLightByCameraDir; }

#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB50740)
#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB50750)
#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB50700)

namespace RPG::GameCore
{
	class SyncMonsterLightByCameraDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSync; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncMonsterLightByCameraDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncMonsterLightByCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncMonsterLightByCameraDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncMonsterLightByCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
