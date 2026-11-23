#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6_B7B52F05F07C0B43_OFFSET UNITYSDK_OFFSET(0x40CF870)
#define TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6_FF1E152BDE593370_OFFSET UNITYSDK_OFFSET(0x40CF850)
#define TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40CF920)
#define TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontFeatureTable_F5628F8349D4A8A6_TypeDefinitionIndex = 18252;

	class TMP_FontFeatureTable_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TMPro::TMP_FontFeatureTable_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TMPro::TMP_FontFeatureTable_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>** StaticGet_B61CC0AF0D30B87F()
		{
			return (::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>** StaticGet_FFC327E46B669B8C()
		{
			return (::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_FontFeatureTable_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 FF1E152BDE593370(::TMPro::TMP_GlyphPairAdjustmentRecord* B9AEC57275825552)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6_FF1E152BDE593370_OFFSET))(this, B9AEC57275825552);
		}

		::System::UInt32 B7B52F05F07C0B43(::TMPro::TMP_GlyphPairAdjustmentRecord* B9AEC57275825552)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::TMP_GlyphPairAdjustmentRecord*))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_F5628F8349D4A8A6_B7B52F05F07C0B43_OFFSET))(this, B9AEC57275825552);
		}
	};
}
