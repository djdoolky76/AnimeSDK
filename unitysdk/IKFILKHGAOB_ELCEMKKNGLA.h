#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFILKHGAOB_BNCIJLACFPI;

#define IKFILKHGAOB_ELCEMKKNGLA_IFEDAKFMFFK_OFFSET UNITYSDK_OFFSET(0x153B1620)
#define IKFILKHGAOB_ELCEMKKNGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x153B1610)

inline static constexpr unsigned int IKFILKHGAOB_ELCEMKKNGLA_TypeDefinitionIndex = 92372;

class IKFILKHGAOB_ELCEMKKNGLA : public ::System::Object
{
public:
	::System::Int32 INPIMGKMMON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFILKHGAOB_ELCEMKKNGLA__CTOR_OFFSET))(this);
	}

	::System::Boolean IFEDAKFMFFK(::IKFILKHGAOB_BNCIJLACFPI* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKFILKHGAOB_BNCIJLACFPI*))((::PBYTE)hIl2Cpp + IKFILKHGAOB_ELCEMKKNGLA_IFEDAKFMFFK_OFFSET))(this, IPMMCGDMODG);
	}
};
