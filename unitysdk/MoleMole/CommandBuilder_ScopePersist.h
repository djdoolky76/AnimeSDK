#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_COMMANDBUILDER_SCOPEPERSIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandBuilder_ScopePersist_TypeDefinitionIndex = 37210;

	struct alignas(4) CommandBuilder_ScopePersist
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_SCOPEPERSIST_DISPOSE_OFFSET))(this);
		}
	};
}
