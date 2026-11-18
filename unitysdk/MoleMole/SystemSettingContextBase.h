#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0x1C0BFCA0)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET UNITYSDK_OFFSET(0x1C0BFC60)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x1C0BFBC0)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x1C0BFC00)
#define MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BEC70)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingContextBase_TypeDefinitionIndex = 80191;

	class SystemSettingContextBase : public ::System::Object
	{
	public:
		::System::String* OptionText; // 0x10
		::System::String* OptionTextCode; // 0x18
		::System::Boolean HideOnUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsShowOnUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_ISSHOWONUI_OFFSET))(this);
		}

		::System::String* GetOverrideOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOVERRIDEOPTIONTEXTKEY_OFFSET))(this);
		}

		::System::String* GetOptionTextKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGCONTEXTBASE_GETOPTIONTEXTKEY_OFFSET))(this);
		}
	};
}
