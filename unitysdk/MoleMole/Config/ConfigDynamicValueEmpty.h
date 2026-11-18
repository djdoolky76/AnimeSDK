#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16532790)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x16532830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueEmpty_TypeDefinitionIndex = 83482;

	class ConfigDynamicValueEmpty : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY_TOUNIONVALUE_OFFSET))(this);
		}
	};
}
