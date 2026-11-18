#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/LoginSettingShowState.h"
#include "unitysdk/System/Object.h"

class MDCMEPJLGOK;
namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x13EEA980)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_IGNORERESETSETTING_OFFSET UNITYSDK_OFFSET(0x13F15380)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13F15360)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x13F15350)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SHOWGENERALDETAILDIALOGID_OFFSET UNITYSDK_OFFSET(0x13F15390)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x13F15370)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISLOGINSETTINGENABLED_OFFSET UNITYSDK_OFFSET(0x13F15770)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x13F153A0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFO_OFFSET UNITYSDK_OFFSET(0x13F154F0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIIGNORELOGIN_OFFSET UNITYSDK_OFFSET(0x13F15640)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13EED940)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x13F156A0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x13F153F0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFO_OFFSET UNITYSDK_OFFSET(0x13F15590)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F15850)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingEntryBase_TypeDefinitionIndex = 53054;

	class SystemSettingEntryBase : public ::System::Object
	{
	public:
		::System::String* TitleTextCode; // 0x10
		::System::String* EnTitleTextCode; // 0x18
		::System::Int32 VersionCode; // 0x20
		::MoleMole::LoginSettingShowState LoginSettingShowStateOnUI; // 0x24
		::System::Int32 HintVersion; // 0x28
		::System::Boolean HideOnUI; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE__CTOR_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreResetSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_IGNORERESETSETTING_OFFSET))(this);
		}

		::System::Int32 get_ShowGeneralDetailDialogID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SHOWGENERALDETAILDIALOGID_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean IsShowDetailInfoInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFOINNER_OFFSET))(this);
		}

		::System::Void OpenDetailInfoInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFOINNER_OFFSET))(this);
		}

		::System::Boolean IsShowDetailInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFO_OFFSET))(this);
		}

		::System::Void OpenDetailInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFO_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIIgnoreLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIIGNORELOGIN_OFFSET))(this);
		}

		::System::Boolean IsShowOnUI(::MoleMole::ESystemSettingType systemSettingType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUI_OFFSET))(this, systemSettingType);
		}

		::System::Boolean IsLoginSettingEnabled(::MoleMole::ESystemSettingType systemSettingType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISLOGINSETTINGENABLED_OFFSET))(this, systemSettingType);
		}
	};
}
