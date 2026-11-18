#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KHLBFAKEKDO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A2CBF70)
#define KHLBFAKEKDO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A2CC000)
#define KHLBFAKEKDO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A2CBEE0)
#define KHLBFAKEKDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2CBE60)
#define KHLBFAKEKDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CBED0)

inline static constexpr unsigned int KHLBFAKEKDO_TypeDefinitionIndex = 70553;

class KHLBFAKEKDO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12B; // 0x0
	::System::Int32 LKPMJMDJEBL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLBFAKEKDO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLBFAKEKDO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLBFAKEKDO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 LABJKINHNMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KHLBFAKEKDO_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, LABJKINHNMH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLBFAKEKDO_FIGPAOKNJLN_OFFSET))(this);
	}
};
