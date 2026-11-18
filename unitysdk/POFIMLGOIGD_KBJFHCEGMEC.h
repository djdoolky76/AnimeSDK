#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMBPEPDJNAN;
class HGAJKHIMKJP;

#define POFIMLGOIGD_KBJFHCEGMEC_BMFDMKJBCJB_OFFSET UNITYSDK_OFFSET(0x1D638B60)
#define POFIMLGOIGD_KBJFHCEGMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D638B50)

inline static constexpr unsigned int POFIMLGOIGD_KBJFHCEGMEC_TypeDefinitionIndex = 57464;

class POFIMLGOIGD_KBJFHCEGMEC : public ::System::Object
{
public:
	::FMBPEPDJNAN* ECFDJBIBOEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KBJFHCEGMEC__CTOR_OFFSET))(this);
	}

	::System::Boolean BMFDMKJBCJB(::HGAJKHIMKJP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KBJFHCEGMEC_BMFDMKJBCJB_OFFSET))(this, HAAEBCOBKFF);
	}
};
