#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Reflection { class MethodBase; }
namespace System::Text::RegularExpressions { class Regex; }

#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_APPENDHYPERLINK_OFFSET UNITYSDK_OFFSET(0x1F11C380)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_BEAUTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1F11B8A0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F11C5E0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CLEANUPASYNCSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1F119EF0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_IGNORELINE_OFFSET UNITYSDK_OFFSET(0x1F11AC90)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_ISASYNC_OFFSET UNITYSDK_OFFSET(0x1F11AF80)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_TRYRESOLVESTATEMACHINEMETHOD_OFFSET UNITYSDK_OFFSET(0x1F11B0B0)

namespace Cysharp::Threading::Tasks::Internal
{
	class DiagnosticsExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_builtInTypeNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "DiagnosticsExtensions")->GetStaticField(0x3F2D0);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_typeBeautifyRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "DiagnosticsExtensions")->GetStaticField(0x3F2D8);
		}

		static ::System::Boolean* StaticGet_displayFilenames()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "DiagnosticsExtensions")->GetStaticField(0xD7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::String* CleanupAsyncStackTrace(::System::Diagnostics::StackTrace* a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CLEANUPASYNCSTACKTRACE_OFFSET))(a1);
		}

		static ::System::Boolean IsAsync(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_ISASYNC_OFFSET))(a1);
		}

		static ::System::Boolean TryResolveStateMachineMethod(::System::Reflection::MethodBase* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_TRYRESOLVESTATEMACHINEMETHOD_OFFSET))(a1, a2);
		}

		static ::System::String* BeautifyType(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_BEAUTIFYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IgnoreLine(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_IGNORELINE_OFFSET))(a1);
		}

		static ::System::String* AppendHyperLink(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_APPENDHYPERLINK_OFFSET))(a1, a2);
		}

	};
}
