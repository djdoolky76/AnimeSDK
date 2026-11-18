#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;

#define KBIEJLBIHED_GKBPMCJNOFE_DLOELBLACPJ_OFFSET UNITYSDK_OFFSET(0x157DE2D0)
#define KBIEJLBIHED_GKBPMCJNOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x157DE2C0)

inline static constexpr unsigned int KBIEJLBIHED_GKBPMCJNOFE_TypeDefinitionIndex = 72545;

class KBIEJLBIHED_GKBPMCJNOFE : public ::System::Object
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIEJLBIHED_GKBPMCJNOFE__CTOR_OFFSET))(this);
	}

	::System::Boolean DLOELBLACPJ(::BLCIDFMMHIL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + KBIEJLBIHED_GKBPMCJNOFE_DLOELBLACPJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
