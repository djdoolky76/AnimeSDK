#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }
namespace Mono::Globalization::Unicode { class Contraction; }
namespace Mono::Globalization::Unicode { class Level2Map; }
namespace Mono::Globalization::Unicode { class TailoringInfo; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET UNITYSDK_OFFSET(0x1CC0F4B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1CC0FD90)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET UNITYSDK_OFFSET(0x1CC10BA0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET UNITYSDK_OFFSET(0x1CC10A90)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x1CC105D0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET UNITYSDK_OFFSET(0x1CC0F450)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET UNITYSDK_OFFSET(0x1CC10490)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET UNITYSDK_OFFSET(0x1CC104F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET UNITYSDK_OFFSET(0x1CC10500)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET UNITYSDK_OFFSET(0x1CC102E0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_1_OFFSET UNITYSDK_OFFSET(0x1CC10210)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x1CC10150)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET UNITYSDK_OFFSET(0x1CC10510)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISSORTABLE_1_OFFSET UNITYSDK_OFFSET(0x1CC10040)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISSORTABLE_OFFSET UNITYSDK_OFFSET(0x1CC0FF90)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET UNITYSDK_OFFSET(0x1CC0FE10)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET UNITYSDK_OFFSET(0x1CC0FE90)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET UNITYSDK_OFFSET(0x1CC0FF10)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET UNITYSDK_OFFSET(0x1CC0FBF0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1CC10380)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET UNITYSDK_OFFSET(0x1CC10390)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET UNITYSDK_OFFSET(0x1CC10650)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC10680)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC10FB0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable_TypeDefinitionIndex = 38;

	class MSCompatUnicodeTable : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0xEA0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_tailoringArr()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0xEA8);
		}
		static ::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>** StaticGet_tailoringInfos()
		{
			return (::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0xEB0);
		}
		static ::System::Int32* StaticGet_MaxExpansionLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x400);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x404);
		}
		static ::PVOID* StaticGet_cjkCHSlv1()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x408);
		}
		static ::PVOID* StaticGet_cjkCHTlv1()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::PVOID* StaticGet_cjkKOcategory()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x418);
		}
		static ::PVOID* StaticGet_cjkJAcategory()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x420);
		}
		static ::PVOID* StaticGet_cjkCHTcategory()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x428);
		}
		static ::PVOID* StaticGet_cjkKOlv2()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x430);
		}
		static ::PVOID* StaticGet_cjkKOlv1()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x438);
		}
		static ::PVOID* StaticGet_level2()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x440);
		}
		static ::PVOID* StaticGet_cjkCHScategory()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x448);
		}
		static ::PVOID* StaticGet_level3()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x450);
		}
		static ::PVOID* StaticGet_categories()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x458);
		}
		static ::PVOID* StaticGet_cjkJAlv1()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x460);
		}
		static ::PVOID* StaticGet_level1()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x468);
		}
		static ::PVOID* StaticGet_ignorableFlags()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CTOR_OFFSET))(this);
		}

		static ::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(::System::Int32 lcid)
		{
			return ((::Mono::Globalization::Unicode::TailoringInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET))(lcid);
		}

		static ::System::Void BuildTailoringTables(::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::TailoringInfo* t, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*& contractions, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*& diacriticals)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*&, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET))(culture, t, contractions, diacriticals);
		}

		static ::System::Void SetCJKReferences(::System::String* name, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::PVOID& catTable, ::PVOID& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, ::PVOID& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&, ::PVOID&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET))(name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
		}

		static ::System::Byte Category(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET))(cp);
		}

		static ::System::Byte Level1(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET))(cp);
		}

		static ::System::Byte Level2(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET))(cp);
		}

		static ::System::Byte Level3(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET))(cp);
		}

		static ::System::Boolean IsSortable(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISSORTABLE_OFFSET))(s);
		}

		static ::System::Boolean IsSortable_1(::System::Int32 cp)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISSORTABLE_1_OFFSET))(cp);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 cp)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET))(cp);
		}

		static ::System::Boolean IsIgnorable_1(::System::Int32 cp, ::System::Byte flag)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_1_OFFSET))(cp, flag);
		}

		static ::System::Boolean IsIgnorableNonSpacing(::System::Int32 cp)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET))(cp);
		}

		static ::System::Int32 ToKanaTypeInsensitive(::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET))(i);
		}

		static ::System::Int32 ToWidthCompat(::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET))(i);
		}

		static ::System::Boolean HasSpecialWeight(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET))(c);
		}

		static ::System::Boolean IsHalfWidthKana(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET))(c);
		}

		static ::System::Boolean IsHiragana(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET))(c);
		}

		static ::System::Boolean IsJapaneseSmallLetter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET))(c);
		}

		static ::System::IntPtr GetResource(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET))(name);
		}

		static ::System::UInt32 UInt32FromBytePtr(::PVOID raw, ::System::UInt32 idx)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET))(raw, idx);
		}

		static ::System::Void FillCJK(::System::String* culture, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::PVOID& catTable, ::PVOID& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, ::PVOID& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&, ::PVOID&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET))(culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
		}

		static ::System::Void FillCJKCore(::System::String* culture, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::PVOID& catTable, ::PVOID& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkLv2Indexer, ::PVOID& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&, ::PVOID&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::PVOID&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET))(culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table);
		}
	};
}
