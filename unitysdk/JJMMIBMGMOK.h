#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJMMIBMGMOK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15582480)

inline static constexpr unsigned int JJMMIBMGMOK_TypeDefinitionIndex = 71022;

class JJMMIBMGMOK : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJMMIBMGMOK__CCTOR_OFFSET))();
	}
};
