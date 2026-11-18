#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITokenShowConfig; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOKENDIALOGCONFIG_CHDMEHBDMAP_OFFSET UNITYSDK_OFFSET(0x171909A0)
#define MOLEMOLE_UITOKENDIALOGCONFIG_ECMNCNMLPOD_OFFSET UNITYSDK_OFFSET(0x17190750)
#define MOLEMOLE_UITOKENDIALOGCONFIG_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0x171905D0)
#define MOLEMOLE_UITOKENDIALOGCONFIG_SET_UITYPE_OFFSET UNITYSDK_OFFSET(0x171906D0)
#define MOLEMOLE_UITOKENDIALOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17190740)

namespace MoleMole
{
	inline static constexpr unsigned int UITokenDialogConfig_TypeDefinitionIndex = 61685;

	class UITokenDialogConfig : public ::System::Object
	{
	public:
		::System::Type* _UIType; // 0x10
		::System::String* UIName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* TokenConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Type* get_UIType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_GET_UITYPE_OFFSET))(this);
		}

		::System::Void set_UIType(::System::Type* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_SET_UITYPE_OFFSET))(this, EGEGIMGMJHN);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>* ECMNCNMLPOD()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_ECMNCNMLPOD_OFFSET))(this);
		}

		::System::Void CHDMEHBDMAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_CHDMEHBDMAP_OFFSET))(this);
		}
	};
}
