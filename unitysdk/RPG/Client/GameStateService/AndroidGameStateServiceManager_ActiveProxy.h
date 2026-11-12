#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameStateService/AndroidGameStateServiceManager_GameStateServiceSwitchType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3B720)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xDA39600)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_1_OFFSET UNITYSDK_OFFSET(0xDA3CBE0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_OFFSET UNITYSDK_OFFSET(0xDA3F990)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_SETSWITCHSTATUS_OFFSET UNITYSDK_OFFSET(0xDA3C860)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_ActiveProxy_TypeDefinitionIndex = 77955;

	class AndroidGameStateServiceManager_ActiveProxy : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* _switchList; // 0x10
		::System::Action* _whenActive; // 0x18
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_ISACTIVE_OFFSET))(this);
		}

		::System::Void SetSwitchStatus(::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_SETSWITCHSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void ReportActiveState(::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameStateService::AndroidGameStateServiceManager_GameStateServiceSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_OFFSET))(this, a1);
		}

		::System::Void ReportActiveState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_ACTIVEPROXY_REPORTACTIVESTATE_1_OFFSET))(this);
		}

	};
}
