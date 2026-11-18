#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MAIEBDMOLFD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xD4428E0)
#define MAIEBDMOLFD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xD442850)
#define MAIEBDMOLFD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xD4427C0)
#define MAIEBDMOLFD__CCTOR_OFFSET UNITYSDK_OFFSET(0xD442740)
#define MAIEBDMOLFD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4427B0)

inline static constexpr unsigned int MAIEBDMOLFD_TypeDefinitionIndex = 73310;

class MAIEBDMOLFD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5A; // 0x0
	::System::Boolean JINCFIGEAKM; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAIEBDMOLFD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIEBDMOLFD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIEBDMOLFD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIEBDMOLFD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean PPGNHAPPHCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAIEBDMOLFD_CNHBDOMKKDE_OFFSET))(this, PPGNHAPPHCH);
	}
};
