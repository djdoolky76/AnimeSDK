#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/UITextStyleParams.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x19261C80)
#define MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19261C10)
#define MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19261C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITextStyleTemplate_TypeDefinitionIndex = 42038;

	class UITextStyleTemplate : public ::System::Object
	{
	public:
		::System::String* templateId; // 0x10
		::System::String* displayName; // 0x18
		::MoleMole::Config::UITextStyleParams parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE_TOSTRING_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLETEMPLATE_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
