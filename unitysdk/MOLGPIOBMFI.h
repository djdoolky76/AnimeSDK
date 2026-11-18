#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBBMOHJDOJ.h"
#include "unitysdk/IKOBMGNNNNK.h"
#include "unitysdk/System/ValueType.h"

class OEGFJABLDPO;

#define MOLGPIOBMFI_MDLEBAPAGED_OFFSET UNITYSDK_OFFSET(0x174B5F20)
#define MOLGPIOBMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x7A92A0)

inline static constexpr unsigned int MOLGPIOBMFI_TypeDefinitionIndex = 82581;

struct alignas(4) MOLGPIOBMFI
{
	::System::Boolean PLKAPFONAFF; // 0x10
	::System::Byte _padding0[0x3];
	::DCBBMOHJDOJ EEBENBILKGG; // 0x14
	::IKOBMGNNNNK PODBMEPFFOL; // 0x24

	::System::Void _ctor(::System::Boolean MNMIMGIHJGH, ::DCBBMOHJDOJ CFMHHDEPDMH, ::IKOBMGNNNNK BDEKCLJANAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DCBBMOHJDOJ, ::IKOBMGNNNNK))((::PBYTE)hIl2Cpp + MOLGPIOBMFI__CTOR_OFFSET))(this, MNMIMGIHJGH, CFMHHDEPDMH, BDEKCLJANAC);
	}

	/*
	static ::System::Boolean MDLEBAPAGED(::OEGFJABLDPO* GBMLHHANFFN, ::OEGFJABLDPO* HODAIDNDKHD, ::MOLGPIOBMFI& FLPDANMPEFJ)
	{
		return ((::System::Boolean(*)(::OEGFJABLDPO*, ::OEGFJABLDPO*, ::MOLGPIOBMFI&))((::PBYTE)hIl2Cpp + MOLGPIOBMFI_MDLEBAPAGED_OFFSET))(GBMLHHANFFN, HODAIDNDKHD, FLPDANMPEFJ);
	}
	*/
};
