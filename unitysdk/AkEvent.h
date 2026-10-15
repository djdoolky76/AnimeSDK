#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkActionOnEventType.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/AkDragDropTriggerHandler.h"
class AkCallbackInfo;
class AkEventCallbackData;
class AkEventCallbackMsg;
namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKEVENT_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1F562300)
#define AKEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F544570)
#define AKEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1F562590)
#define AKEVENT_GET_M_CALLBACKDATA_OFFSET UNITYSDK_OFFSET(0x1F562730)
#define AKEVENT_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1F5625F0)
#define AKEVENT_GET_WWISETYPE_OFFSET UNITYSDK_OFFSET(0x1F5622B0)
#define AKEVENT_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1F543DB0)
#define AKEVENT_START_OFFSET UNITYSDK_OFFSET(0x1F543390)
#define AKEVENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x1F562520)
#define AKEVENT_STOP_OFFSET UNITYSDK_OFFSET(0x1F562470)

inline static constexpr unsigned int AkEvent_TypeDefinitionIndex = 44922;

	class AkEvent : public ::AkDragDropTriggerHandler
	{
	public:
		::AkActionOnEventType actionOnEventType; // 0x30
		::AkCurveInterpolation curveInterpolation; // 0x34
		::System::Boolean enableActionOnEvent; // 0x38
		::System::Byte _padding0[0x7];
		::AK::Wwise::Event* data; // 0x40
		::System::Boolean useCallbacks; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* Callbacks; // 0x50
		::System::UInt32 playingId; // 0x58
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* soundEmitterObject; // 0x60
		::System::Single transitionDuration; // 0x68
		::System::Byte _padding3[0x4];
		::AkEventCallbackMsg* EventCallbackMsg; // 0x70
		::System::Int32 eventIdInternal; // 0x78
		::System::Byte _padding4[0x4];
		::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x80
		::AkEventCallbackData* m_callbackDataInternal; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_CTOR_OFFSET))(this);
		}

		::AK::Wwise::BaseType* get_WwiseType()
		{
			return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_WWISETYPE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_START_OFFSET))(this);
		}

		::System::Void Callback(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HandleEvent(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKEVENT_HANDLEEVENT_OFFSET))(this, a1);
		}

		::System::Void Stop(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENT_STOP_OFFSET))(this, a1);
		}

		::System::Void Stop_1(::System::Int32 a1, ::AkCurveInterpolation a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AKEVENT_STOP_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_eventID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_EVENTID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_valueGuid()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_VALUEGUID_OFFSET))(this);
		}

		::AkEventCallbackData* get_m_callbackData()
		{
			return ((::AkEventCallbackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_M_CALLBACKDATA_OFFSET))(this);
		}

	};
