#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAPJGKLMGCM.h"
#include "unitysdk/PFMOODAPJDF.h"

class KGBFLHNJHHN;

#define ALAFHBOENMO_EIBHJHNHDME_OFFSET UNITYSDK_OFFSET(0x1A56FC50)
#define ALAFHBOENMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56FC40)

inline static constexpr unsigned int ALAFHBOENMO_TypeDefinitionIndex = 16460;

class ALAFHBOENMO : public ::IAPJGKLMGCM
{
public:
	::System::Void _ctor(::PFMOODAPJDF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PFMOODAPJDF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALAFHBOENMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean EIBHJHNHDME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAFHBOENMO_EIBHJHNHDME_OFFSET))(this);
	}
};
