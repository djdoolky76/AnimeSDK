#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F11CF90)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11CFD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F11D140)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_1_OFFSET UNITYSDK_OFFSET(0x1F11D1A0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CLEANUPASYNCSTACKTRACE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F11CFE0)

namespace Cysharp::Threading::Tasks::Internal
{
	class DiagnosticsExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x3F2A0);
		}

		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x3F2A8);
		}

		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x3F2B0);
		}

		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x3F2B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::String* _CleanupAsyncStackTrace_b__3_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CLEANUPASYNCSTACKTRACE_B__3_0_OFFSET))(this, a1);
		}

		::System::String* _BeautifyType_b__6_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _BeautifyType_b__6_1(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_1_OFFSET))(this, a1);
		}

	};
}
