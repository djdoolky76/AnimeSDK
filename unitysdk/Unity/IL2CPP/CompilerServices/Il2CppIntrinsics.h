#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_ADDGCEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x200684E0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_FASTCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x20068480)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET UNITYSDK_OFFSET(0x200684C0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETGCMARKTHREADIDS_OFFSET UNITYSDK_OFFSET(0x200684D0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x20068440)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LIKELY_OFFSET UNITYSDK_OFFSET(0x20068420)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_REMOVEGCEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x200684F0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET UNITYSDK_OFFSET(0x20068430)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsics_TypeDefinitionIndex = 6985;

	class Il2CppIntrinsics : public ::System::Object
	{
	public:
		static ::System::Boolean Likely(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_LIKELY_OFFSET))(value);
		}

		static ::System::Boolean Unlikely(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_UNLIKELY_OFFSET))(value);
		}

		static ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* obj)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETTYPEHANDLE_OFFSET))(obj);
		}

		static ::System::Object* FastCreateInstance(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_FASTCREATEINSTANCE_OFFSET))(handle);
		}

		static ::System::Int32 GetCurrentMethodRID(::System::Int32 id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETCURRENTMETHODRID_OFFSET))(id);
		}

		static ::Il2CppArray<::System::IntPtr>* GetGCMarkThreadIds()
		{
			return ((::Il2CppArray<::System::IntPtr>*(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_GETGCMARKTHREADIDS_OFFSET))();
		}

		static ::System::Void AddGCEventCallback(::System::IntPtr callback)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_ADDGCEVENTCALLBACK_OFFSET))(callback);
		}

		static ::System::Void RemoveGCEventCallback(::System::IntPtr callback)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_REMOVEGCEVENTCALLBACK_OFFSET))(callback);
		}
	};
}
