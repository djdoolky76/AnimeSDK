#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/EFindName.h"
#include "unitysdk/Foundation/Unreal/FNameEntryId.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class String; }

#define FOUNDATION_UNREAL_FNAME_FINDSTRING_OFFSET UNITYSDK_OFFSET(0x1F91AF50)
#define FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_1_OFFSET UNITYSDK_OFFSET(0x1F91B4A0)
#define FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_OFFSET UNITYSDK_OFFSET(0x359320)
#define FOUNDATION_UNREAL_FNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x76E810)
#define FOUNDATION_UNREAL_FNAME_GETSTRING_OFFSET UNITYSDK_OFFSET(0x98EF40)
#define FOUNDATION_UNREAL_FNAME_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1F91B760)
#define FOUNDATION_UNREAL_FNAME_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x98EED0)
#define FOUNDATION_UNREAL_FNAME_GET_NUMBERPART_OFFSET UNITYSDK_OFFSET(0x98EF00)
#define FOUNDATION_UNREAL_FNAME_GET_STRINGPART_OFFSET UNITYSDK_OFFSET(0x98EEF0)
#define FOUNDATION_UNREAL_FNAME_MAKEDETECTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F91AEA0)
#define FOUNDATION_UNREAL_FNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F91B740)
#define FOUNDATION_UNREAL_FNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F91B750)
#define FOUNDATION_UNREAL_FNAME_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define FOUNDATION_UNREAL_FNAME_SPLIT_OFFSET UNITYSDK_OFFSET(0x1F91AB90)
#define FOUNDATION_UNREAL_FNAME_TOUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x76E070)
#define FOUNDATION_UNREAL_FNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98EFE0)
#define FOUNDATION_UNREAL_FNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2E4140)
#define FOUNDATION_UNREAL_FNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x98EFD0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FName_TypeDefinitionIndex = 8815;

	struct alignas(4) FName
	{
		static ::Foundation::Unreal::FName* StaticGet_None()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FName_TypeDefinitionIndex)->GetStaticField(0x3B10);
		}
		::Foundation::Unreal::FNameEntryId _comparisonIndex; // 0x10
		::System::UInt32 _number; // 0x14

		::System::Void _ctor(::System::String* value, ::Foundation::Unreal::EFindName findType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_OFFSET))(this, value, findType);
		}

		::System::Void _ctor_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_1_OFFSET))(this, stringView, findType);
		}

		::System::Void _ctor_2(::Foundation::Unreal::FNameEntryId entryId, ::System::UInt32 number)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FNameEntryId, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_2_OFFSET))(this, entryId, number);
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_ISNONE_OFFSET))(this);
		}

		static ::System::UInt32 Split(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>& stringPartView)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_SPLIT_OFFSET))(stringView, stringPartView);
		}

		/*
		static ::Foundation::Unreal::FName MakeDetectNumber(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::Foundation::Unreal::FName(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_MAKEDETECTNUMBER_OFFSET))(stringView, findType);
		}
		*/

		static ::Foundation::Unreal::FNameEntryId FindString(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_FINDSTRING_OFFSET))(stringView, findType);
		}

		::System::String* get_StringPart()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_STRINGPART_OFFSET))(this);
		}

		::System::String* get_NumberPart()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_NUMBERPART_OFFSET))(this);
		}

		::Foundation::Unreal::FNameEntryId GetComparisonIndex()
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_OFFSET))(this);
		}

		::System::Void SetNumber(::System::UInt32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_SETNUMBER_OFFSET))(this, number);
		}

		::System::String* GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETSTRING_OFFSET))(this);
		}

		::System::UInt64 ToUnstableInt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_TOUNSTABLEINT_OFFSET))(this);
		}

		static ::Foundation::Unreal::FNameEntryId GetComparisonIndex_1(::System::UInt64 unstableInt)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_1_OFFSET))(unstableInt);
		}

		/*
		static ::System::Boolean op_Equality(::Foundation::Unreal::FName left, ::Foundation::Unreal::FName right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::Foundation::Unreal::FName left, ::Foundation::Unreal::FName right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::UInt32 GetTypeHash(::Foundation::Unreal::FName self)
		{
			return ((::System::UInt32(*)(::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETTYPEHASH_OFFSET))(self);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETHASHCODE_OFFSET))(this);
		}
	};
}
