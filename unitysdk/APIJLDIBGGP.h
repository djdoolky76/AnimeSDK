#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/PNEKPIPPHFK.h"

#define APIJLDIBGGP_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0xF7831D0)
#define APIJLDIBGGP__CTOR_OFFSET UNITYSDK_OFFSET(0xF7831E0)

inline static constexpr unsigned int APIJLDIBGGP_TypeDefinitionIndex = 73859;

class APIJLDIBGGP : public ::PNEKPIPPHFK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIJLDIBGGP__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + APIJLDIBGGP_LJEEJABBAHD_OFFSET))(this);
	}
};
