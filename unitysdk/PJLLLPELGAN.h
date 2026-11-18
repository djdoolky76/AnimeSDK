#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PJLLLPELGAN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C2B2A60)
#define PJLLLPELGAN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C2B29D0)
#define PJLLLPELGAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B2950)
#define PJLLLPELGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B29C0)

inline static constexpr unsigned int PJLLLPELGAN_TypeDefinitionIndex = 42733;

class PJLLLPELGAN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLLLPELGAN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLLLPELGAN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLLLPELGAN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLLLPELGAN_FIGPAOKNJLN_OFFSET))(this);
	}
};
