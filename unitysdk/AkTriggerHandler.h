#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AkTriggerBase_Trigger;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKTRIGGERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F618660)
#define AKTRIGGERHANDLER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F619710)
#define AKTRIGGERHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F619680)
#define AKTRIGGERHANDLER_DODESTROY_OFFSET UNITYSDK_OFFSET(0x1F618E20)
#define AKTRIGGERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F618DD0)
#define AKTRIGGERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F6193C0)
#define AKTRIGGERHANDLER_REGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1F618860)
#define AKTRIGGERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1F618C70)
#define AKTRIGGERHANDLER_UNREGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1F619020)

	class AkTriggerHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean didDestroy; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* triggerList; // 0x20
		::System::Boolean useOtherObject; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_triggerTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)UnitySDK::FromName("", "AkTriggerHandler")->GetStaticField(0x11330);
		}

		// static const ::System::Object AWAKE_TRIGGER_ID; // 0x0
		// static const ::System::Object START_TRIGGER_ID; // 0x0
		// static const ::System::Object DESTROY_TRIGGER_ID; // 0x0
		// static const ::System::Object ON_ENABLE_TRIGGER_ID; // 0x0
		// static const ::System::Object MAX_NB_TRIGGERS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_DODESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void RegisterTriggers(::System::Collections::Generic::List_1<::System::Int32>* a1, ::AkTriggerBase_Trigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_Trigger*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_REGISTERTRIGGERS_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterTriggers(::System::Collections::Generic::List_1<::System::Int32>* a1, ::AkTriggerBase_Trigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_Trigger*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_UNREGISTERTRIGGERS_OFFSET))(this, a1, a2);
		}

	};
