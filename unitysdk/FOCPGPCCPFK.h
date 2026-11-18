#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class ALMMGOFACDF;

#define FOCPGPCCPFK_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x141157D0)
#define FOCPGPCCPFK_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x141158D0)
#define FOCPGPCCPFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14115860)

inline static constexpr unsigned int FOCPGPCCPFK_TypeDefinitionIndex = 74932;

class FOCPGPCCPFK : public ::PKMJPMFCNBK
{
public:
	::ALMMGOFACDF* KGCNPHDOBHP; // 0x80
	::System::Single DCHBGEMLOKD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCPGPCCPFK__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCPGPCCPFK_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCPGPCCPFK_KHJELIBOECB_OFFSET))(this);
	}
};
