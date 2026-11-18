#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Text/NormalizationForm.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/StringSplitOptions.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ParamsArray.h"

namespace System { class CharEnumerator; }
namespace System { class IFormatProvider; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_STRING_BZERO_ALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1C8B8520)
#define SYSTEM_STRING_BZERO_ALIGNED_2_OFFSET UNITYSDK_OFFSET(0x1C8B8530)
#define SYSTEM_STRING_BZERO_ALIGNED_4_OFFSET UNITYSDK_OFFSET(0x1C8B8540)
#define SYSTEM_STRING_BZERO_ALIGNED_8_OFFSET UNITYSDK_OFFSET(0x1C8B8550)
#define SYSTEM_STRING_BZERO_OFFSET UNITYSDK_OFFSET(0x1C8B83C0)
#define SYSTEM_STRING_CHARCOPY_OFFSET UNITYSDK_OFFSET(0x1C8B7240)
#define SYSTEM_STRING_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8B4C30)
#define SYSTEM_STRING_COMPAREORDINALHELPER_OFFSET UNITYSDK_OFFSET(0x1C8AF210)
#define SYSTEM_STRING_COMPAREORDINALIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x1C8AEFA0)
#define SYSTEM_STRING_COMPAREORDINALUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B6AF0)
#define SYSTEM_STRING_COMPAREORDINAL_1_OFFSET UNITYSDK_OFFSET(0x1C8B0FC0)
#define SYSTEM_STRING_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x1C8B3030)
#define SYSTEM_STRING_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1C8B2FC0)
#define SYSTEM_STRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C8B2EC0)
#define SYSTEM_STRING_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1C8B2760)
#define SYSTEM_STRING_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x1C89B110)
#define SYSTEM_STRING_COMPARE_3_OFFSET UNITYSDK_OFFSET(0x1C8B2810)
#define SYSTEM_STRING_COMPARE_4_OFFSET UNITYSDK_OFFSET(0x1C8816D0)
#define SYSTEM_STRING_COMPARE_5_OFFSET UNITYSDK_OFFSET(0x1C8B28C0)
#define SYSTEM_STRING_COMPARE_6_OFFSET UNITYSDK_OFFSET(0x1C8B2980)
#define SYSTEM_STRING_COMPARE_7_OFFSET UNITYSDK_OFFSET(0x1C8B2AA0)
#define SYSTEM_STRING_COMPARE_8_OFFSET UNITYSDK_OFFSET(0x1C8B2BE0)
#define SYSTEM_STRING_COMPARE_9_OFFSET UNITYSDK_OFFSET(0x1C89ACA0)
#define SYSTEM_STRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C8B2700)
#define SYSTEM_STRING_CONCATARRAY_OFFSET UNITYSDK_OFFSET(0x1C8B5F90)
#define SYSTEM_STRING_CONCAT_10_OFFSET UNITYSDK_OFFSET(0x1C890880)
#define SYSTEM_STRING_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x1C8B5A50)
#define SYSTEM_STRING_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x1C8B5CA0)
#define SYSTEM_STRING_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x1C8B5DA0)
#define SYSTEM_STRING_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x1C8B5DE0)
#define SYSTEM_STRING_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x1C8B6080)
#define SYSTEM_STRING_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x1C88FA70)
#define SYSTEM_STRING_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x1C8906A0)
#define SYSTEM_STRING_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x1C895160)
#define SYSTEM_STRING_CONCAT_OFFSET UNITYSDK_OFFSET(0x1C8B5A20)
#define SYSTEM_STRING_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C8B3070)
#define SYSTEM_STRING_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C8AF930)
#define SYSTEM_STRING_COPY_OFFSET UNITYSDK_OFFSET(0x1C8B5920)
#define SYSTEM_STRING_CREATESTRINGFROMENCODING_OFFSET UNITYSDK_OFFSET(0x1C8B1820)
#define SYSTEM_STRING_CREATESTRING_1_OFFSET UNITYSDK_OFFSET(0x1C8B8980)
#define SYSTEM_STRING_CREATESTRING_2_OFFSET UNITYSDK_OFFSET(0x1C8B89A0)
#define SYSTEM_STRING_CREATESTRING_3_OFFSET UNITYSDK_OFFSET(0x1C8B89B0)
#define SYSTEM_STRING_CREATESTRING_4_OFFSET UNITYSDK_OFFSET(0x1C8B89C0)
#define SYSTEM_STRING_CREATESTRING_5_OFFSET UNITYSDK_OFFSET(0x1C8B89D0)
#define SYSTEM_STRING_CREATESTRING_6_OFFSET UNITYSDK_OFFSET(0x1C8B8A80)
#define SYSTEM_STRING_CREATESTRING_7_OFFSET UNITYSDK_OFFSET(0x1C8B8620)
#define SYSTEM_STRING_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1C8B85A0)
#define SYSTEM_STRING_CREATETRIMMEDSTRING_OFFSET UNITYSDK_OFFSET(0x1C8B4C60)
#define SYSTEM_STRING_CTORCHARARRAYSTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8B1E30)
#define SYSTEM_STRING_CTORCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1C8B1D80)
#define SYSTEM_STRING_CTORCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C8B2000)
#define SYSTEM_STRING_CTORCHARPTRSTARTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8B2470)
#define SYSTEM_STRING_CTORCHARPTR_OFFSET UNITYSDK_OFFSET(0x1C8B2240)
#define SYSTEM_STRING_ENDSWITH_1_OFFSET UNITYSDK_OFFSET(0x1C8B30D0)
#define SYSTEM_STRING_ENDSWITH_2_OFFSET UNITYSDK_OFFSET(0x1C8B3340)
#define SYSTEM_STRING_ENDSWITH_3_OFFSET UNITYSDK_OFFSET(0x1C8B3410)
#define SYSTEM_STRING_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x1C8B30C0)
#define SYSTEM_STRING_EQUALSHELPER_OFFSET UNITYSDK_OFFSET(0x1C8AF150)
#define SYSTEM_STRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C88ED00)
#define SYSTEM_STRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1C8AF4B0)
#define SYSTEM_STRING_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x1C8AF7F0)
#define SYSTEM_STRING_EQUALS_4_OFFSET UNITYSDK_OFFSET(0x1C8A5840)
#define SYSTEM_STRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8AF3B0)
#define SYSTEM_STRING_FASTALLOCATESTRING_OFFSET UNITYSDK_OFFSET(0x1C8AEF40)
#define SYSTEM_STRING_FILLSTRINGCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B1CC0)
#define SYSTEM_STRING_FORMATHELPER_OFFSET UNITYSDK_OFFSET(0x1C8B55E0)
#define SYSTEM_STRING_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1C8B56B0)
#define SYSTEM_STRING_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1C8B5700)
#define SYSTEM_STRING_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x1C8B5740)
#define SYSTEM_STRING_FORMAT_4_OFFSET UNITYSDK_OFFSET(0x1C8B5810)
#define SYSTEM_STRING_FORMAT_5_OFFSET UNITYSDK_OFFSET(0x1C891700)
#define SYSTEM_STRING_FORMAT_6_OFFSET UNITYSDK_OFFSET(0x1C897BE0)
#define SYSTEM_STRING_FORMAT_7_OFFSET UNITYSDK_OFFSET(0x1C8B5850)
#define SYSTEM_STRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x1C885760)
#define SYSTEM_STRING_GETBYTESFROMENCODING_OFFSET UNITYSDK_OFFSET(0x1C8B18F0)
#define SYSTEM_STRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C8B69C0)
#define SYSTEM_STRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C895DD0)
#define SYSTEM_STRING_GETLEGACYNONRANDOMIZEDHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8AFE00)
#define SYSTEM_STRING_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1C8B6540)
#define SYSTEM_STRING_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x1C892C20)
#define SYSTEM_STRING_GET_FIRSTCHAR_OFFSET UNITYSDK_OFFSET(0x1C8AEF30)
#define SYSTEM_STRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C8B6AE0)
#define SYSTEM_STRING_INDEXOFANYUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B6EA0)
#define SYSTEM_STRING_INDEXOFANY_1_OFFSET UNITYSDK_OFFSET(0x1C8B36C0)
#define SYSTEM_STRING_INDEXOFANY_2_OFFSET UNITYSDK_OFFSET(0x1C8B35D0)
#define SYSTEM_STRING_INDEXOFANY_OFFSET UNITYSDK_OFFSET(0x1C8B35C0)
#define SYSTEM_STRING_INDEXOFUNCHECKED_1_OFFSET UNITYSDK_OFFSET(0x1C8B6D50)
#define SYSTEM_STRING_INDEXOFUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B6BB0)
#define SYSTEM_STRING_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1C885740)
#define SYSTEM_STRING_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1C8B36D0)
#define SYSTEM_STRING_INDEXOF_3_OFFSET UNITYSDK_OFFSET(0x1C8B36F0)
#define SYSTEM_STRING_INDEXOF_4_OFFSET UNITYSDK_OFFSET(0x1C8B3730)
#define SYSTEM_STRING_INDEXOF_5_OFFSET UNITYSDK_OFFSET(0x1C8B30A0)
#define SYSTEM_STRING_INDEXOF_6_OFFSET UNITYSDK_OFFSET(0x1C8B3710)
#define SYSTEM_STRING_INDEXOF_7_OFFSET UNITYSDK_OFFSET(0x1C8B3810)
#define SYSTEM_STRING_INDEXOF_8_OFFSET UNITYSDK_OFFSET(0x1C8B3490)
#define SYSTEM_STRING_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C8813A0)
#define SYSTEM_STRING_INSERT_OFFSET UNITYSDK_OFFSET(0x1C8B4D00)
#define SYSTEM_STRING_INTERNALCOPY_OFFSET UNITYSDK_OFFSET(0x1C8B6AB0)
#define SYSTEM_STRING_INTERNALINTERN_OFFSET UNITYSDK_OFFSET(0x1C8B64B0)
#define SYSTEM_STRING_INTERNALISINTERNED_OFFSET UNITYSDK_OFFSET(0x1C8B6530)
#define SYSTEM_STRING_INTERNALSPLITKEEPEMPTYENTRIES_OFFSET UNITYSDK_OFFSET(0x1C8B0700)
#define SYSTEM_STRING_INTERNALSPLITOMITEMPTYENTRIES_OFFSET UNITYSDK_OFFSET(0x1C8B02C0)
#define SYSTEM_STRING_INTERNALSUBSTRING_OFFSET UNITYSDK_OFFSET(0x1C8B0FF0)
#define SYSTEM_STRING_INTERN_OFFSET UNITYSDK_OFFSET(0x1C8B6440)
#define SYSTEM_STRING_ISASCII_OFFSET UNITYSDK_OFFSET(0x1C8AF7A0)
#define SYSTEM_STRING_ISBOMWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C8B4C40)
#define SYSTEM_STRING_ISFASTSORT_OFFSET UNITYSDK_OFFSET(0x1C8B8200)
#define SYSTEM_STRING_ISINTERNED_OFFSET UNITYSDK_OFFSET(0x1C8B64C0)
#define SYSTEM_STRING_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1C8B19E0)
#define SYSTEM_STRING_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1C8B1940)
#define SYSTEM_STRING_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x1C8A8000)
#define SYSTEM_STRING_ISNULLORWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C8AFCB0)
#define SYSTEM_STRING_JOIN_1_OFFSET UNITYSDK_OFFSET(0x1C8AE7B0)
#define SYSTEM_STRING_JOIN_3_OFFSET UNITYSDK_OFFSET(0x1C8AE990)
#define SYSTEM_STRING_JOIN_4_OFFSET UNITYSDK_OFFSET(0x1C8AE410)
#define SYSTEM_STRING_JOIN_OFFSET UNITYSDK_OFFSET(0x1C8AE390)
#define SYSTEM_STRING_LASTINDEXOFANYUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B7180)
#define SYSTEM_STRING_LASTINDEXOFANY_1_OFFSET UNITYSDK_OFFSET(0x1C8B3ED0)
#define SYSTEM_STRING_LASTINDEXOFANY_2_OFFSET UNITYSDK_OFFSET(0x1C8B3CE0)
#define SYSTEM_STRING_LASTINDEXOFANY_OFFSET UNITYSDK_OFFSET(0x1C885750)
#define SYSTEM_STRING_LASTINDEXOFUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B6FE0)
#define SYSTEM_STRING_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1C8B3CD0)
#define SYSTEM_STRING_LASTINDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1C8B3EE0)
#define SYSTEM_STRING_LASTINDEXOF_3_OFFSET UNITYSDK_OFFSET(0x1C8B42D0)
#define SYSTEM_STRING_LASTINDEXOF_4_OFFSET UNITYSDK_OFFSET(0x1C8B42F0)
#define SYSTEM_STRING_LASTINDEXOF_5_OFFSET UNITYSDK_OFFSET(0x1C8B4390)
#define SYSTEM_STRING_LASTINDEXOF_6_OFFSET UNITYSDK_OFFSET(0x1C8B43B0)
#define SYSTEM_STRING_LASTINDEXOF_7_OFFSET UNITYSDK_OFFSET(0x1C8B3F00)
#define SYSTEM_STRING_LASTINDEXOF_8_OFFSET UNITYSDK_OFFSET(0x1C8B3BA0)
#define SYSTEM_STRING_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1C8B3B90)
#define SYSTEM_STRING_MAKESEPARATORLIST_1_OFFSET UNITYSDK_OFFSET(0x1C8B0BA0)
#define SYSTEM_STRING_MAKESEPARATORLIST_OFFSET UNITYSDK_OFFSET(0x1C8B00A0)
#define SYSTEM_STRING_MEMCPY_ALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1C8B8560)
#define SYSTEM_STRING_MEMCPY_ALIGNED_2_OFFSET UNITYSDK_OFFSET(0x1C8B8570)
#define SYSTEM_STRING_MEMCPY_ALIGNED_4_OFFSET UNITYSDK_OFFSET(0x1C8B8580)
#define SYSTEM_STRING_MEMCPY_ALIGNED_8_OFFSET UNITYSDK_OFFSET(0x1C8B8590)
#define SYSTEM_STRING_MEMCPY_OFFSET UNITYSDK_OFFSET(0x1C8B83B0)
#define SYSTEM_STRING_MEMSET_OFFSET UNITYSDK_OFFSET(0x1C8B8210)
#define SYSTEM_STRING_NATIVECOMPAREORDINALEX_OFFSET UNITYSDK_OFFSET(0x1C8B2D00)
#define SYSTEM_STRING_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1C8B1C10)
#define SYSTEM_STRING_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C8B1AC0)
#define SYSTEM_STRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C881620)
#define SYSTEM_STRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8AF8A0)
#define SYSTEM_STRING_PADHELPER_OFFSET UNITYSDK_OFFSET(0x1C8B43E0)
#define SYSTEM_STRING_PADLEFT_1_OFFSET UNITYSDK_OFFSET(0x1C8B4970)
#define SYSTEM_STRING_PADLEFT_OFFSET UNITYSDK_OFFSET(0x1C8B43D0)
#define SYSTEM_STRING_PADRIGHT_1_OFFSET UNITYSDK_OFFSET(0x1C8B4990)
#define SYSTEM_STRING_PADRIGHT_OFFSET UNITYSDK_OFFSET(0x1C8B4980)
#define SYSTEM_STRING_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1C8B5520)
#define SYSTEM_STRING_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C8B5370)
#define SYSTEM_STRING_REPLACEFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C8B7F10)
#define SYSTEM_STRING_REPLACEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C8B52A0)
#define SYSTEM_STRING_REPLACEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C8B4E80)
#define SYSTEM_STRING_REPLACEUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B7400)
#define SYSTEM_STRING_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1C8B51A0)
#define SYSTEM_STRING_REPLACE_OFFSET UNITYSDK_OFFSET(0x1C8813B0)
#define SYSTEM_STRING_SMALLCHARTOUPPER_OFFSET UNITYSDK_OFFSET(0x1C8AF030)
#define SYSTEM_STRING_SPLITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C8AFEA0)
#define SYSTEM_STRING_SPLIT_1_OFFSET UNITYSDK_OFFSET(0x1C8B0080)
#define SYSTEM_STRING_SPLIT_2_OFFSET UNITYSDK_OFFSET(0x1C892C90)
#define SYSTEM_STRING_SPLIT_3_OFFSET UNITYSDK_OFFSET(0x1C8B0090)
#define SYSTEM_STRING_SPLIT_4_OFFSET UNITYSDK_OFFSET(0x1C8B0960)
#define SYSTEM_STRING_SPLIT_5_OFFSET UNITYSDK_OFFSET(0x1C8B0970)
#define SYSTEM_STRING_SPLIT_OFFSET UNITYSDK_OFFSET(0x1C8AFE90)
#define SYSTEM_STRING_STARTSWITHORDINALUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C8B8190)
#define SYSTEM_STRING_STARTSWITH_1_OFFSET UNITYSDK_OFFSET(0x1C885480)
#define SYSTEM_STRING_STARTSWITH_2_OFFSET UNITYSDK_OFFSET(0x1C8B49A0)
#define SYSTEM_STRING_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x1C885370)
#define SYSTEM_STRING_SUBSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C8B0DA0)
#define SYSTEM_STRING_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x1C885470)
#define SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_CHAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C8B6A10)
#define SYSTEM_STRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C8B6A60)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1C8B6550)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1C8B6610)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1C8B65B0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1C8B69A0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1C8B6970)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C8B6910)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x1C8B6670)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1C8B6730)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x1C8B67F0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1C8B65C0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1C8B68B0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1C8B69B0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1C8B66D0)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1C8B6790)
#define SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1C8B6850)
#define SYSTEM_STRING_TOCHARARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C8AFBA0)
#define SYSTEM_STRING_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1C8AFB20)
#define SYSTEM_STRING_TOLOWERINVARIANT_OFFSET UNITYSDK_OFFSET(0x1C8B4B10)
#define SYSTEM_STRING_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x1C8B4A70)
#define SYSTEM_STRING_TOLOWER_OFFSET UNITYSDK_OFFSET(0x1C8813C0)
#define SYSTEM_STRING_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C8B4C20)
#define SYSTEM_STRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8B4C10)
#define SYSTEM_STRING_TOUPPERINVARIANT_OFFSET UNITYSDK_OFFSET(0x1C8B4BF0)
#define SYSTEM_STRING_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x1C8B4B50)
#define SYSTEM_STRING_TOUPPER_OFFSET UNITYSDK_OFFSET(0x1C8B4B30)
#define SYSTEM_STRING_TRIMEND_OFFSET UNITYSDK_OFFSET(0x1C897340)
#define SYSTEM_STRING_TRIMHELPER_1_OFFSET UNITYSDK_OFFSET(0x1C8B1480)
#define SYSTEM_STRING_TRIMHELPER_OFFSET UNITYSDK_OFFSET(0x1C8B10D0)
#define SYSTEM_STRING_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x1C8B17B0)
#define SYSTEM_STRING_TRIM_1_OFFSET UNITYSDK_OFFSET(0x1C8B4C50)
#define SYSTEM_STRING_TRIM_OFFSET UNITYSDK_OFFSET(0x1C8B10A0)
#define SYSTEM_STRING_WCSLEN_OFFSET UNITYSDK_OFFSET(0x1C8B21B0)
#define SYSTEM_STRING_WSTRCPY_OFFSET UNITYSDK_OFFSET(0x1C8AFB10)
#define SYSTEM_STRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8B17E0)
#define SYSTEM_STRING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8B17F0)
#define SYSTEM_STRING__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C8B1800)
#define SYSTEM_STRING__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C8B1810)
#define SYSTEM_STRING__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C8B1D60)
#define SYSTEM_STRING__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C8B1D70)
#define SYSTEM_STRING__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1C8B26F0)
#define SYSTEM_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B17D0)

namespace System
{
	inline static constexpr unsigned int String_TypeDefinitionIndex = 318;

	class String : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Empty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(String_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 TrimHead = 0x0; // 0x0
		// static const ::System::Int32 TrimTail = 0x1; // 0x0
		// static const ::System::Int32 TrimBoth = 0x2; // 0x0
		// static const ::System::Int32 charPtrAlignConst = 0x1; // 0x0
		// static const ::System::Int32 alignConst = 0x3; // 0x0
		::System::Int32 m_stringLength; // 0x10
		::System::Char m_firstChar; // 0x14

		::System::Void _ctor(::PVOID value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_1_OFFSET))(this, value, startIndex, length);
		}

		::System::Void _ctor_2(::PVOID value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_3_OFFSET))(this, value, startIndex, length);
		}

		::System::Void _ctor_4(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length, ::System::Text::Encoding* enc)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_4_OFFSET))(this, value, startIndex, length, enc);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Char>* value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_5_OFFSET))(this, value, startIndex, length);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_6_OFFSET))(this, value);
		}

		::System::Void _ctor_7(::System::Char c, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING__CTOR_7_OFFSET))(this, c, count);
		}

		static ::System::String* Join(::System::String* separator, ::Il2CppArray<::System::String*>* value)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_OFFSET))(separator, value);
		}

		static ::System::String* Join_1(::System::String* separator, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_1_OFFSET))(separator, values);
		}

		static ::System::String* Join_3(::System::String* separator, ::System::Collections::Generic::IEnumerable_1<::System::String*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_3_OFFSET))(separator, values);
		}

		::System::Char get_FirstChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_FIRSTCHAR_OFFSET))(this);
		}

		static ::System::String* Join_4(::System::String* separator, ::Il2CppArray<::System::String*>* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_JOIN_4_OFFSET))(separator, value, startIndex, count);
		}

		static ::System::Int32 CompareOrdinalIgnoreCaseHelper(::System::String* strA, ::System::String* strB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALIGNORECASEHELPER_OFFSET))(strA, strB);
		}

		static ::System::String* SmallCharToUpper(::System::String* strIn)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SMALLCHARTOUPPER_OFFSET))(strIn);
		}

		static ::System::Boolean EqualsHelper(::System::String* strA, ::System::String* strB)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALSHELPER_OFFSET))(strA, strB);
		}

		static ::System::Int32 CompareOrdinalHelper(::System::String* strA, ::System::String* strB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALHELPER_OFFSET))(strA, strB);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_1_OFFSET))(this, value);
		}

		::System::Boolean Equals_2(::System::String* value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_2_OFFSET))(this, value, comparisonType);
		}

		static ::System::Boolean Equals_3(::System::String* a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_3_OFFSET))(a, b);
		}

		static ::System::Boolean Equals_4(::System::String* a, ::System::String* b, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_EQUALS_4_OFFSET))(a, b, comparisonType);
		}

		static ::System::Boolean op_Equality(::System::String* a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::String* a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Char get_Chars(::System::Int32 index)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_CHARS_OFFSET))(this, index);
		}

		::System::Void CopyTo(::System::Int32 sourceIndex, ::Il2CppArray<::System::Char>* destination, ::System::Int32 destinationIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COPYTO_OFFSET))(this, sourceIndex, destination, destinationIndex, count);
		}

		::Il2CppArray<::System::Char>* ToCharArray()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOCHARARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* ToCharArray_1(::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOCHARARRAY_1_OFFSET))(this, startIndex, length);
		}

		static ::System::Boolean IsNullOrEmpty(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNULLOREMPTY_OFFSET))(value);
		}

		static ::System::Boolean IsNullOrWhiteSpace(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNULLORWHITESPACE_OFFSET))(value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetLegacyNonRandomizedHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETLEGACYNONRANDOMIZEDHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Split(::Il2CppArray<::System::Char>* separator)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_OFFSET))(this, separator);
		}

		::Il2CppArray<::System::String*>* Split_1(::Il2CppArray<::System::Char>* separator, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_1_OFFSET))(this, separator, count);
		}

		::Il2CppArray<::System::String*>* Split_2(::Il2CppArray<::System::Char>* separator, ::System::StringSplitOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_2_OFFSET))(this, separator, options);
		}

		::Il2CppArray<::System::String*>* Split_3(::Il2CppArray<::System::Char>* separator, ::System::Int32 count, ::System::StringSplitOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_3_OFFSET))(this, separator, count, options);
		}

		::Il2CppArray<::System::String*>* SplitInternal(::Il2CppArray<::System::Char>* separator, ::System::Int32 count, ::System::StringSplitOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLITINTERNAL_OFFSET))(this, separator, count, options);
		}

		::Il2CppArray<::System::String*>* Split_4(::Il2CppArray<::System::String*>* separator, ::System::StringSplitOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_4_OFFSET))(this, separator, options);
		}

		::Il2CppArray<::System::String*>* Split_5(::Il2CppArray<::System::String*>* separator, ::System::Int32 count, ::System::StringSplitOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::StringSplitOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SPLIT_5_OFFSET))(this, separator, count, options);
		}

		::Il2CppArray<::System::String*>* InternalSplitKeepEmptyEntries(::Il2CppArray<::System::Int32>* sepList, ::Il2CppArray<::System::Int32>* lengthList, ::System::Int32 numReplaces, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSPLITKEEPEMPTYENTRIES_OFFSET))(this, sepList, lengthList, numReplaces, count);
		}

		::Il2CppArray<::System::String*>* InternalSplitOmitEmptyEntries(::Il2CppArray<::System::Int32>* sepList, ::Il2CppArray<::System::Int32>* lengthList, ::System::Int32 numReplaces, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSPLITOMITEMPTYENTRIES_OFFSET))(this, sepList, lengthList, numReplaces, count);
		}

		::System::Int32 MakeSeparatorList(::Il2CppArray<::System::Char>* separator, ::Il2CppArray<::System::Int32>*& sepList)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MAKESEPARATORLIST_OFFSET))(this, separator, sepList);
		}

		::System::Int32 MakeSeparatorList_1(::Il2CppArray<::System::String*>* separators, ::Il2CppArray<::System::Int32>*& sepList, ::Il2CppArray<::System::Int32>*& lengthList)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MAKESEPARATORLIST_1_OFFSET))(this, separators, sepList, lengthList);
		}

		::System::String* Substring(::System::Int32 startIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SUBSTRING_OFFSET))(this, startIndex);
		}

		::System::String* Substring_1(::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SUBSTRING_1_OFFSET))(this, startIndex, length);
		}

		::System::String* InternalSubString(::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALSUBSTRING_OFFSET))(this, startIndex, length);
		}

		::System::String* Trim(::Il2CppArray<::System::Char>* trimChars)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIM_OFFSET))(this, trimChars);
		}

		::System::String* TrimStart(::Il2CppArray<::System::Char>* trimChars)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMSTART_OFFSET))(this, trimChars);
		}

		::System::String* TrimEnd(::Il2CppArray<::System::Char>* trimChars)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMEND_OFFSET))(this, trimChars);
		}

		static ::System::String* CreateStringFromEncoding(::PVOID bytes, ::System::Int32 byteLength, ::System::Text::Encoding* encoding)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRINGFROMENCODING_OFFSET))(bytes, byteLength, encoding);
		}

		::System::Int32 GetBytesFromEncoding(::PVOID pbNativeBuffer, ::System::Int32 cbNativeBuffer, ::System::Text::Encoding* encoding)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETBYTESFROMENCODING_OFFSET))(this, pbNativeBuffer, cbNativeBuffer, encoding);
		}

		::System::Boolean IsNormalized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNORMALIZED_OFFSET))(this);
		}

		::System::Boolean IsNormalized_1(::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISNORMALIZED_1_OFFSET))(this, normalizationForm);
		}

		::System::String* Normalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NORMALIZE_OFFSET))(this);
		}

		::System::String* Normalize_1(::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NORMALIZE_1_OFFSET))(this, normalizationForm);
		}

		static ::System::String* FastAllocateString(::System::Int32 length)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FASTALLOCATESTRING_OFFSET))(length);
		}

		static ::System::Void FillStringChecked(::System::String* dest, ::System::Int32 destPos, ::System::String* src)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FILLSTRINGCHECKED_OFFSET))(dest, destPos, src);
		}

		static ::System::Void wstrcpy(::PVOID dmem, ::PVOID smem, ::System::Int32 charCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_WSTRCPY_OFFSET))(dmem, smem, charCount);
		}

		::System::String* CtorCharArray(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARARRAY_OFFSET))(this, value);
		}

		::System::String* CtorCharArrayStartLength(::Il2CppArray<::System::Char>* value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARARRAYSTARTLENGTH_OFFSET))(this, value, startIndex, length);
		}

		::System::String* CtorCharCount(::System::Char c, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARCOUNT_OFFSET))(this, c, count);
		}

		static ::System::Int32 wcslen(::PVOID ptr)
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_WCSLEN_OFFSET))(ptr);
		}

		::System::String* CtorCharPtr(::PVOID ptr)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARPTR_OFFSET))(this, ptr);
		}

		::System::String* CtorCharPtrStartLength(::PVOID ptr, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CTORCHARPTRSTARTLENGTH_OFFSET))(this, ptr, startIndex, length);
		}

		static ::System::Int32 Compare(::System::String* strA, ::System::String* strB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_OFFSET))(strA, strB);
		}

		static ::System::Int32 Compare_1(::System::String* strA, ::System::String* strB, ::System::Boolean ignoreCase)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_1_OFFSET))(strA, strB, ignoreCase);
		}

		static ::System::Int32 Compare_2(::System::String* strA, ::System::String* strB, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_2_OFFSET))(strA, strB, comparisonType);
		}

		static ::System::Int32 Compare_3(::System::String* strA, ::System::String* strB, ::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_3_OFFSET))(strA, strB, culture, options);
		}

		static ::System::Int32 Compare_4(::System::String* strA, ::System::String* strB, ::System::Boolean ignoreCase, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_4_OFFSET))(strA, strB, ignoreCase, culture);
		}

		static ::System::Int32 Compare_5(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_5_OFFSET))(strA, indexA, strB, indexB, length);
		}

		static ::System::Int32 Compare_6(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length, ::System::Boolean ignoreCase)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_6_OFFSET))(strA, indexA, strB, indexB, length, ignoreCase);
		}

		static ::System::Int32 Compare_7(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length, ::System::Boolean ignoreCase, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_7_OFFSET))(strA, indexA, strB, indexB, length, ignoreCase, culture);
		}

		static ::System::Int32 Compare_8(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length, ::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_8_OFFSET))(strA, indexA, strB, indexB, length, culture, options);
		}

		static ::System::Int32 Compare_9(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARE_9_OFFSET))(strA, indexA, strB, indexB, length, comparisonType);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::String* strB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPARETO_1_OFFSET))(this, strB);
		}

		static ::System::Int32 CompareOrdinal(::System::String* strA, ::System::String* strB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINAL_OFFSET))(strA, strB);
		}

		static ::System::Int32 CompareOrdinal_1(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINAL_1_OFFSET))(strA, indexA, strB, indexB, length);
		}

		::System::Boolean Contains(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONTAINS_OFFSET))(this, value);
		}

		::System::Boolean EndsWith(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_OFFSET))(this, value);
		}

		::System::Boolean EndsWith_1(::System::String* value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_1_OFFSET))(this, value, comparisonType);
		}

		::System::Boolean EndsWith_2(::System::String* value, ::System::Boolean ignoreCase, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_2_OFFSET))(this, value, ignoreCase, culture);
		}

		::System::Boolean EndsWith_3(::System::Char value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ENDSWITH_3_OFFSET))(this, value);
		}

		::System::Int32 IndexOf(::System::Char value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_OFFSET))(this, value);
		}

		::System::Int32 IndexOf_1(::System::Char value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_1_OFFSET))(this, value, startIndex);
		}

		::System::Int32 IndexOfAny(::Il2CppArray<::System::Char>* anyOf)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_OFFSET))(this, anyOf);
		}

		::System::Int32 IndexOfAny_1(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_1_OFFSET))(this, anyOf, startIndex);
		}

		::System::Int32 IndexOf_2(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_2_OFFSET))(this, value);
		}

		::System::Int32 IndexOf_3(::System::String* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_3_OFFSET))(this, value, startIndex);
		}

		::System::Int32 IndexOf_4(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_4_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 IndexOf_5(::System::String* value, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_5_OFFSET))(this, value, comparisonType);
		}

		::System::Int32 IndexOf_6(::System::String* value, ::System::Int32 startIndex, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_6_OFFSET))(this, value, startIndex, comparisonType);
		}

		::System::Int32 IndexOf_7(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_7_OFFSET))(this, value, startIndex, count, comparisonType);
		}

		::System::Int32 LastIndexOf(::System::Char value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_OFFSET))(this, value);
		}

		::System::Int32 LastIndexOf_1(::System::Char value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_1_OFFSET))(this, value, startIndex);
		}

		::System::Int32 LastIndexOfAny(::Il2CppArray<::System::Char>* anyOf)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_OFFSET))(this, anyOf);
		}

		::System::Int32 LastIndexOfAny_1(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_1_OFFSET))(this, anyOf, startIndex);
		}

		::System::Int32 LastIndexOf_2(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_2_OFFSET))(this, value);
		}

		::System::Int32 LastIndexOf_3(::System::String* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_3_OFFSET))(this, value, startIndex);
		}

		::System::Int32 LastIndexOf_4(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_4_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 LastIndexOf_5(::System::String* value, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_5_OFFSET))(this, value, comparisonType);
		}

		::System::Int32 LastIndexOf_6(::System::String* value, ::System::Int32 startIndex, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_6_OFFSET))(this, value, startIndex, comparisonType);
		}

		::System::Int32 LastIndexOf_7(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_7_OFFSET))(this, value, startIndex, count, comparisonType);
		}

		::System::String* PadLeft(::System::Int32 totalWidth)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADLEFT_OFFSET))(this, totalWidth);
		}

		::System::String* PadLeft_1(::System::Int32 totalWidth, ::System::Char paddingChar)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADLEFT_1_OFFSET))(this, totalWidth, paddingChar);
		}

		::System::String* PadRight(::System::Int32 totalWidth)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADRIGHT_OFFSET))(this, totalWidth);
		}

		::System::String* PadRight_1(::System::Int32 totalWidth, ::System::Char paddingChar)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADRIGHT_1_OFFSET))(this, totalWidth, paddingChar);
		}

		::System::Boolean StartsWith(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_OFFSET))(this, value);
		}

		::System::Boolean StartsWith_1(::System::String* value, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_1_OFFSET))(this, value, comparisonType);
		}

		::System::Boolean StartsWith_2(::System::String* value, ::System::Boolean ignoreCase, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITH_2_OFFSET))(this, value, ignoreCase, culture);
		}

		::System::String* ToLower()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWER_OFFSET))(this);
		}

		::System::String* ToLower_1(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWER_1_OFFSET))(this, culture);
		}

		::System::String* ToLowerInvariant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOLOWERINVARIANT_OFFSET))(this);
		}

		::System::String* ToUpper()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPER_OFFSET))(this);
		}

		::System::String* ToUpper_1(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPER_1_OFFSET))(this, culture);
		}

		::System::String* ToUpperInvariant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOUPPERINVARIANT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CLONE_OFFSET))(this);
		}

		static ::System::Boolean IsBOMWhitespace(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISBOMWHITESPACE_OFFSET))(c);
		}

		::System::String* Trim_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIM_1_OFFSET))(this);
		}

		::System::String* TrimHelper(::System::Int32 trimType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMHELPER_OFFSET))(this, trimType);
		}

		::System::String* TrimHelper_1(::Il2CppArray<::System::Char>* trimChars, ::System::Int32 trimType)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_TRIMHELPER_1_OFFSET))(this, trimChars, trimType);
		}

		::System::String* CreateTrimmedString(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATETRIMMEDSTRING_OFFSET))(this, start, end);
		}

		::System::String* Insert(::System::Int32 startIndex, ::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INSERT_OFFSET))(this, startIndex, value);
		}

		::System::String* Replace(::System::Char oldChar, ::System::Char newChar)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACE_OFFSET))(this, oldChar, newChar);
		}

		::System::String* Replace_1(::System::String* oldValue, ::System::String* newValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACE_1_OFFSET))(this, oldValue, newValue);
		}

		::System::String* Remove(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REMOVE_OFFSET))(this, startIndex, count);
		}

		::System::String* Remove_1(::System::Int32 startIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REMOVE_1_OFFSET))(this, startIndex);
		}

		static ::System::String* Format(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_OFFSET))(format, arg0);
		}

		static ::System::String* Format_1(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_1_OFFSET))(format, arg0, arg1);
		}

		static ::System::String* Format_2(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_2_OFFSET))(format, arg0, arg1, arg2);
		}

		static ::System::String* Format_3(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_3_OFFSET))(format, args);
		}

		static ::System::String* Format_4(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_4_OFFSET))(provider, format, arg0);
		}

		static ::System::String* Format_5(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_5_OFFSET))(provider, format, arg0, arg1);
		}

		static ::System::String* Format_6(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_6_OFFSET))(provider, format, arg0, arg1, arg2);
		}

		static ::System::String* Format_7(::System::IFormatProvider* provider, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMAT_7_OFFSET))(provider, format, args);
		}

		static ::System::String* FormatHelper(::System::IFormatProvider* provider, ::System::String* format, ::System::ParamsArray args)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::System::String*, ::System::ParamsArray))((::PBYTE)hIl2Cpp + SYSTEM_STRING_FORMATHELPER_OFFSET))(provider, format, args);
		}

		static ::System::String* Copy(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COPY_OFFSET))(str);
		}

		static ::System::String* Concat(::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_OFFSET))(arg0);
		}

		static ::System::String* Concat_1(::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_1_OFFSET))(arg0, arg1);
		}

		static ::System::String* Concat_2(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_2_OFFSET))(arg0, arg1, arg2);
		}

		static ::System::String* Concat_3(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_3_OFFSET))(arg0, arg1, arg2, arg3);
		}

		static ::System::String* Concat_4(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_4_OFFSET))(args);
		}

		static ::System::String* Concat_6(::System::Collections::Generic::IEnumerable_1<::System::String*>* values)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_6_OFFSET))(values);
		}

		static ::System::String* Concat_7(::System::String* str0, ::System::String* str1)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_7_OFFSET))(str0, str1);
		}

		static ::System::String* Concat_8(::System::String* str0, ::System::String* str1, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_8_OFFSET))(str0, str1, str2);
		}

		static ::System::String* Concat_9(::System::String* str0, ::System::String* str1, ::System::String* str2, ::System::String* str3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_9_OFFSET))(str0, str1, str2, str3);
		}

		static ::System::String* ConcatArray(::Il2CppArray<::System::String*>* values, ::System::Int32 totalLength)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCATARRAY_OFFSET))(values, totalLength);
		}

		static ::System::String* Concat_10(::Il2CppArray<::System::String*>* values)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CONCAT_10_OFFSET))(values);
		}

		static ::System::String* Intern(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERN_OFFSET))(str);
		}

		static ::System::String* IsInterned(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISINTERNED_OFFSET))(str);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, type, provider);
		}

		::System::CharEnumerator* GetEnumerator()
		{
			return ((::System::CharEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Char>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_CHAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Void InternalCopy(::System::String* src, ::System::IntPtr dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALCOPY_OFFSET))(src, dest, len);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_GET_LENGTH_OFFSET))(this);
		}

		static ::System::Int32 CompareOrdinalUnchecked(::System::String* strA, ::System::Int32 indexA, ::System::Int32 lenA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 lenB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_COMPAREORDINALUNCHECKED_OFFSET))(strA, indexA, lenA, strB, indexB, lenB);
		}

		::System::Int32 IndexOf_8(::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOF_8_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 IndexOfUnchecked(::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFUNCHECKED_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 IndexOfUnchecked_1(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFUNCHECKED_1_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 IndexOfAny_2(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANY_2_OFFSET))(this, anyOf, startIndex, count);
		}

		::System::Int32 IndexOfAnyUnchecked(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INDEXOFANYUNCHECKED_OFFSET))(this, anyOf, startIndex, count);
		}

		::System::Int32 LastIndexOf_8(::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOF_8_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 LastIndexOfUnchecked(::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFUNCHECKED_OFFSET))(this, value, startIndex, count);
		}

		::System::Int32 LastIndexOfAny_2(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANY_2_OFFSET))(this, anyOf, startIndex, count);
		}

		::System::Int32 LastIndexOfAnyUnchecked(::Il2CppArray<::System::Char>* anyOf, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_LASTINDEXOFANYUNCHECKED_OFFSET))(this, anyOf, startIndex, count);
		}

		static ::System::Int32 nativeCompareOrdinalEx(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_NATIVECOMPAREORDINALEX_OFFSET))(strA, indexA, strB, indexB, count);
		}

		::System::String* ReplaceInternal(::System::Char oldChar, ::System::Char newChar)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEINTERNAL_OFFSET))(this, oldChar, newChar);
		}

		::System::String* ReplaceInternal_1(::System::String* oldValue, ::System::String* newValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEINTERNAL_1_OFFSET))(this, oldValue, newValue);
		}

		::System::String* ReplaceUnchecked(::System::String* oldValue, ::System::String* newValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEUNCHECKED_OFFSET))(this, oldValue, newValue);
		}

		::System::String* ReplaceFallback(::System::String* oldValue, ::System::String* newValue, ::System::Int32 testedCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_REPLACEFALLBACK_OFFSET))(this, oldValue, newValue, testedCount);
		}

		::System::String* PadHelper(::System::Int32 totalWidth, ::System::Char paddingChar, ::System::Boolean isRightPadded)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_STRING_PADHELPER_OFFSET))(this, totalWidth, paddingChar, isRightPadded);
		}

		::System::Boolean StartsWithOrdinalUnchecked(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_STARTSWITHORDINALUNCHECKED_OFFSET))(this, value);
		}

		::System::Boolean IsAscii()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISASCII_OFFSET))(this);
		}

		::System::Boolean IsFastSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_ISFASTSORT_OFFSET))(this);
		}

		static ::System::String* InternalIsInterned(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALISINTERNED_OFFSET))(str);
		}

		static ::System::String* InternalIntern(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_INTERNALINTERN_OFFSET))(str);
		}

		static ::System::Void CharCopy(::PVOID dest, ::PVOID src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CHARCOPY_OFFSET))(dest, src, count);
		}

		static ::System::Void memset(::PVOID dest, ::System::Int32 val, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMSET_OFFSET))(dest, val, len);
		}

		static ::System::Void memcpy(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_OFFSET))(dest, src, size);
		}

		static ::System::Void bzero(::PVOID dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_OFFSET))(dest, len);
		}

		static ::System::Void bzero_aligned_1(::PVOID dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_1_OFFSET))(dest, len);
		}

		static ::System::Void bzero_aligned_2(::PVOID dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_2_OFFSET))(dest, len);
		}

		static ::System::Void bzero_aligned_4(::PVOID dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_4_OFFSET))(dest, len);
		}

		static ::System::Void bzero_aligned_8(::PVOID dest, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_BZERO_ALIGNED_8_OFFSET))(dest, len);
		}

		static ::System::Void memcpy_aligned_1(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_1_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy_aligned_2(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_2_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy_aligned_4(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_4_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy_aligned_8(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_MEMCPY_ALIGNED_8_OFFSET))(dest, src, size);
		}

		::System::String* CreateString(::PVOID value)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_OFFSET))(this, value);
		}

		::System::String* CreateString_1(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_1_OFFSET))(this, value, startIndex, length);
		}

		::System::String* CreateString_2(::PVOID value)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_2_OFFSET))(this, value);
		}

		::System::String* CreateString_3(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_3_OFFSET))(this, value, startIndex, length);
		}

		::System::String* CreateString_4(::Il2CppArray<::System::Char>* val, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_4_OFFSET))(this, val, startIndex, length);
		}

		::System::String* CreateString_5(::Il2CppArray<::System::Char>* val)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_5_OFFSET))(this, val);
		}

		::System::String* CreateString_6(::System::Char c, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_6_OFFSET))(this, c, count);
		}

		::System::String* CreateString_7(::PVOID value, ::System::Int32 startIndex, ::System::Int32 length, ::System::Text::Encoding* enc)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_STRING_CREATESTRING_7_OFFSET))(this, value, startIndex, length, enc);
		}
	};
}
