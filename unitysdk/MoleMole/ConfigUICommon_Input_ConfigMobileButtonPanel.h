#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x190C5DD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ConfigMobileButtonPanel_TypeDefinitionIndex = 84700;

	class ConfigUICommon_Input_ConfigMobileButtonPanel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Positions; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* Buttons; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONPANEL__CTOR_OFFSET))(this);
		}
	};
}
