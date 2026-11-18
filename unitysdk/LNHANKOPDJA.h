#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

class JEKOHJMBOOI;
namespace System { class EventArgs; }

#define LNHANKOPDJA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1A6294C0)
#define LNHANKOPDJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A629550)
#define LNHANKOPDJA_EPANMNEJCHE_OFFSET UNITYSDK_OFFSET(0x1A628F20)
#define LNHANKOPDJA_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1A629350)
#define LNHANKOPDJA_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1A629430)
#define LNHANKOPDJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A628A70)
#define LNHANKOPDJA_PHAHBLKOHIL_OFFSET UNITYSDK_OFFSET(0x1A628E50)
#define LNHANKOPDJA_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1A628B70)
#define LNHANKOPDJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A629420)

inline static constexpr unsigned int LNHANKOPDJA_TypeDefinitionIndex = 47317;

class LNHANKOPDJA : public ::NHPFMFABMEC
{
public:
	::System::Int32 NPLJHBPGFOA; // 0x38
	::System::Int32 COEJIINAGMH; // 0x3C
	::System::Boolean GFJHACHDKNG; // 0x40
	::System::Boolean LPPEOOMGJLA; // 0x41
	::System::Boolean DBIPGKFAFAK; // 0x42
	::System::Boolean FJOBFBHJFNN; // 0x43
	::System::Int32 EFPBOOCPBEA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LNHANKOPDJA_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Boolean PHAHBLKOHIL(::JEKOHJMBOOI* EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + LNHANKOPDJA_PHAHBLKOHIL_OFFSET))(this, EPIDDDEJJDE);
	}

	::System::Boolean EPANMNEJCHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA_EPANMNEJCHE_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LNHANKOPDJA_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHANKOPDJA_ECNOGHHOPPF_OFFSET))(this);
	}
};
