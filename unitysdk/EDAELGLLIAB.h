#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EDAELGLLIAB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14142440)
#define EDAELGLLIAB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x141424A0)
#define EDAELGLLIAB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x141423B0)
#define EDAELGLLIAB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14142530)
#define EDAELGLLIAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x141422C0)
#define EDAELGLLIAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14142330)
#define EDAELGLLIAB__CTOR_OFFSET UNITYSDK_OFFSET(0x141423A0)

inline static constexpr unsigned int EDAELGLLIAB_TypeDefinitionIndex = 65373;

class EDAELGLLIAB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xBC; // 0x0
	::System::UInt32 PLHBNHMIAEF; // 0x20
	::System::UInt32 FJHKFEJAKMD; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAELGLLIAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAELGLLIAB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAELGLLIAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAELGLLIAB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EDAELGLLIAB_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAELGLLIAB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAELGLLIAB_OHFHFOHMBJH_OFFSET))(this);
	}
};
