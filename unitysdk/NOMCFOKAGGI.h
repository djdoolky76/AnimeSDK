#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPDPELNABIK.h"
#include "unitysdk/PGOEFBEADPP.h"

#define NOMCFOKAGGI_GGOIFEAIEHA_OFFSET UNITYSDK_OFFSET(0x1D756390)
#define NOMCFOKAGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7562B0)

inline static constexpr unsigned int NOMCFOKAGGI_TypeDefinitionIndex = 8032;

class NOMCFOKAGGI : public ::PGOEFBEADPP
{
public:
	::KPDPELNABIK _ONEMEDIAAOO_k__BackingField; // 0x18

	::System::Void _ctor(::KPDPELNABIK KKIAHJODOIA)
	{
		return ((::System::Void(*)(::PVOID, ::KPDPELNABIK))((::PBYTE)hIl2Cpp + NOMCFOKAGGI__CTOR_OFFSET))(this, KKIAHJODOIA);
	}

	::KPDPELNABIK GGOIFEAIEHA()
	{
		return ((::KPDPELNABIK(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMCFOKAGGI_GGOIFEAIEHA_OFFSET))(this);
	}
};
