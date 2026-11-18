#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDBKJDMNFII.h"

class DENBPLEJLAJ;
class IANDOOLAALI;

#define AMOJKJHMCDC_MEMHPKNHEGK_OFFSET UNITYSDK_OFFSET(0x1820F400)
#define AMOJKJHMCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F3F0)

inline static constexpr unsigned int AMOJKJHMCDC_TypeDefinitionIndex = 66196;

class AMOJKJHMCDC : public ::BDBKJDMNFII
{
public:
	::System::Void _ctor(::DENBPLEJLAJ* MHEPAPJILHF)
	{
		return ((::System::Void(*)(::PVOID, ::DENBPLEJLAJ*))((::PBYTE)hIl2Cpp + AMOJKJHMCDC__CTOR_OFFSET))(this, MHEPAPJILHF);
	}

	::System::Boolean MEMHPKNHEGK(::IANDOOLAALI* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IANDOOLAALI*))((::PBYTE)hIl2Cpp + AMOJKJHMCDC_MEMHPKNHEGK_OFFSET))(this, NAPFALLANDL);
	}
};
