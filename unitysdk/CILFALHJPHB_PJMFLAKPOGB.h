#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CILFALHJPHB;
class DJFLOOJJIFO;
class MEHOFJOFPBD;

#define CILFALHJPHB_PJMFLAKPOGB_BDEIPPFLIDC_OFFSET UNITYSDK_OFFSET(0x1EB36660)
#define CILFALHJPHB_PJMFLAKPOGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB36650)

inline static constexpr unsigned int CILFALHJPHB_PJMFLAKPOGB_TypeDefinitionIndex = 96534;

class CILFALHJPHB_PJMFLAKPOGB : public ::System::Object
{
public:
	::CILFALHJPHB* KLHPEBKNIFB; // 0x10
	::DJFLOOJJIFO* FAIPFCNDLDE; // 0x18
	::MEHOFJOFPBD* DFMKILICPFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_PJMFLAKPOGB__CTOR_OFFSET))(this);
	}

	::System::Void BDEIPPFLIDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_PJMFLAKPOGB_BDEIPPFLIDC_OFFSET))(this);
	}
};
