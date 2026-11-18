#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBKBJLGKGNN.h"
#include "unitysdk/System/Object.h"

#define DMECJEOJCED_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x13457B30)
#define DMECJEOJCED_GBNMAJOMMMG_OFFSET UNITYSDK_OFFSET(0x13457C50)
#define DMECJEOJCED_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x13457C60)
#define DMECJEOJCED_MEACENMAELN_OFFSET UNITYSDK_OFFSET(0x13457C80)
#define DMECJEOJCED_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13457B80)
#define DMECJEOJCED_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13457BD0)
#define DMECJEOJCED_POOKAPEGHNO_OFFSET UNITYSDK_OFFSET(0x13457C70)
#define DMECJEOJCED__CTOR_OFFSET UNITYSDK_OFFSET(0x13457B20)

inline static constexpr unsigned int DMECJEOJCED_TypeDefinitionIndex = 61693;

class DMECJEOJCED : public ::System::Object
{
public:
	::System::Single MLPFAMJGKHM; // 0x10
	::CBKBJLGKGNN _GFMPDMGLFBK_k__BackingField; // 0x14
	::System::Single FBDIIPHDAIL; // 0x18

	::System::Void _ctor(::System::Single EEODALLOKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMECJEOJCED__CTOR_OFFSET))(this, EEODALLOKMF);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMECJEOJCED_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMECJEOJCED_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMECJEOJCED_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void POOKAPEGHNO(::CBKBJLGKGNN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBKBJLGKGNN))((::PBYTE)hIl2Cpp + DMECJEOJCED_POOKAPEGHNO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMECJEOJCED_JNENFEELMBP_OFFSET))(this);
	}

	::CBKBJLGKGNN MEACENMAELN()
	{
		return ((::CBKBJLGKGNN(*)(::PVOID))((::PBYTE)hIl2Cpp + DMECJEOJCED_MEACENMAELN_OFFSET))(this);
	}

	::System::Boolean GBNMAJOMMMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMECJEOJCED_GBNMAJOMMMG_OFFSET))(this);
	}
};
