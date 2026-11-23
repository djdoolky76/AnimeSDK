#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BA8476A4705F72FD;

#define B81597DDB454C981_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3C44070)
#define B81597DDB454C981__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int B81597DDB454C981_TypeDefinitionIndex = 11610;

class B81597DDB454C981 : public ::System::Object
{
public:
	::BA8476A4705F72FD* BEF787F858D3D6CB; // 0x10

	::System::Void _ctor(::BA8476A4705F72FD* B3B43F55D28EDEE4)
	{
		return ((::System::Void(*)(::PVOID, ::BA8476A4705F72FD*))((::PBYTE)hIl2Cpp + B81597DDB454C981__CTOR_OFFSET))(this, B3B43F55D28EDEE4);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B81597DDB454C981_E6A4EDFB781D1DCC_OFFSET))(this);
	}
};
