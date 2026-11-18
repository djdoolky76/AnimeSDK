#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_COMMANDBUILDER_SCOPECOLOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandBuilder_ScopeColor_TypeDefinitionIndex = 37209;

	struct alignas(4) CommandBuilder_ScopeColor
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_SCOPECOLOR_DISPOSE_OFFSET))(this);
		}
	};
}
