#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLBMHACOPE.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EDFFEKOBFLJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x7FE68B0)
#define EDFFEKOBFLJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x7FE6940)
#define EDFFEKOBFLJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x7FE6820)
#define EDFFEKOBFLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FE67A0)
#define EDFFEKOBFLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE6810)

inline static constexpr unsigned int EDFFEKOBFLJ_TypeDefinitionIndex = 40310;

class EDFFEKOBFLJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x40; // 0x0
	::System::Boolean HKAHPFKKAPE; // 0x20
	::System::Byte _padding0[0x3];
	::CNLBMHACOPE NPPICNNFDAI; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDFFEKOBFLJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFFEKOBFLJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFFEKOBFLJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::Boolean HKAHPFKKAPE, ::CNLBMHACOPE NPPICNNFDAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::CNLBMHACOPE))((::PBYTE)hIl2Cpp + EDFFEKOBFLJ_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, HKAHPFKKAPE, NPPICNNFDAI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFFEKOBFLJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
