#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_DESCTEXTKEY_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x40C7D0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWDESC_OFFSET UNITYSDK_OFFSET(0x7D8BC0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWNEW_OFFSET UNITYSDK_OFFSET(0x7D8BB0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWTITLE_OFFSET UNITYSDK_OFFSET(0x60E920)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_TITLETEXTKEY_OFFSET UNITYSDK_OFFSET(0x282350)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x7C5B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballOptionsWidgetController_Data_DescPanelData_TypeDefinitionIndex = 72433;

	struct alignas(8) UIPinballOptionsWidgetController_Data_DescPanelData
	{
		::System::String* _TitleTextKey_k__BackingField; // 0x10
		::System::String* _DescTextKey_k__BackingField; // 0x18
		::System::Boolean _IsLocked_k__BackingField; // 0x20
		::System::Boolean _ShowNew_k__BackingField; // 0x21

		::System::Void _ctor(::System::String* titleTextKey, ::System::String* descTextKey, ::System::Boolean isLocked, ::System::Boolean showNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA__CTOR_OFFSET))(this, titleTextKey, descTextKey, isLocked, showNew);
		}

		::System::String* get_TitleTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_TITLETEXTKEY_OFFSET))(this);
		}

		::System::String* get_DescTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_DESCTEXTKEY_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_ShowNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWNEW_OFFSET))(this);
		}

		::System::Boolean get_ShowTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWTITLE_OFFSET))(this);
		}

		::System::Boolean get_ShowDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_DESCPANELDATA_GET_SHOWDESC_OFFSET))(this);
		}
	};
}
