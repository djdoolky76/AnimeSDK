#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NHMIHLBFHHA_PDBHNONJICP_OFFSET UNITYSDK_OFFSET(0x1314C6D0)

inline static constexpr unsigned int NHMIHLBFHHA_TypeDefinitionIndex = 80365;

class NHMIHLBFHHA : public ::System::Object
{
public:
	static ::System::Boolean PDBHNONJICP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHMIHLBFHHA_PDBHNONJICP_OFFSET))();
	}
};
