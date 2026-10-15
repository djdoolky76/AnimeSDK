#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceRefreshCamera; }

#define RPG_GAMECORE_FORCEREFRESHCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9B20)
#define RPG_GAMECORE_FORCEREFRESHCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E9B30)
#define RPG_GAMECORE_FORCEREFRESHCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E9A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceRefreshCamera_TypeDefinitionIndex = 20823;

	class ForceRefreshCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceRefreshCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceRefreshCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceRefreshCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceRefreshCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
