#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class CFNEOJHAEOM;
class PABFKMAGGMB;

#define PABFKMAGGMB_CIEGBLMHLNP_MKMJDHLMHKI_OFFSET UNITYSDK_OFFSET(0x13A802D0)
#define PABFKMAGGMB_CIEGBLMHLNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A802C0)

inline static constexpr unsigned int PABFKMAGGMB_CIEGBLMHLNP_TypeDefinitionIndex = 87640;

class PABFKMAGGMB_CIEGBLMHLNP : public ::System::Object
{
public:
	::PABFKMAGGMB* KLHPEBKNIFB; // 0x10
	::ALDOKCCIFNB* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABFKMAGGMB_CIEGBLMHLNP__CTOR_OFFSET))(this);
	}

	::System::Void MKMJDHLMHKI(::System::Boolean EBFCACIEKBC, ::CFNEOJHAEOM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CFNEOJHAEOM*))((::PBYTE)hIl2Cpp + PABFKMAGGMB_CIEGBLMHLNP_MKMJDHLMHKI_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
