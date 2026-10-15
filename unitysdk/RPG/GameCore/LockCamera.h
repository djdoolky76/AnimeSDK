#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockCamera; }

#define RPG_GAMECORE_LOCKCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F0290)
#define RPG_GAMECORE_LOCKCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F02A0)
#define RPG_GAMECORE_LOCKCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F0250)

namespace RPG::GameCore
{
	class LockCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockAxisY; // 0x18
		::System::Boolean LockAxisX; // 0x19
		::System::Boolean LockZoom; // 0x1A
		::System::Boolean LockRecenterY; // 0x1B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
