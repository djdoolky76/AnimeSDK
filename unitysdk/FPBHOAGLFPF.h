#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/FEECNEFDJCF.h"
#include "unitysdk/PBLHIDMLJNF.h"

#define FPBHOAGLFPF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x165C6720)
#define FPBHOAGLFPF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x165C6690)
#define FPBHOAGLFPF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x165C6600)
#define FPBHOAGLFPF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x165C6780)
#define FPBHOAGLFPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x165C64F0)
#define FPBHOAGLFPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C6580)
#define FPBHOAGLFPF__CTOR_OFFSET UNITYSDK_OFFSET(0x165C65F0)

inline static constexpr unsigned int FPBHOAGLFPF_TypeDefinitionIndex = 48878;

class FPBHOAGLFPF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8; // 0x0
	::PBLHIDMLJNF OLPMJAECJBO; // 0x20
	::FEECNEFDJCF MEBECDCAAEN; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBHOAGLFPF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHOAGLFPF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHOAGLFPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHOAGLFPF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHOAGLFPF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::PBLHIDMLJNF DCCDGIDJFKB, ::FEECNEFDJCF HHDAEKDONEL)
	{
		return ((::System::Void(*)(::PVOID, ::PBLHIDMLJNF, ::FEECNEFDJCF))((::PBYTE)hIl2Cpp + FPBHOAGLFPF_CNHBDOMKKDE_OFFSET))(this, DCCDGIDJFKB, HHDAEKDONEL);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHOAGLFPF_OHFHFOHMBJH_OFFSET))(this);
	}
};
