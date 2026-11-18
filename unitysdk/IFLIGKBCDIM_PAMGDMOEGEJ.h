#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFLIGKBCDIM_DHEBMJNGHEK;
class MHODHAMHFDF;

#define IFLIGKBCDIM_PAMGDMOEGEJ_JGLDKJIALFK_OFFSET UNITYSDK_OFFSET(0x1B7CC780)
#define IFLIGKBCDIM_PAMGDMOEGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CC770)

inline static constexpr unsigned int IFLIGKBCDIM_PAMGDMOEGEJ_TypeDefinitionIndex = 12055;

class IFLIGKBCDIM_PAMGDMOEGEJ : public ::System::Object
{
public:
	::IFLIGKBCDIM_DHEBMJNGHEK* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_PAMGDMOEGEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JGLDKJIALFK(::MHODHAMHFDF* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MHODHAMHFDF*))((::PBYTE)hIl2Cpp + IFLIGKBCDIM_PAMGDMOEGEJ_JGLDKJIALFK_OFFSET))(this, HAAEBCOBKFF);
	}
};
