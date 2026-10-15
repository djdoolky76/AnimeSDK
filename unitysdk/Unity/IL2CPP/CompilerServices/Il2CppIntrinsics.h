#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Object; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_ADDGCEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F3CC3D0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3CC3E0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_FASTCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F3CC380)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETGCMARKTHREADIDS_OFFSET UNITYSDK_OFFSET(0x1F3CC3C0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLEINPRIVATE_OFFSET UNITYSDK_OFFSET(0x1F3CC2E0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1F3CC290)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LIKELY_OFFSET UNITYSDK_OFFSET(0x1F3CC270)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET UNITYSDK_OFFSET(0x1F3CC280)

namespace Unity::IL2CPP::CompilerServices
{
	class Il2CppIntrinsics : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::MethodInfo*, ::System::Object*>** StaticGet_Cache()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::MethodInfo*, ::System::Object*>**)UnitySDK::FromName("Unity.IL2CPP.CompilerServices", "Il2CppIntrinsics")->GetStaticField(0x70100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_CCTOR_OFFSET))();
		}

		static ::System::Boolean Likely(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LIKELY_OFFSET))(a1);
		}

		static ::System::Boolean Unlikely(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET))(a1);
		}

		static ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* a1)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLE_OFFSET))(a1);
		}

		static ::System::RuntimeTypeHandle GetTypeHandleInPrivate(::System::Object* a1)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLEINPRIVATE_OFFSET))(a1);
		}

		static ::System::Object* FastCreateInstance(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_FASTCREATEINSTANCE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::IntPtr>* GetGCMarkThreadIds()
		{
			return ((::Il2CppArray<::System::IntPtr>*(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETGCMARKTHREADIDS_OFFSET))();
		}

		static ::System::Void AddGCEventCallback(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_ADDGCEVENTCALLBACK_OFFSET))(a1);
		}

	};
}
