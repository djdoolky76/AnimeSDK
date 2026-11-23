#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/LigatureSubstitutionRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/MarkToBaseAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/MarkToMarkAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/MultipleSubstitutionRecord.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x4206B50)
#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTMARKTOBASEADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x4206D80)
#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTMARKTOMARKADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0x4206FB0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x42071E0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontFeatureTable_TypeDefinitionIndex = 18765;

	class FontFeatureTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MultipleSubstitutionRecord>* m_MultipleSubstitutionRecords; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>* m_LigatureSubstitutionRecords; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecords; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecords; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecords; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>* m_LigatureSubstitutionRecordLookup; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecordLookup; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>* m_MarkToBaseAdjustmentRecordLookup; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>* m_MarkToMarkAdjustmentRecordLookup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE__CTOR_OFFSET))(this);
		}

		::System::Void SortGlyphPairAdjustmentRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(this);
		}

		::System::Void SortMarkToBaseAdjustmentRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTMARKTOBASEADJUSTMENTRECORDS_OFFSET))(this);
		}

		::System::Void SortMarkToMarkAdjustmentRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTMARKTOMARKADJUSTMENTRECORDS_OFFSET))(this);
		}
	};
}
