#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PONBOHIGCJP_BFFFPJAMKMJ;
class PONBOHIGCJP_CNBLLJPHHGB;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_MUSICROWDATA_OFFSET UNITYSDK_OFFSET(0x1A3C6270)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_SOTREDATA_OFFSET UNITYSDK_OFFSET(0x1A3C6290)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_TRACKDATA_OFFSET UNITYSDK_OFFSET(0x1A3C62B0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_MUSICROWDATA_OFFSET UNITYSDK_OFFSET(0x1A3C6280)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_SOTREDATA_OFFSET UNITYSDK_OFFSET(0x1A3C62A0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_TRACKDATA_OFFSET UNITYSDK_OFFSET(0x1A3C62C0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3C62D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMusicRowWidgetController_Data_TypeDefinitionIndex = 56922;

	class UIFashionStoreMusicRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_2<::System::Object*, ::System::Object*>* OnClickEditTrackButtonCallback; // 0x10
		::System::Action_1<::System::Object*>* OnClickDeleteTrackButtonCallback; // 0x18
		::PONBOHIGCJP_BFFFPJAMKMJ* _TrackData_k__BackingField; // 0x20
		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* _MusicRowData_k__BackingField; // 0x28
		::System::Action_1<::System::Object*>* OnClickAddTrackButtonCallback; // 0x30
		::PONBOHIGCJP_CNBLLJPHHGB* _SotreData_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* get_MusicRowData()
		{
			return ((::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_MUSICROWDATA_OFFSET))(this);
		}

		::System::Void set_MusicRowData(::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_MUSICROWDATA_OFFSET))(this, value);
		}

		::PONBOHIGCJP_CNBLLJPHHGB* get_SotreData()
		{
			return ((::PONBOHIGCJP_CNBLLJPHHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_SOTREDATA_OFFSET))(this);
		}

		::System::Void set_SotreData(::PONBOHIGCJP_CNBLLJPHHGB* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_CNBLLJPHHGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_SOTREDATA_OFFSET))(this, value);
		}

		::PONBOHIGCJP_BFFFPJAMKMJ* get_TrackData()
		{
			return ((::PONBOHIGCJP_BFFFPJAMKMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_TRACKDATA_OFFSET))(this);
		}

		::System::Void set_TrackData(::PONBOHIGCJP_BFFFPJAMKMJ* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_BFFFPJAMKMJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_TRACKDATA_OFFSET))(this, value);
		}
	};
}
