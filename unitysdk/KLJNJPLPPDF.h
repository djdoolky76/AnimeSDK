#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define KLJNJPLPPDF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12697CD0)
#define KLJNJPLPPDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12697D60)
#define KLJNJPLPPDF_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x12697BF0)
#define KLJNJPLPPDF_NLABMBCLKDO_OFFSET UNITYSDK_OFFSET(0x12697E80)
#define KLJNJPLPPDF_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x12697DF0)
#define KLJNJPLPPDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12697870)
#define KLJNJPLPPDF_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x12697930)
#define KLJNJPLPPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x12697CC0)

inline static constexpr unsigned int KLJNJPLPPDF_TypeDefinitionIndex = 61246;

class KLJNJPLPPDF : public ::NHPFMFABMEC
{
public:
	::System::Int32 EKDELEBLOAB; // 0x38
	::System::Boolean HCECPNOEAHE; // 0x3C
	::System::Boolean ECOKIPKMHJK; // 0x3D
	::System::Byte _padding0[0x2];
	::System::Int32 DMHGNGNJNCH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 NLABMBCLKDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJNJPLPPDF_NLABMBCLKDO_OFFSET))(this);
	}
};
