#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJDLIJPGDP.h"

#define PBJKEMDGJFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1845F340)

inline static constexpr unsigned int PBJKEMDGJFN_TypeDefinitionIndex = 90841;

class PBJKEMDGJFN : public ::FDJDLIJPGDP
{
public:
	::System::UInt32 DHAJLFMHDNG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJKEMDGJFN__CTOR_OFFSET))(this);
	}
};
