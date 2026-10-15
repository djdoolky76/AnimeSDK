#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGGGGGJFKMI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_GAMECORE_EVENTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE678120)
#define RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE677750)
#define RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET UNITYSDK_OFFSET(0xE677970)
#define RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xE678010)
#define RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xE677DB0)
#define RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xE6780A0)
#define RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xE677F50)

namespace RPG::GameCore
{
	class EventManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LGGGGGJFKMI, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _EntityEventHandleMap; // 0x10
		::System::Collections::Generic::Queue_1<::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _ExecuteListPool; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void FireEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET))(this, a1);
		}

		::System::Void RegisterEventListener(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnRegisterEventListener(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* GetExecuteList()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET))(this);
		}

		::System::Void ReleaseExecuteList(::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET))(this, a1);
		}

	};
}
