#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B2F70F41B9C3250D/B1C54B7B1BA748CD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Events/PersistentListenerMode.h"

namespace B2F70F41B9C3250D { class A57EE0C5B275A465; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class ArgumentCache; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET UNITYSDK_OFFSET(0x41514D0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET UNITYSDK_OFFSET(0x4151A70)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x3929710)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x27C87C0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGETASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x4151F30)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET UNITYSDK_OFFSET(0x4151DA0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x4151E80)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x4151E80)
#define UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x4151EB0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCall_TypeDefinitionIndex = 17307;

	class PersistentCall : public ::System::Object
	{
	public:
		::UnityEngine::Object* m_Target; // 0x10
		::System::String* m_TargetAssemblyTypeName; // 0x18
		::System::String* m_MethodName; // 0x20
		::UnityEngine::Events::PersistentListenerMode m_Mode; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Events::ArgumentCache* m_Arguments; // 0x30
		::B2F70F41B9C3250D::B1C54B7B1BA748CD m_CallState; // 0x38

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL__CTOR_OFFSET))(this);
		}

		static ::B2F70F41B9C3250D::A57EE0C5B275A465* GetObjectCall(::UnityEngine::Object* F249A74E7BFBE1A7, ::System::Reflection::MethodInfo* EA8FABEC6D125B33, ::UnityEngine::Events::ArgumentCache* AD6CC0F8A05090D3)
		{
			return ((::B2F70F41B9C3250D::A57EE0C5B275A465*(*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, ::UnityEngine::Events::ArgumentCache*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET))(F249A74E7BFBE1A7, EA8FABEC6D125B33, AD6CC0F8A05090D3);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::String* get_methodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::B2F70F41B9C3250D::A57EE0C5B275A465* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* FB26116B49FDD56C)
		{
			return ((::B2F70F41B9C3250D::A57EE0C5B275A465*(*)(::PVOID, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET))(this, FB26116B49FDD56C);
		}

		::UnityEngine::Object* get_target()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET))(this);
		}

		::UnityEngine::Events::ArgumentCache* get_arguments()
		{
			return ((::UnityEngine::Events::ArgumentCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::String* get_targetAssemblyTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGETASSEMBLYTYPENAME_OFFSET))(this);
		}

		::UnityEngine::Events::PersistentListenerMode get_mode()
		{
			return ((::UnityEngine::Events::PersistentListenerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET))(this);
		}
	};
}
