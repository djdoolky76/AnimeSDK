#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPinballOptionsWidgetController_Data_AbilityDescType.h"
#include "unitysdk/MoleMole/UIPinballOptionsWidgetController_Data_DescDisplayMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/IGAONHGMLLA_GHADLBFMNFK.h"
#include "unitysdk/MoleMole/UIPinballOptionsWidgetController_Data_DescPanelData.h"

class GKEIFMNNDEE;
namespace System { class String; }

#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATEAPPLIEDBUFF_OFFSET UNITYSDK_OFFSET(0x147EBCA0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATEDESCPANELDATA_OFFSET UNITYSDK_OFFSET(0x147EBD40)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATESELECTABLEOPTION_OFFSET UNITYSDK_OFFSET(0x147EBC00)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GETDESCPANELDATA_OFFSET UNITYSDK_OFFSET(0x147EB970)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_DESCPANEL1_OFFSET UNITYSDK_OFFSET(0x147EB940)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_DESCPANEL2_OFFSET UNITYSDK_OFFSET(0x147EBAD0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x147EB7E0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_NAMETEXTKEY_OFFSET UNITYSDK_OFFSET(0x147EB860)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_SHOWTALENTLABEL_OFFSET UNITYSDK_OFFSET(0x147EBB70)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_TAGTEXTKEY_OFFSET UNITYSDK_OFFSET(0x147EB8D0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x147EB690)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_USETALENTSTYLE_OFFSET UNITYSDK_OFFSET(0x147EBB10)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x147EBBE0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147EBBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballOptionsWidgetController_Data_TypeDefinitionIndex = 72430;

	class UIPinballOptionsWidgetController_Data : public ::System::Object
	{
	public:
		// static const ::System::Int32 GeneralOptionType = 0x1; // 0x0
		// static const ::System::String* PassiveTitleTextKey; // 0x0
		// static const ::System::String* TalentTitleTextKey; // 0x0
		::GKEIFMNNDEE* _template; // 0x10
		::System::Int32 BallId; // 0x18
		::MoleMole::UIPinballOptionsWidgetController_Data_DescDisplayMode DisplayMode; // 0x1C
		::System::Boolean ShowSelect; // 0x20
		::System::Boolean CanApply; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 AppliedCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGAONHGMLLA_GHADLBFMNFK snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA__CTOR_1_OFFSET))(this, snapshot);
		}

		::GKEIFMNNDEE* get_Template()
		{
			return ((::GKEIFMNNDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_TEMPLATE_OFFSET))(this);
		}

		::Foundation::AssetPath get_IconPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_NameTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_NAMETEXTKEY_OFFSET))(this);
		}

		::System::String* get_TagTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_TAGTEXTKEY_OFFSET))(this);
		}

		::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData get_DescPanel1()
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_DESCPANEL1_OFFSET))(this);
		}

		::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData get_DescPanel2()
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_DESCPANEL2_OFFSET))(this);
		}

		::System::Boolean get_UseTalentStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_USETALENTSTYLE_OFFSET))(this);
		}

		::System::Boolean get_ShowTalentLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GET_SHOWTALENTLABEL_OFFSET))(this);
		}

		static ::MoleMole::UIPinballOptionsWidgetController_Data* CreateSelectableOption(::IGAONHGMLLA_GHADLBFMNFK snapshot)
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data*(*)(::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATESELECTABLEOPTION_OFFSET))(snapshot);
		}

		static ::MoleMole::UIPinballOptionsWidgetController_Data* CreateAppliedBuff(::IGAONHGMLLA_GHADLBFMNFK snapshot)
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data*(*)(::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATEAPPLIEDBUFF_OFFSET))(snapshot);
		}

		::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData GetDescPanelData(::System::Int32 panelIndex)
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_GETDESCPANELDATA_OFFSET))(this, panelIndex);
		}

		::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData CreateDescPanelData(::MoleMole::UIPinballOptionsWidgetController_Data_AbilityDescType descType, ::System::Boolean isLocked, ::System::Boolean showNew)
		{
			return ((::MoleMole::UIPinballOptionsWidgetController_Data_DescPanelData(*)(::PVOID, ::MoleMole::UIPinballOptionsWidgetController_Data_AbilityDescType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_DATA_CREATEDESCPANELDATA_OFFSET))(this, descType, isLocked, showNew);
		}
	};
}
