#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ACNNENAMNEP.h"

#define NMBKAFCOPCP_HJNEFOKBAGG_OFFSET UNITYSDK_OFFSET(0xE0A9990)

inline static constexpr unsigned int NMBKAFCOPCP_TypeDefinitionIndex = 64939;

class NMBKAFCOPCP : public ::System::Object
{
public:
	static ::ACNNENAMNEP HJNEFOKBAGG()
	{
		return ((::ACNNENAMNEP(*)())((::PBYTE)hIl2Cpp + NMBKAFCOPCP_HJNEFOKBAGG_OFFSET))();
	}
};
