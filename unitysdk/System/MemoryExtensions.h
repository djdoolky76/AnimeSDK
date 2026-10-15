#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class String; }

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_3_OFFSET UNITYSDK_OFFSET(0x1EE45960)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_4_OFFSET UNITYSDK_OFFSET(0x1EE45980)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_5_OFFSET UNITYSDK_OFFSET(0x1EE45A20)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_5_OFFSET UNITYSDK_OFFSET(0x1EE457D0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_6_OFFSET UNITYSDK_OFFSET(0x1EE45830)
#define SYSTEM_MEMORYEXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE45AF0)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1EE45280)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1EE45420)
#define SYSTEM_MEMORYEXTENSIONS_ENDSWITH_1_OFFSET UNITYSDK_OFFSET(0x1EE45590)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1EE451E0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE44FD0)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1EE45AD0)

namespace System
{
	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)UnitySDK::FromName("System", "MemoryExtensions")->GetStaticField(0x110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Boolean Equals(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareTo(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareToOrdinalIgnoreCase(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndsWith_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2, ::System::StringComparison a3)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ENDSWITH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> AsSpan_5(::System::String* a1)
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_5_OFFSET))(a1);
		}

		static ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> AsSpan_6(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_6_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_3(::System::String* a1)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_3_OFFSET))(a1);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_4(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_4_OFFSET))(a1, a2);
		}

		static ::System::ReadOnlyMemory_1<::System::Char> AsMemory_5(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_5_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr MeasureStringAdjustment()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET))();
		}

	};
}
