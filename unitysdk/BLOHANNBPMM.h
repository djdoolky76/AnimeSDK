#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFKHEKOPBD.h"
#include "unitysdk/MBDDPHPODAN.h"

class ANAPNFPOMNG;
namespace System { class String; }

#define BLOHANNBPMM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1857C910)
#define BLOHANNBPMM_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x1857C4C0)
#define BLOHANNBPMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1857C880)
#define BLOHANNBPMM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1857C7B0)
#define BLOHANNBPMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1857C320)
#define BLOHANNBPMM_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x1857C9A0)
#define BLOHANNBPMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C870)

inline static constexpr unsigned int BLOHANNBPMM_TypeDefinitionIndex = 57235;

class BLOHANNBPMM : public ::HJFKHEKOPBD
{
public:
	::System::String* IBNLAAIELGL; // 0x60
	::MBDDPHPODAN PCLCFLPBEBC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHANNBPMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHANNBPMM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + BLOHANNBPMM_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHANNBPMM_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHANNBPMM_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHANNBPMM_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + BLOHANNBPMM_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}
};
