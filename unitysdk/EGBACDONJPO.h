#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EGBACDONJPO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17230540)
#define EGBACDONJPO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x172305A0)
#define EGBACDONJPO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x172304B0)
#define EGBACDONJPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17230430)
#define EGBACDONJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x172304A0)

inline static constexpr unsigned int EGBACDONJPO_TypeDefinitionIndex = 83738;

class EGBACDONJPO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x144; // 0x0
	::System::Int32 HOMFGOGJNAN; // 0x20
	::System::Int32 CJHCCIAEBNP; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGBACDONJPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBACDONJPO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBACDONJPO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 JJGNKFNINLM, ::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGBACDONJPO_CNHBDOMKKDE_OFFSET))(this, JJGNKFNINLM, NACGJJKHEJE);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBACDONJPO_FIGPAOKNJLN_OFFSET))(this);
	}
};
