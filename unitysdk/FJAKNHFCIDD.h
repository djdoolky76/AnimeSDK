#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDOLCJGLMKP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJAKNHFCIDD_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x140FF5D0)
#define FJAKNHFCIDD_BMDGMPMEEKL_OFFSET UNITYSDK_OFFSET(0x140FF7B0)
#define FJAKNHFCIDD_HJGAADOHCHF_OFFSET UNITYSDK_OFFSET(0x140FF9C0)
#define FJAKNHFCIDD_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x140FF690)
#define FJAKNHFCIDD_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x140FF610)
#define FJAKNHFCIDD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x140FF650)
#define FJAKNHFCIDD_ONOPOCOCFMI_OFFSET UNITYSDK_OFFSET(0x140FF930)
#define FJAKNHFCIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x140FF6E0)

inline static constexpr unsigned int FJAKNHFCIDD_TypeDefinitionIndex = 92713;

class FJAKNHFCIDD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FJAKNHFCIDD*>* HDKMJLFGABC; // 0x10
	::System::Collections::Generic::List_1<::IDOLCJGLMKP*>* GFDMIEBCJND; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAKNHFCIDD__CTOR_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void LBNAMNHJDBC(::FJAKNHFCIDD* FBIGIKNCLHJ)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_LBNAMNHJDBC_OFFSET))(this, FBIGIKNCLHJ);
	}

	::System::Void BMDGMPMEEKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_BMDGMPMEEKL_OFFSET))(this);
	}

	::System::Void ONOPOCOCFMI(::IDOLCJGLMKP* FCGFMELJHNL)
	{
		return ((::System::Void(*)(::PVOID, ::IDOLCJGLMKP*))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_ONOPOCOCFMI_OFFSET))(this, FCGFMELJHNL);
	}

	::System::Void HJGAADOHCHF(::IDOLCJGLMKP* FCGFMELJHNL)
	{
		return ((::System::Void(*)(::PVOID, ::IDOLCJGLMKP*))((::PBYTE)hIl2Cpp + FJAKNHFCIDD_HJGAADOHCHF_OFFSET))(this, FCGFMELJHNL);
	}
};
