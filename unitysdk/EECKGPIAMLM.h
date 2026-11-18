#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/HJJILBINBFG.h"

#define EECKGPIAMLM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x161358F0)
#define EECKGPIAMLM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16135950)
#define EECKGPIAMLM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16135860)
#define EECKGPIAMLM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x161359E0)
#define EECKGPIAMLM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16135750)
#define EECKGPIAMLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x161357E0)
#define EECKGPIAMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x16135850)

inline static constexpr unsigned int EECKGPIAMLM_TypeDefinitionIndex = 83620;

class EECKGPIAMLM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x110; // 0x0
	::HJJILBINBFG JLOCDKHBDDL; // 0x20
	::System::UInt32 KMLBMCENJPI; // 0x24
	::System::Int32 EAHEOHODAOE; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECKGPIAMLM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKGPIAMLM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKGPIAMLM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKGPIAMLM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::HJJILBINBFG OIJJADCMKIK, ::System::Int32 LACIBNOPNLI, ::System::UInt32 DEDOHCODKHN)
	{
		return ((::System::Void(*)(::PVOID, ::HJJILBINBFG, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EECKGPIAMLM_CNHBDOMKKDE_OFFSET))(this, OIJJADCMKIK, LACIBNOPNLI, DEDOHCODKHN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKGPIAMLM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKGPIAMLM_OHFHFOHMBJH_OFFSET))(this);
	}
};
