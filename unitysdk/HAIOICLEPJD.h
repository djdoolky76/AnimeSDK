#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MACLIDNIBBE;

#define HAIOICLEPJD_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1EA2C530)

inline static constexpr unsigned int HAIOICLEPJD_TypeDefinitionIndex = 8227;

class HAIOICLEPJD : public ::System::Object
{
public:
	static ::MACLIDNIBBE* PKOGNPKCHHE()
	{
		return ((::MACLIDNIBBE*(*)())((::PBYTE)hIl2Cpp + HAIOICLEPJD_PKOGNPKCHHE_OFFSET))();
	}
};
