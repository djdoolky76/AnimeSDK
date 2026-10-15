#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvIsometricZoomListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2620)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A2630)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A25F0)

namespace RPG::GameCore
{
	class AdvIsometricZoomListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomIn; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomOut; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
