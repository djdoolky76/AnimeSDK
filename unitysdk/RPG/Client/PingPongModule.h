#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class NBAKGOPJELK;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }

#define RPG_CLIENT_PINGPONGMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDB26720)
#define RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET UNITYSDK_OFFSET(0xDB266C0)
#define RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET UNITYSDK_OFFSET(0xDB26660)
#define RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDB26530)
#define RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDB265C0)
#define RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDB26610)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_TypeDefinitionIndex = 66462;

	class PingPongModule : public ::RPG::Client::BaseModule
	{
	public:
		::NBAKGOPJELK* _GameInstance; // 0x10
		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* _AddPointUIInfo; // 0x18
		::RPG::Client::PingPongModule_PingPongUIInfo* _UIInfo; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET))(this);
		}

		::System::Void RegisterGameController(::NBAKGOPJELK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBAKGOPJELK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void UnregisterGameController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongUIInfo* GetPingPongUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* GetAddPointUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongAddPointUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET))(this);
		}

	};
}
