#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/NUInt.h"
namespace System { class Type; }
namespace System::Numerics { class Vector; }

#define SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARLESSTHANPOINTERSIZED_1_OFFSET UNITYSDK_OFFSET(0x1EE48240)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARLESSTHANPOINTERSIZED_OFFSET UNITYSDK_OFFSET(0x1EE481B0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EE482D0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EE484A0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1EE47570)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1EE470F0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1EE47710)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1EE47050)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET UNITYSDK_OFFSET(0x1EE47900)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_LESSTHANEQUAL_OFFSET UNITYSDK_OFFSET(0x1EE485C0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1EE47550)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDBYTE_OFFSET UNITYSDK_OFFSET(0x1EE47300)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1EE478E0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x1EE477A0)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCECOMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1EE47600)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCECOMPARETO_OFFSET UNITYSDK_OFFSET(0x1EE47440)
#define SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x1EE471E0)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_21321BB165CABDFE_TypeDefinitionIndex = 4980;

	class SpanHelpers_21321BB165CABDFE : public ::System::Object
	{
	public:
		static ::System::Int32 IndexOf(::System::Byte a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte, ::System::Int32, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 IndexOf_1(::System::Byte a1, ::System::Byte a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Byte, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SequenceEqual(::System::Byte a1, ::System::Byte a2, ::System::NUInt a3)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Byte, ::System::NUInt))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCEEQUAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LocateFirstFoundByte(::System::Numerics::Vector* a1)
		{
			return ((::System::Int32(*)(::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDBYTE_OFFSET))(a1);
		}

		static ::System::Int32 SequenceCompareTo(::System::Byte a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte, ::System::Int32, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCECOMPARETO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LocateFirstFoundByte_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDBYTE_1_OFFSET))(a1);
		}

		static ::System::Numerics::Vector* GetVector(::System::Byte a1)
		{
			return ((::System::Numerics::Vector*(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_GETVECTOR_OFFSET))(a1);
		}

		static ::System::Int32 SequenceCompareTo_1(::System::Char a1, ::System::Int32 a2, ::System::Char a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Char, ::System::Int32, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_SEQUENCECOMPARETO_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 IndexOf_2(::System::Char a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_INDEXOF_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LocateFirstFoundChar(::System::Numerics::Vector* a1)
		{
			return ((::System::Int32(*)(::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDCHAR_OFFSET))(a1);
		}

		static ::System::Int32 LocateFirstFoundChar_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_LOCATEFIRSTFOUNDCHAR_1_OFFSET))(a1);
		}

		static ::System::Boolean IsReferenceOrContainsReferencesCore(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET))(a1);
		}

		static ::System::Void ClearLessThanPointerSized(::PVOID a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARLESSTHANPOINTERSIZED_OFFSET))(a1, a2);
		}

		static ::System::Void ClearLessThanPointerSized_1(::System::Byte a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARLESSTHANPOINTERSIZED_1_OFFSET))(a1, a2);
		}

		static ::System::Void ClearPointerSizedWithoutReferences(::System::Byte a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARPOINTERSIZEDWITHOUTREFERENCES_OFFSET))(a1, a2);
		}

		static ::System::Void ClearPointerSizedWithReferences(::System::IntPtr a1, ::System::UIntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_CLEARPOINTERSIZEDWITHREFERENCES_OFFSET))(a1, a2);
		}

		static ::System::Boolean LessThanEqual(::System::IntPtr a1, ::System::UIntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_21321BB165CABDFE_LESSTHANEQUAL_OFFSET))(a1, a2);
		}

	};
}
