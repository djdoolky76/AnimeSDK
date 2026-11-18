#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMIOAJGHCAM;

#define BKLHKPEBFAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFF83EE0)

inline static constexpr unsigned int BKLHKPEBFAP_TypeDefinitionIndex = 46153;

class BKLHKPEBFAP : public ::System::Object
{
public:
	::OMIOAJGHCAM* AJHNAOOPALC; // 0x10
	::System::Int32 OEELDKLMFFJ; // 0x18
	::System::Int32 BMMLBOJFKNH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLHKPEBFAP__CTOR_OFFSET))(this);
	}
};
