#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDPAODHBIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CFFDC0)

inline static constexpr unsigned int FDPAODHBIIH_TypeDefinitionIndex = 52711;

class FDPAODHBIIH : public ::System::Object
{
public:
	::System::Int32 BCCENALHBHL; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 ACHBBPJIBIE; // 0x18

	::System::Void _ctor(::System::UInt64 ACHBBPJIBIE, ::System::Int32 BCCENALHBHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FDPAODHBIIH__CTOR_OFFSET))(this, ACHBBPJIBIE, BCCENALHBHL);
	}
};
