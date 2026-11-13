#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_DebugMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_State.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define UNITYENGINE_RENDERING_VOLUMEPROXY_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F6691C0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66A130)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1F661F90)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENTDEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1F66A0E0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1F669500)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETORIGINVALUES_OFFSET UNITYSDK_OFFSET(0x1F669F30)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETSTACK_OFFSET UNITYSDK_OFFSET(0x1F669D80)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1F669DB0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1F669F20)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F669EA0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1F6693B0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F663160)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDEBYPROFILE_OFFSET UNITYSDK_OFFSET(0x1F6695C0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1F669700)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x1F667270)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASE_1_OFFSET UNITYSDK_OFFSET(0x1F6699F0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_REQUIRE_1_OFFSET UNITYSDK_OFFSET(0x1F6693C0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RESET_1_OFFSET UNITYSDK_OFFSET(0x1F669C80)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SAVEORIGINVALUES_OFFSET UNITYSDK_OFFSET(0x1F661FB0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SETCOMPONENTDEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1F669F90)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1F6693A0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_TRYINIT_OFFSET UNITYSDK_OFFSET(0x1F666520)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6685A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_TypeDefinitionIndex = 36590;

	class VolumeProxy : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Volume* _Volume; // 0x10
		::UnityEngine::Rendering::VolumeProfile* _Profile; // 0x18
		::UnityEngine::Rendering::VolumeStack* _OriginStack; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>* _StateDict; // 0x28
		::Il2CppArray<::UnityEngine::Rendering::VolumeStack*>* _VolumeStacks; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>* _ComponentDebugState; // 0x38
		::UnityEngine::Rendering::VolumeProxy_State _InitState; // 0x40
		::UnityEngine::Rendering::VolumeProxy_State _SaveOriginState; // 0x44
		::System::Boolean _Dirty; // 0x48
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::VolumeStack*>** StaticGet__GlobalOriginStack()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::VolumeStack*>**)UnitySDK::FromName("UnityEngine.Rendering", "VolumeProxy")->GetStaticField(0x62BA0);
		}

		::System::Void _ctor(::UnityEngine::Rendering::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_CCTOR_OFFSET))();
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_TRYINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void set_RequireComponentWithStackTrace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireComponentWithStackTrace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeComponent* Require_1(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_REQUIRE_1_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideByProfile(::UnityEngine::Rendering::VolumeProxy_Priority a1, ::UnityEngine::Rendering::VolumeProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDEBYPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void Release_1(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseAll(::UnityEngine::Rendering::VolumeProxy_Priority a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASEALL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset_1(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RESET_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::VolumeComponent* GetTopPriorityComponent_1(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYCOMPONENT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeProxy_Priority GetTopPriority(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeProxy_Priority(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITY_OFFSET))(this, a1);
		}

		::System::String* GetTopPriorityStackTrace(::System::RuntimeTypeHandle a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYSTACKTRACE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeComponent* GetComponent_1(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::VolumeStack* GetStack(::UnityEngine::Rendering::VolumeProxy_Priority a1)
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETSTACK_OFFSET))(this, a1);
		}

		::System::Void SaveOriginValues(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SAVEORIGINVALUES_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeComponent* GetOriginValues(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETORIGINVALUES_OFFSET))(this, a1);
		}

		::System::Void ApplySettings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_APPLYSETTINGS_OFFSET))(this, a1);
		}

		::System::Void OverrideComponent(::UnityEngine::Rendering::VolumeComponent* a1, ::UnityEngine::Rendering::VolumeComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDECOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetComponentDebugState(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeProxy_DebugMethod a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_DebugMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SETCOMPONENTDEBUGSTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::VolumeProxy_DebugMethod GetComponentDebugState(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeProxy_DebugMethod(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENTDEBUGSTATE_OFFSET))(this, a1);
		}

	};
}
