#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OnControlEraFlipperLightDeviceListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E05C0)
#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E05D0)
#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E0580)

namespace RPG::GameCore
{
	class OnControlEraFlipperLightDeviceListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfGroupEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOtherGroupEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x28
		::System::Boolean ListenCallbackLoop; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
