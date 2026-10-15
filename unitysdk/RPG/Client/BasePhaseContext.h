#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
class KDLEIHJGDAP;
namespace RPG::Client { class GamePhaseManager; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEPHASECONTEXT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7F03E0)
#define RPG_CLIENT_BASEPHASECONTEXT_CLEARNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC7F06C0)
#define RPG_CLIENT_BASEPHASECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xC7EFF00)
#define RPG_CLIENT_BASEPHASECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7F0930)
#define RPG_CLIENT_BASEPHASECONTEXT_FOREACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7F0290)
#define RPG_CLIENT_BASEPHASECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xC7F00F0)
#define RPG_CLIENT_BASEPHASECONTEXT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC7F0D60)
#define RPG_CLIENT_BASEPHASECONTEXT_ONINIT_OFFSET UNITYSDK_OFFSET(0xC7F03A0)
#define RPG_CLIENT_BASEPHASECONTEXT_ONTICK_OFFSET UNITYSDK_OFFSET(0xC7F0D00)
#define RPG_CLIENT_BASEPHASECONTEXT_TICK_OFFSET UNITYSDK_OFFSET(0xC7F0B60)
#define RPG_CLIENT_BASEPHASECONTEXT__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC7F05C0)

namespace RPG::Client
{
	class BasePhaseContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KDLEIHJGDAP*>* components; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Tuple*>* packetHandlers; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Tuple*>* normalHandlers; // 0x20
		::RPG::Client::GamePhaseManager* Manager; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KDLEIHJGDAP*>* componentDict; // 0x30
		::System::Boolean isInit; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void init(::RPG::Client::GamePhaseManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_INIT_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONINIT_OFFSET))(this);
		}

		::System::Void ForeachComponent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_FOREACHCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void AddComponent(::KDLEIHJGDAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDLEIHJGDAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ADDCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_CLEARNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONTICK_OFFSET))(this, a1);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT_ONDISPOSE_OFFSET))(this);
		}

	};
}
