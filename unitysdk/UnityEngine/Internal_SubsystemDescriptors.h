#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ISubsystemDescriptor; }
namespace UnityEngine { class ISubsystemDescriptorImpl; }
namespace UnityEngine { class SubsystemDescriptor; }

#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49DD50)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F49D6B0)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_CLEARMANAGEDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x1F49DAA0)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_INITIALIZEMANAGEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F49D8D0)

namespace UnityEngine
{
	class Internal_SubsystemDescriptors : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>** StaticGet_s_StandaloneSubsystemDescriptors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>**)UnitySDK::FromName("UnityEngine", "Internal_SubsystemDescriptors")->GetStaticField(0x3B0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>** StaticGet_s_IntegratedSubsystemDescriptors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>**)UnitySDK::FromName("UnityEngine", "Internal_SubsystemDescriptors")->GetStaticField(0x3B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_CCTOR_OFFSET))();
		}

		static ::System::Boolean Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::SubsystemDescriptor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET))(a1);
		}

		static ::System::Void Internal_InitializeManagedDescriptor(::System::IntPtr a1, ::UnityEngine::ISubsystemDescriptorImpl* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::ISubsystemDescriptorImpl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_INITIALIZEMANAGEDDESCRIPTOR_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_ClearManagedDescriptors()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_CLEARMANAGEDDESCRIPTORS_OFFSET))();
		}

	};
}
