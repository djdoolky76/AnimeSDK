#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Playables { class INotificationReceiver; }

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA09F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET UNITYSDK_OFFSET(0x9350B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0x1EDA0370)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x934C00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x934B50)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x904ED0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA05F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x934D30)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0860)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x934F60)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0770)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x934E70)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1EDA0290)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISNULL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0510)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISNULL_OFFSET UNITYSDK_OFFSET(0x934C70)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0580)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x934CD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EDA0300)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0970)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x935030)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA0670)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x934D90)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA07F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x934EE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA06F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x934E00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA08E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x934FC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDA0A00)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutputHandle_TypeDefinitionIndex = 6318;

	struct alignas(4) PlayableOutputHandle
	{
		static ::UnityEngine::Playables::PlayableOutputHandle* StaticGet_m_Null()
		{
			return (::UnityEngine::Playables::PlayableOutputHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayableOutputHandle_TypeDefinitionIndex)->GetStaticField(0x24E0);
		}
		::System::IntPtr m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Playables::PlayableOutputHandle get_Null()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET))();
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		::System::Boolean Equals(::System::Object* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET))(this, p);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::Playables::PlayableOutputHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_1_OFFSET))(this, other);
		}
		*/

		/*
		static ::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET))(lhs, rhs);
		}
		*/

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Type* GetPlayableOutputType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET))(this);
		}

		::System::Void SetReferenceObject(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET))(this, target);
		}

		::System::Void SetUserData(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET))(this, target);
		}

		/*
		::UnityEngine::Playables::PlayableHandle GetSourcePlayable()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle target, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET))(this, target, port);
		}
		*/

		::System::Int32 GetSourceOutputPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET))(this);
		}

		::System::Void SetWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET))(this, weight);
		}

		/*
		::System::Void PushNotification(::UnityEngine::Playables::PlayableHandle origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET))(this, origin, notification, context);
		}
		*/

		::System::Void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* receiver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::INotificationReceiver*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET))(this, receiver);
		}

		/*
		static ::System::Boolean IsNull_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISNULL_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Type* GetPlayableOutputType_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
		{
			return ((::System::Type*(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Void SetReferenceObject_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET))(_unity_self, target);
		}
		*/

		/*
		static ::System::Void SetUserData_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET))(_unity_self, target);
		}
		*/

		/*
		static ::System::Void GetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Playables::PlayableHandle& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void SetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Playables::PlayableHandle& target, ::System::Int32 port)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET))(_unity_self, target, port);
		}
		*/

		/*
		static ::System::Int32 GetSourceOutputPort_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Void SetWeight_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET))(_unity_self, weight);
		}
		*/

		/*
		static ::System::Void PushNotification_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Playables::PlayableHandle& origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::PlayableHandle&, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET))(_unity_self, origin, notification, context);
		}
		*/

		/*
		static ::System::Void AddNotificationReceiver_Injected(::UnityEngine::Playables::PlayableOutputHandle& _unity_self, ::UnityEngine::Playables::INotificationReceiver* receiver)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Playables::INotificationReceiver*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET))(_unity_self, receiver);
		}
		*/
	};
}
