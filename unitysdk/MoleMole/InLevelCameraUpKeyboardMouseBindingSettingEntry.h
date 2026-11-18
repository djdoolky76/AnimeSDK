#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET UNITYSDK_OFFSET(0x1246A2D0)
#define MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x1246A2F0)
#define MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1246A2C0)
#define MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1246A2E0)
#define MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1246A380)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelCameraUpKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 89975;

	class InLevelCameraUpKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_CanBeAllUnbind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AIOFAMODPOO>* get_LockedSettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::AIOFAMODPOO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCAMERAUPKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_LOCKEDSETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
