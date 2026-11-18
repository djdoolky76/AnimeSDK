#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;

#define OCIKBEJKPCB_DIJDJNAJKEH_OPPLLFDIFBI_OFFSET UNITYSDK_OFFSET(0xE0E6D10)
#define OCIKBEJKPCB_DIJDJNAJKEH__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E6D00)

inline static constexpr unsigned int OCIKBEJKPCB_DIJDJNAJKEH_TypeDefinitionIndex = 66583;

class OCIKBEJKPCB_DIJDJNAJKEH : public ::System::Object
{
public:
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x10
	::System::Boolean BELICFOLLAL; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 IEGPOKIFOIO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_DIJDJNAJKEH__CTOR_OFFSET))(this);
	}

	::System::Void OPPLLFDIFBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_DIJDJNAJKEH_OPPLLFDIFBI_OFFSET))(this);
	}
};
