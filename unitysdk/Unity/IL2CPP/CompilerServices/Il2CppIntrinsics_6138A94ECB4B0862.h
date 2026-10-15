#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace Unity::IL2CPP::CompilerServices { class Il2CppIntrinsics_6138A94ECB4B0862_LateBound; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_BUILDBYDYNAMICMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1B9C5B20)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9C5AF0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_DIRECTCALL_OFFSET UNITYSDK_OFFSET(0x1B9C5B40)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_GETCURRENTMETHODRID_OFFSET UNITYSDK_OFFSET(0x1B9C5B10)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_UNLIKELY_OFFSET UNITYSDK_OFFSET(0x1B9C5B00)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsics_6138A94ECB4B0862_TypeDefinitionIndex = 7126;

	class Il2CppIntrinsics_6138A94ECB4B0862 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::MethodInfo*, ::System::Object*>** StaticGet_Cache()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::MethodInfo*, ::System::Object*>**)UnitySDK::FromName("Unity.IL2CPP.CompilerServices", "Il2CppIntrinsics")->GetStaticField(0x70110);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Object*>** StaticGet__buildByDynamicMethodDelegate()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Object*>**)UnitySDK::FromName("Unity.IL2CPP.CompilerServices", "Il2CppIntrinsics")->GetStaticField(0x70118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_CCTOR_OFFSET))();
		}

		static ::System::Boolean Unlikely(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_UNLIKELY_OFFSET))(a1);
		}

		static ::System::Int32 GetCurrentMethodRID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_GETCURRENTMETHODRID_OFFSET))(a1);
		}

		static ::Unity::IL2CPP::CompilerServices::Il2CppIntrinsics_6138A94ECB4B0862_LateBound* BuildByDynamicMethodCall(::System::Reflection::MethodInfo* a1)
		{
			return ((::Unity::IL2CPP::CompilerServices::Il2CppIntrinsics_6138A94ECB4B0862_LateBound*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_BUILDBYDYNAMICMETHODCALL_OFFSET))(a1);
		}

		static ::System::Object* DirectCall(::System::Reflection::MethodBase* a1, ::System::Object* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Reflection::MethodBase*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICS_6138A94ECB4B0862_DIRECTCALL_OFFSET))(a1, a2, a3);
		}

	};
}
