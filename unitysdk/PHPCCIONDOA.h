#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHCEJBBEJF.h"
#include "unitysdk/PPDANDONMDH.h"

#define PHPCCIONDOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F3C50)

inline static constexpr unsigned int PHPCCIONDOA_TypeDefinitionIndex = 60738;

class PHPCCIONDOA : public ::OLHCEJBBEJF
{
public:
	::System::Boolean GCLPMHAGBBN; // 0x20
	::System::Boolean NKDMHKBMIJL; // 0x21
	::System::Byte _padding0[0x2];
	::System::Int32 MOBNMDEDJIP; // 0x24
	::PPDANDONMDH GDBBOKLCPEF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPCCIONDOA__CTOR_OFFSET))(this);
	}
};
