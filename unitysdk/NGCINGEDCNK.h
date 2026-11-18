#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define NGCINGEDCNK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12C5C5F0)
#define NGCINGEDCNK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12C5C640)
#define NGCINGEDCNK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12C5C560)
#define NGCINGEDCNK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12C5C6D0)
#define NGCINGEDCNK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12C5C460)
#define NGCINGEDCNK__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C5C4E0)
#define NGCINGEDCNK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5C550)

inline static constexpr unsigned int NGCINGEDCNK_TypeDefinitionIndex = 38751;

class NGCINGEDCNK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5D; // 0x0
	::MoleMole::Config::EntityType MKCOMJHINNJ; // 0x20
	::System::UInt32 AOGNNJLKHGL; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGCINGEDCNK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCINGEDCNK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCINGEDCNK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCINGEDCNK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + NGCINGEDCNK_CNHBDOMKKDE_OFFSET))(this, MKCOMJHINNJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCINGEDCNK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCINGEDCNK_OHFHFOHMBJH_OFFSET))(this);
	}
};
