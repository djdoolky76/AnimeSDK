#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAOKPCCINAI_JOCDBEHAFEN_OFFSET UNITYSDK_OFFSET(0x14239D10)

inline static constexpr unsigned int BAOKPCCINAI_TypeDefinitionIndex = 41270;

class BAOKPCCINAI : public ::System::Object
{
public:
	static ::System::Boolean JOCDBEHAFEN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BAOKPCCINAI_JOCDBEHAFEN_OFFSET))();
	}
};
