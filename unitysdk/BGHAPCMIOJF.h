#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

#define BGHAPCMIOJF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10DD8B30)
#define BGHAPCMIOJF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10DD8BD0)
#define BGHAPCMIOJF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10DD8AA0)
#define BGHAPCMIOJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DD8A20)
#define BGHAPCMIOJF__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD8A90)

inline static constexpr unsigned int BGHAPCMIOJF_TypeDefinitionIndex = 43678;

class BGHAPCMIOJF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x89; // 0x0
	::System::Boolean PMNFPBJNJNF; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::Config::InlevelCameraState IIHGNBNLLNG; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGHAPCMIOJF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHAPCMIOJF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHAPCMIOJF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::MoleMole::Config::InlevelCameraState JKBLDFBGBPK, ::System::Boolean ACJNEHDOIEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::InlevelCameraState, ::System::Boolean))((::PBYTE)hIl2Cpp + BGHAPCMIOJF_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, JKBLDFBGBPK, ACJNEHDOIEC);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHAPCMIOJF_FIGPAOKNJLN_OFFSET))(this);
	}
};
