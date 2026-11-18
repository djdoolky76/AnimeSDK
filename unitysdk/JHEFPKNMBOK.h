#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JHEFPKNMBOK_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x13842250)
#define JHEFPKNMBOK__CTOR_OFFSET UNITYSDK_OFFSET(0x13842240)

inline static constexpr unsigned int JHEFPKNMBOK_TypeDefinitionIndex = 69276;

class JHEFPKNMBOK : public ::System::Object
{
public:
	::System::Int32 AGOKMCFDJIA; // 0x10

	::System::Void _ctor(::System::Int32 EHDLEOPFKDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHEFPKNMBOK__CTOR_OFFSET))(this, EHDLEOPFKDN);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEFPKNMBOK_GPKMPDHNCGL_OFFSET))(this);
	}
};
