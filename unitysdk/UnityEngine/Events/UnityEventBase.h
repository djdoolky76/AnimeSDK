#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Events/PersistentListenerMode.h"

namespace B2F70F41B9C3250D { class A57EE0C5B275A465; }
namespace B2F70F41B9C3250D { class B063E2D7E3479104; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class PersistentCall; }
namespace UnityEngine::Events { class PersistentCallGroup; }

#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET UNITYSDK_OFFSET(0x41425A0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET UNITYSDK_OFFSET(0x41425C0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET UNITYSDK_OFFSET(0x41425F0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x4142890)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET UNITYSDK_OFFSET(0x4142CB0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0x4142ED0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x4142F20)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x4142F60)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x4142F80)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4142FA0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x41425C0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x41425C0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x4143030)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventBase_TypeDefinitionIndex = 17129;

	class UnityEventBase : public ::System::Object
	{
	public:
		::B2F70F41B9C3250D::B063E2D7E3479104* m_Calls; // 0x10
		::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls; // 0x18
		::System::Boolean m_CallsDirty; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Type* A45745FB9DD90642, ::System::String* A14FC335961F8722, ::Il2CppArray<::System::Type*>* B5AECCBBDC5C8D17)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET))(A45745FB9DD90642, A14FC335961F8722, B5AECCBBDC5C8D17);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void AddCall(::B2F70F41B9C3250D::A57EE0C5B275A465* BB7BEB2027376C69)
		{
			return ((::System::Void(*)(::PVOID, ::B2F70F41B9C3250D::A57EE0C5B275A465*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET))(this, BB7BEB2027376C69);
		}

		::System::Collections::Generic::List_1<::B2F70F41B9C3250D::A57EE0C5B275A465*>* PrepareInvoke()
		{
			return ((::System::Collections::Generic::List_1<::B2F70F41B9C3250D::A57EE0C5B275A465*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET))(this);
		}

		::System::Void RemoveListener(::System::Object* A25DF1080F210FB4, ::System::Reflection::MethodInfo* EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET))(this, A25DF1080F210FB4, EA8FABEC6D125B33);
		}

		::System::Reflection::MethodInfo* FindMethod(::System::String* F79B4D487F303AB2, ::System::Type* E757B7A1EDC3A191, ::UnityEngine::Events::PersistentListenerMode A84D57260767D5BD, ::System::Type* A2F99B129B594222)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::UnityEngine::Events::PersistentListenerMode, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET))(this, F79B4D487F303AB2, E757B7A1EDC3A191, A84D57260767D5BD, A2F99B129B594222);
		}

		::System::Void DirtyPersistentCalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET))(this);
		}

		::System::Void RebuildPersistentCallsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindMethod_1(::UnityEngine::Events::PersistentCall* BB7BEB2027376C69)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::UnityEngine::Events::PersistentCall*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_1_OFFSET))(this, BB7BEB2027376C69);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
