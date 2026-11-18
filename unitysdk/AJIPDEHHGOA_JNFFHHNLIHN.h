#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEDLNMALNPC.h"
#include "unitysdk/System/Object.h"

class ILAENLNHPIO;

#define AJIPDEHHGOA_JNFFHHNLIHN_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x17DDB6A0)
#define AJIPDEHHGOA_JNFFHHNLIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDB690)

inline static constexpr unsigned int AJIPDEHHGOA_JNFFHHNLIHN_TypeDefinitionIndex = 43551;

class AJIPDEHHGOA_JNFFHHNLIHN : public ::System::Object
{
public:
	::NEDLNMALNPC PALJBNKBKMA; // 0x10
	::ILAENLNHPIO* BAECBPPGMNO; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_JNFFHHNLIHN__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_JNFFHHNLIHN_HOFIFAEOLBM_OFFSET))(this);
	}
};
