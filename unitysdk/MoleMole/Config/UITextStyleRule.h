#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/UITextStyleMatchCondition.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_UITEXTSTYLERULE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1C6F4B30)
#define MOLEMOLE_CONFIG_UITEXTSTYLERULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6F4AC0)
#define MOLEMOLE_CONFIG_UITEXTSTYLERULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITextStyleRule_TypeDefinitionIndex = 43643;

	class UITextStyleRule : public ::System::Object
	{
	public:
		::System::String* ruleId; // 0x10
		::System::String* displayName; // 0x18
		::System::Boolean enabled; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 priority; // 0x24
		::MoleMole::Config::UITextStyleMatchCondition condition; // 0x28
		::System::String* templateId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLERULE__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLERULE_TOSTRING_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLERULE_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
