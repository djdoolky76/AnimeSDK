#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GDOPHANHLLA.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

#define NHBJOJJPGIM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xE580080)
#define NHBJOJJPGIM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xE5800E0)
#define NHBJOJJPGIM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xE57FFF0)
#define NHBJOJJPGIM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE57FF70)
#define NHBJOJJPGIM__CTOR_OFFSET UNITYSDK_OFFSET(0xE57FFE0)

inline static constexpr unsigned int NHBJOJJPGIM_TypeDefinitionIndex = 76994;

class NHBJOJJPGIM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10A; // 0x0
	::MoleMole::Config::TeleportSelectionType GBLHGALMEPN; // 0x20
	::GDOPHANHLLA MGOLFAPNGOH; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHBJOJJPGIM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBJOJJPGIM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBJOJJPGIM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::TeleportSelectionType CAGFADMPGKF, ::GDOPHANHLLA JGKMCMONDEN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType, ::GDOPHANHLLA))((::PBYTE)hIl2Cpp + NHBJOJJPGIM_CNHBDOMKKDE_OFFSET))(this, CAGFADMPGKF, JGKMCMONDEN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBJOJJPGIM_FIGPAOKNJLN_OFFSET))(this);
	}
};
