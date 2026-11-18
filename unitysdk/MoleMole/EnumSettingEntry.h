#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ENUMSETTINGENTRY_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x11900A50)
#define MOLEMOLE_ENUMSETTINGENTRY_GETSETTINGCONTEXTBYINDEX_OFFSET UNITYSDK_OFFSET(0x119009A0)
#define MOLEMOLE_ENUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x11900990)
#define MOLEMOLE_ENUMSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x11900980)
#define MOLEMOLE_ENUMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11900A90)

namespace MoleMole
{
	inline static constexpr unsigned int EnumSettingEntry_TypeDefinitionIndex = 77972;

	class EnumSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SystemSettingContextBase*>* SettingContextList; // 0x30
		::System::Int32 DefaultIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENUMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENUMSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET))(this);
		}

		::HKIPDKIIDOD get_SettingWidgetType()
		{
			return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::MoleMole::SystemSettingContextBase* GetSettingContextByIndex(::System::Int32 index)
		{
			return ((::MoleMole::SystemSettingContextBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENUMSETTINGENTRY_GETSETTINGCONTEXTBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENUMSETTINGENTRY_GETDEFAULTINDEX_OFFSET))(this);
		}
	};
}
