#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DPALOMOEHEN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13473530)
#define DPALOMOEHEN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13473400)
#define DPALOMOEHEN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13473370)
#define DPALOMOEHEN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13473490)
#define DPALOMOEHEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13473280)
#define DPALOMOEHEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x134732F0)
#define DPALOMOEHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x13473360)

inline static constexpr unsigned int DPALOMOEHEN_TypeDefinitionIndex = 71695;

class DPALOMOEHEN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3C; // 0x0
	::System::UInt32 PLHBNHMIAEF; // 0x20
	::System::UInt32 FJHKFEJAKMD; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPALOMOEHEN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPALOMOEHEN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPALOMOEHEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPALOMOEHEN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPALOMOEHEN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPALOMOEHEN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DPALOMOEHEN_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB);
	}
};
