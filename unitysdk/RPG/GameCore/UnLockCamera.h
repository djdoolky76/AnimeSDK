#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnLockCamera; }

#define RPG_GAMECORE_UNLOCKCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC725A0)
#define RPG_GAMECORE_UNLOCKCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC725B0)
#define RPG_GAMECORE_UNLOCKCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC724E0)

namespace RPG::GameCore
{
	class UnLockCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
