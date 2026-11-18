#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"

#define MKKOOCEJGGP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14069A00)
#define MKKOOCEJGGP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14069B00)
#define MKKOOCEJGGP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14069970)
#define MKKOOCEJGGP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14069A60)
#define MKKOOCEJGGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14069860)
#define MKKOOCEJGGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x140698F0)
#define MKKOOCEJGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14069960)

inline static constexpr unsigned int MKKOOCEJGGP_TypeDefinitionIndex = 69773;

class MKKOOCEJGGP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x121; // 0x0
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode HAPAHMLPAPE; // 0x20
	::System::Int32 DBBDBHODDFO; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKKOOCEJGGP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKOOCEJGGP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKOOCEJGGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKOOCEJGGP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 AKGGKGEPJLP, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode GPDMJNPJKOG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + MKKOOCEJGGP_CNHBDOMKKDE_OFFSET))(this, AKGGKGEPJLP, GPDMJNPJKOG);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKOOCEJGGP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKOOCEJGGP_FIGPAOKNJLN_OFFSET))(this);
	}
};
