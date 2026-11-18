#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class PCMENEMPLGF_MOGHMDHPFDD;

#define PCMENEMPLGF_GMLMNGKJLAG_NOPMJEFJNFN_OFFSET UNITYSDK_OFFSET(0x136EBE40)
#define PCMENEMPLGF_GMLMNGKJLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x136EBE30)

inline static constexpr unsigned int PCMENEMPLGF_GMLMNGKJLAG_TypeDefinitionIndex = 62827;

class PCMENEMPLGF_GMLMNGKJLAG : public ::System::Object
{
public:
	::PCMENEMPLGF_MOGHMDHPFDD* EEMOEMFLABI; // 0x10
	::System::Int32 BEAOAOKFJKF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GMLMNGKJLAG__CTOR_OFFSET))(this);
	}

	::System::Boolean NOPMJEFJNFN(::FMHDMLBDIJC* KDEHMPGOCEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GMLMNGKJLAG_NOPMJEFJNFN_OFFSET))(this, KDEHMPGOCEP);
	}
};
