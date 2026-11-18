#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KCKJCNDLCEM_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x157DFB40)
#define KCKJCNDLCEM__CTOR_OFFSET UNITYSDK_OFFSET(0x157DFB80)

inline static constexpr unsigned int KCKJCNDLCEM_TypeDefinitionIndex = 71563;

class KCKJCNDLCEM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKJCNDLCEM__CTOR_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKJCNDLCEM_AOPGPMDDDDI_OFFSET))(this);
	}
};
