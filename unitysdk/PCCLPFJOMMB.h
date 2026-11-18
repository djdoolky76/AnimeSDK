#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class GHICACFMBNP;

#define PCCLPFJOMMB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x11954DE0)
#define PCCLPFJOMMB_HKCJOIPMNKP_OFFSET UNITYSDK_OFFSET(0x11954E70)
#define PCCLPFJOMMB_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x11954E80)
#define PCCLPFJOMMB_KGKLOENFHKP_OFFSET UNITYSDK_OFFSET(0x11954A30)
#define PCCLPFJOMMB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11954A50)
#define PCCLPFJOMMB_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x11954D00)
#define PCCLPFJOMMB_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x11954A40)
#define PCCLPFJOMMB__CTOR_OFFSET UNITYSDK_OFFSET(0x11954A20)

inline static constexpr unsigned int PCCLPFJOMMB_TypeDefinitionIndex = 85795;

class PCCLPFJOMMB : public ::System::Object
{
public:
	::GHICACFMBNP* PHGBOCIDLEI; // 0x10
	::System::Single EEODALLOKMF; // 0x18
	::System::Boolean _HEIKIPAGCFH_k__BackingField; // 0x1C
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Single HPFEILOODEJ; // 0x20

	::System::Void _ctor(::GHICACFMBNP* PHGBOCIDLEI, ::System::Single EEODALLOKMF)
	{
		return ((::System::Void(*)(::PVOID, ::GHICACFMBNP*, ::System::Single))((::PBYTE)hIl2Cpp + PCCLPFJOMMB__CTOR_OFFSET))(this, PHGBOCIDLEI, EEODALLOKMF);
	}

	::System::Void KGKLOENFHKP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_KGKLOENFHKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UICameraAtom OKJCHFGIKBH()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean HKCJOIPMNKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_HKCJOIPMNKP_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLPFJOMMB_JNENFEELMBP_OFFSET))(this);
	}
};
