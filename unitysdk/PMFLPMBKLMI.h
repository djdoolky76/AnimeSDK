#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMKPJHFHLLM.h"
#include "unitysdk/System/Object.h"

#define PMFLPMBKLMI_PHKCOCNFLBL_OFFSET UNITYSDK_OFFSET(0x1C695250)

inline static constexpr unsigned int PMFLPMBKLMI_TypeDefinitionIndex = 63851;

class PMFLPMBKLMI : public ::System::Object
{
public:
	static ::System::Boolean PHKCOCNFLBL(::DMKPJHFHLLM FCPCLIJNDLA, ::DMKPJHFHLLM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::DMKPJHFHLLM, ::DMKPJHFHLLM))((::PBYTE)hIl2Cpp + PMFLPMBKLMI_PHKCOCNFLBL_OFFSET))(FCPCLIJNDLA, LIBPKNHDIGP);
	}
};
