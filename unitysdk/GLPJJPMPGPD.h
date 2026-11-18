#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/HJFKHEKOPBD.h"

class ANAPNFPOMNG;
namespace System { class EventArgs; }

#define GLPJJPMPGPD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x125E48F0)
#define GLPJJPMPGPD_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x125E4150)
#define GLPJJPMPGPD_DDCPCMHJNLD_OFFSET UNITYSDK_OFFSET(0x125E44E0)
#define GLPJJPMPGPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125E4860)
#define GLPJJPMPGPD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x125E42D0)
#define GLPJJPMPGPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125E3EA0)
#define GLPJJPMPGPD_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x125E47D0)
#define GLPJJPMPGPD__CTOR_OFFSET UNITYSDK_OFFSET(0x125E44D0)

inline static constexpr unsigned int GLPJJPMPGPD_TypeDefinitionIndex = 69930;

class GLPJJPMPGPD : public ::HJFKHEKOPBD
{
public:
	::System::Boolean JGCICGELGOL; // 0x60
	::System::Byte _padding0[0x3];
	::Foundation::Unreal::FGameplayTag PIBFLJPAKPF; // 0x64
	::System::Int32 BMEONJDOIAL; // 0x6C
	::System::Int32 NNCCOAPAKMK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPJJPMPGPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DDCPCMHJNLD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_DDCPCMHJNLD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPJJPMPGPD_ANEOCOIFDDJ_OFFSET))(this);
	}
};
