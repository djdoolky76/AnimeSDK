#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvIsometricSetZoomState; }

#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A24A0)
#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A24B0)
#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A2470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricSetZoomState_TypeDefinitionIndex = 22213;

	class AdvIsometricSetZoomState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ZoomFollow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricSetZoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricSetZoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricSetZoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricSetZoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
