#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFBCHGBCBC.h"

class IBENDELLLAO;

#define JANFHIKPCFO_KAEIINKFAAA_OFFSET UNITYSDK_OFFSET(0x15C32C20)
#define JANFHIKPCFO_MGHDOECNEJA_OFFSET UNITYSDK_OFFSET(0x15C32C60)
#define JANFHIKPCFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15C32CB0)

inline static constexpr unsigned int JANFHIKPCFO_TypeDefinitionIndex = 67197;

class JANFHIKPCFO : public ::System::Object
{
public:
	::IBENDELLLAO* MAEGOEHHGPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANFHIKPCFO__CTOR_OFFSET))(this);
	}

	::System::Boolean KAEIINKFAAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JANFHIKPCFO_KAEIINKFAAA_OFFSET))(this);
	}

	::System::Boolean MGHDOECNEJA(::PIFBCHGBCBC DMADIGMDIBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIFBCHGBCBC))((::PBYTE)hIl2Cpp + JANFHIKPCFO_MGHDOECNEJA_OFFSET))(this, DMADIGMDIBK);
	}
};
