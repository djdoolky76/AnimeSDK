#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define AEJGPNCJHBG_HNGFPDPJFDM_PPFIPGKLCIJ_OFFSET UNITYSDK_OFFSET(0x12CE3AC0)
#define AEJGPNCJHBG_HNGFPDPJFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE3AB0)

inline static constexpr unsigned int AEJGPNCJHBG_HNGFPDPJFDM_TypeDefinitionIndex = 75488;

class AEJGPNCJHBG_HNGFPDPJFDM : public ::System::Object
{
public:
	::HFIAMAJCAOA ENENKLJGHDK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_HNGFPDPJFDM__CTOR_OFFSET))(this);
	}

	::System::Boolean PPFIPGKLCIJ(::PNIHGNDLMIN* DDKDEEBCLEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_HNGFPDPJFDM_PPFIPGKLCIJ_OFFSET))(this, DDKDEEBCLEB);
	}
};
