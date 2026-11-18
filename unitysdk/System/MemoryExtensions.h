#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/ReadOnlyMemory_1_0ED4571775E9BB6A.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class String; }

#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET UNITYSDK_OFFSET(0x1F4204D0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_5_OFFSET UNITYSDK_OFFSET(0x1F420300)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_6_OFFSET UNITYSDK_OFFSET(0x1F420380)
#define SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1F420170)
#define SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F41FCC0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1F4200A0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F41FEA0)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_3_OFFSET UNITYSDK_OFFSET(0x1F41FD90)
#define SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1F420580)
#define SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET UNITYSDK_OFFSET(0x1F41FAE0)
#define SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x1F41F920)
#define SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET UNITYSDK_OFFSET(0x1F41F870)
#define SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4205D0)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 6563;

	class MemoryExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_StringAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MemoryExtensions_TypeDefinitionIndex)->GetStaticField(0x3080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> Trim(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET))(span);
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> TrimStart(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET))(span);
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> TrimEnd(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET))(span);
		}

		static ::System::Boolean Contains(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET))(span, value, comparisonType);
		}

		static ::System::Boolean Equals(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> other, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALS_OFFSET))(span, other, comparisonType);
		}

		static ::System::Boolean EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> other)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(span, other);
		}

		static ::System::Int32 CompareToOrdinalIgnoreCase(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> strA, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> strB)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COMPARETOORDINALIGNORECASE_OFFSET))(strA, strB);
		}

		static ::System::Int32 IndexOf_3(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> span, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> value, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_3_OFFSET))(span, value, comparisonType);
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> AsSpan_5(::System::String* text)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_5_OFFSET))(text);
		}

		static ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> AsSpan_6(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_6_OFFSET))(text, start, length);
		}

		static ::System::ReadOnlyMemory_1_0ED4571775E9BB6A<::System::Char> AsMemory_2(::System::String* text, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::ReadOnlyMemory_1_0ED4571775E9BB6A<::System::Char>(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_2_OFFSET))(text, start, length);
		}

		static ::System::IntPtr MeasureStringAdjustment()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_MEASURESTRINGADJUSTMENT_OFFSET))();
		}
	};
}
