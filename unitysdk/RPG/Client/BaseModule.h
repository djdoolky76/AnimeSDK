#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class NotifyHandler; }
namespace System { class String; }

#define RPG_CLIENT_BASEMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFFCCE0)
#define RPG_CLIENT_BASEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEFEB0)
#define RPG_CLIENT_BASEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFED430)
#define RPG_CLIENT_BASEMODULE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFFC7C0)
#define RPG_CLIENT_BASEMODULE_GET__NET_OFFSET UNITYSDK_OFFSET(0x1AFFCC50)
#define RPG_CLIENT_BASEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AFFC9B0)
#define RPG_CLIENT_BASEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1AFFCB10)
#define RPG_CLIENT_BASEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1AFFCAD0)
#define RPG_CLIENT_BASEMODULE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1AFFCB50)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AFFCBD0)
#define RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1AFFC950)
#define RPG_CLIENT_BASEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AFFCC10)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseModule_TypeDefinitionIndex = 64310;

	class BaseModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "BaseModule")->GetStaticField(0x613E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_GET_NAME_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void RemoveListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_REMOVELISTENER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* get__Net()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMODULE_GET__NET_OFFSET))(this);
		}

	};
}
