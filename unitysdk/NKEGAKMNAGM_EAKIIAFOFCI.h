#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGGPIOIJELD;
class NKEGAKMNAGM_GNBGHCHLFBI;

#define NKEGAKMNAGM_EAKIIAFOFCI_LNJKBHCFHIF_OFFSET UNITYSDK_OFFSET(0x1AE26800)
#define NKEGAKMNAGM_EAKIIAFOFCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE267F0)

inline static constexpr unsigned int NKEGAKMNAGM_EAKIIAFOFCI_TypeDefinitionIndex = 82167;

class NKEGAKMNAGM_EAKIIAFOFCI : public ::System::Object
{
public:
	::NKEGAKMNAGM_GNBGHCHLFBI* FGBNBFHOKAA; // 0x10
	::GGGPIOIJELD* CCCBJNLDMEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_EAKIIAFOFCI__CTOR_OFFSET))(this);
	}

	::System::Void LNJKBHCFHIF(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_EAKIIAFOFCI_LNJKBHCFHIF_OFFSET))(this, JCJDLICAODK);
	}
};
