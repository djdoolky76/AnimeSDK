#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFashionStorePreviewPanelWidgetController_NotePlayHelper.h"
#include "unitysdk/System/ValueTuple_2.h"

class KOGPMKOGCLC;
class PONBOHIGCJP_BFFFPJAMKMJ;
class PONBOHIGCJP_CNBLLJPHHGB;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x1AFF4BF0)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1AFF4CA0)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF4BE0)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1AFF53F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreEditPanelWidgetController_NotePlayHelper_TypeDefinitionIndex = 83748;

	class UIFashionStoreEditPanelWidgetController_NotePlayHelper : public ::MoleMole::UIFashionStorePreviewPanelWidgetController_NotePlayHelper
	{
	public:
		::PONBOHIGCJP_BFFFPJAMKMJ* _trackData; // 0x50
		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* _musicRowData; // 0x58

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::PONBOHIGCJP_CNBLLJPHHGB* fashionStoreData, ::PONBOHIGCJP_BFFFPJAMKMJ* fashionStoreTrackData, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* musicRowData, ::JIOLFCAGOFH_1<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_CNBLLJPHHGB*, ::PONBOHIGCJP_BFFFPJAMKMJ*, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET))(this, fashionStoreData, fashionStoreTrackData, musicRowData, isShow);
		}

		::System::Void PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> startNoteIndex, ::System::ValueTuple_2<::System::Int32, ::System::Int32> endNoteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET))(this, startNoteIndex, endNoteIndex);
		}

		::System::Void __base_PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> P0, ::System::ValueTuple_2<::System::Int32, ::System::Int32> P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET))(this, P0, P1);
		}
	};
}
