#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Globalization::Unicode { class CodePointIndexer; }
namespace Mono::Globalization::Unicode { class TailoringInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET UNITYSDK_OFFSET(0x1D1DF600)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D1DFEF0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E0630)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET UNITYSDK_OFFSET(0x1D1E0AD0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET UNITYSDK_OFFSET(0x1D1E09C0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x1D1E05A0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET UNITYSDK_OFFSET(0x1D1DF5A0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1D1E0590)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D1E0450)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET UNITYSDK_OFFSET(0x1D1E04B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET UNITYSDK_OFFSET(0x1D1E04C0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET UNITYSDK_OFFSET(0x1D1E0230)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x1D1E00F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET UNITYSDK_OFFSET(0x1D1E04D0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET UNITYSDK_OFFSET(0x1D1DFF70)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET UNITYSDK_OFFSET(0x1D1DFFF0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET UNITYSDK_OFFSET(0x1D1E0070)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET UNITYSDK_OFFSET(0x1D1DFD90)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1D1E02D0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET UNITYSDK_OFFSET(0x1D1E02E0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET UNITYSDK_OFFSET(0x1D1E0600)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable_TypeDefinitionIndex = 35;

	class MSCompatUnicodeTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>** StaticGet_tailoringInfos()
		{
			return (::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0x9E60);
		}

		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0x9E68);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_tailoringArr()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0x9E70);
		}

		static ::PVOID* StaticGet_cjkCHTlv1()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC30);
		}

		static ::PVOID* StaticGet_level1()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC38);
		}

		static ::PVOID* StaticGet_categories()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC40);
		}

		static ::PVOID* StaticGet_level3()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC48);
		}

		static ::PVOID* StaticGet_cjkKOlv1()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC50);
		}

		static ::PVOID* StaticGet_cjkCHScategory()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC58);
		}

		static ::PVOID* StaticGet_cjkCHTcategory()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC60);
		}

		static ::PVOID* StaticGet_level2()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC68);
		}

		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC70);
		}

		static ::System::Int32* StaticGet_MaxExpansionLength()
		{
			return (::System::Int32*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC74);
		}

		static ::PVOID* StaticGet_ignorableFlags()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC78);
		}

		static ::PVOID* StaticGet_cjkJAlv1()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC80);
		}

		static ::PVOID* StaticGet_cjkKOcategory()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC88);
		}

		static ::PVOID* StaticGet_cjkCHSlv1()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC90);
		}

		static ::PVOID* StaticGet_cjkJAcategory()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xC98);
		}

		static ::PVOID* StaticGet_cjkKOlv2()
		{
			return (::PVOID*)UnitySDK::FromName("Mono.Globalization.Unicode", "MSCompatUnicodeTable")->GetStaticField(0xCA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CCTOR_OFFSET))();
		}

		static ::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(::System::Int32 a1)
		{
			return ((::Mono::Globalization::Unicode::TailoringInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET))(a1);
		}

		static ::System::Void BuildTailoringTables(::System::Globalization::CultureInfo* a1, ::Mono::Globalization::Unicode::TailoringInfo* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCJKReferences(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer* a2, ::System::Object* a3, ::System::Object* a4, ::Mono::Globalization::Unicode::CodePointIndexer* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*, ::System::Object*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Byte Category(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET))(a1);
		}

		static ::System::Byte Level1(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET))(a1);
		}

		static ::System::Byte Level2(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET))(a1);
		}

		static ::System::Byte Level3(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET))(a1);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsIgnorableNonSpacing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET))(a1);
		}

		static ::System::Int32 ToKanaTypeInsensitive(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET))(a1);
		}

		static ::System::Int32 ToWidthCompat(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET))(a1);
		}

		static ::System::Boolean HasSpecialWeight(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET))(a1);
		}

		static ::System::Boolean IsHalfWidthKana(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET))(a1);
		}

		static ::System::Boolean IsHiragana(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET))(a1);
		}

		static ::System::Boolean IsJapaneseSmallLetter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET))(a1);
		}

		static ::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET))();
		}

		static ::System::IntPtr GetResource(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET))(a1);
		}

		static ::System::UInt32 UInt32FromBytePtr(::PVOID a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET))(a1, a2);
		}

		static ::System::Void FillCJK(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer* a2, ::System::Object* a3, ::System::Object* a4, ::Mono::Globalization::Unicode::CodePointIndexer* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*, ::System::Object*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FillCJKCore(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer* a2, ::System::Object* a3, ::System::Object* a4, ::Mono::Globalization::Unicode::CodePointIndexer* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*, ::System::Object*, ::Mono::Globalization::Unicode::CodePointIndexer*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
}
