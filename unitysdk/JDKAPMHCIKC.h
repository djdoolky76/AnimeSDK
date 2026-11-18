#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define JDKAPMHCIKC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x160DAD60)
#define JDKAPMHCIKC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x160DADC0)
#define JDKAPMHCIKC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x160DACD0)
#define JDKAPMHCIKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x160DAC50)
#define JDKAPMHCIKC__CTOR_OFFSET UNITYSDK_OFFSET(0x160DACC0)

inline static constexpr unsigned int JDKAPMHCIKC_TypeDefinitionIndex = 67919;

class JDKAPMHCIKC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x104; // 0x0
	::System::String* OHOOOBMICGI; // 0x20
	::System::Boolean FDDFDLEINFM; // 0x28
	::System::Boolean OJBJPFBIMPJ; // 0x29

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKAPMHCIKC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKAPMHCIKC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKAPMHCIKC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* OHOOOBMICGI, ::System::Boolean OJBJPFBIMPJ, ::System::Boolean FDDFDLEINFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JDKAPMHCIKC_CNHBDOMKKDE_OFFSET))(this, OHOOOBMICGI, OJBJPFBIMPJ, FDDFDLEINFM);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKAPMHCIKC_FIGPAOKNJLN_OFFSET))(this);
	}
};
