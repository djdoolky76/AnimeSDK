#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJAIIONPIPF;
class JNBFLJPMCKP_JCEOIPFDDIL;

#define JNBFLJPMCKP_DIIGKOLMPAL_MKBMLACOFGJ_OFFSET UNITYSDK_OFFSET(0x18A26250)
#define JNBFLJPMCKP_DIIGKOLMPAL_MONMGAMBOGJ_OFFSET UNITYSDK_OFFSET(0x18A26220)
#define JNBFLJPMCKP_DIIGKOLMPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A26210)

inline static constexpr unsigned int JNBFLJPMCKP_DIIGKOLMPAL_TypeDefinitionIndex = 93016;

class JNBFLJPMCKP_DIIGKOLMPAL : public ::System::Object
{
public:
	::DJAIIONPIPF* DNOHELNGGLJ; // 0x10
	::JNBFLJPMCKP_JCEOIPFDDIL* CJEKDBFDGID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBFLJPMCKP_DIIGKOLMPAL__CTOR_OFFSET))(this);
	}

	::System::Void MONMGAMBOGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBFLJPMCKP_DIIGKOLMPAL_MONMGAMBOGJ_OFFSET))(this);
	}

	::System::Void MKBMLACOFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBFLJPMCKP_DIIGKOLMPAL_MKBMLACOFGJ_OFFSET))(this);
	}
};
