#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class PCMENEMPLGF_MOGHMDHPFDD;

#define PCMENEMPLGF_MBONONJDEGI_KOLJCFMIMND_OFFSET UNITYSDK_OFFSET(0x155335A0)
#define PCMENEMPLGF_MBONONJDEGI__CTOR_OFFSET UNITYSDK_OFFSET(0x15533590)

inline static constexpr unsigned int PCMENEMPLGF_MBONONJDEGI_TypeDefinitionIndex = 62864;

class PCMENEMPLGF_MBONONJDEGI : public ::System::Object
{
public:
	::PCMENEMPLGF_MOGHMDHPFDD* FGBNBFHOKAA; // 0x10
	::System::Int32 KNJOHKJLEGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MBONONJDEGI__CTOR_OFFSET))(this);
	}

	::System::Boolean KOLJCFMIMND(::FMHDMLBDIJC* KDEHMPGOCEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MBONONJDEGI_KOLJCFMIMND_OFFSET))(this, KDEHMPGOCEP);
	}
};
