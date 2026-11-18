#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
class MBADBGPKNNC;
class PNJDGHBEMLK;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLKKPJBCCMN_HKINFELGCPA_OFFSET UNITYSDK_OFFSET(0x11C5A2E0)
#define FLKKPJBCCMN_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x11C5A4D0)
#define FLKKPJBCCMN_JJGNIAACLDI_OFFSET UNITYSDK_OFFSET(0x11C59F20)
#define FLKKPJBCCMN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C59C20)
#define FLKKPJBCCMN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11C5A0B0)
#define FLKKPJBCCMN_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x11C5A6F0)
#define FLKKPJBCCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C59B20)

inline static constexpr unsigned int FLKKPJBCCMN_TypeDefinitionIndex = 50019;

class FLKKPJBCCMN : public ::System::Object
{
public:
	::FBAMLABJMKF* CEMNINMOGDJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::MBADBGPKNNC*>* GNEDMDINEJC; // 0x18
	::System::Collections::Generic::List_1<::MBADBGPKNNC*>* ECIBFOGANGJ; // 0x20

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + FLKKPJBCCMN__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void JJGNIAACLDI(::MBADBGPKNNC* EDFDNEGONOK)
	{
		return ((::System::Void(*)(::PVOID, ::MBADBGPKNNC*))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_JJGNIAACLDI_OFFSET))(this, EDFDNEGONOK);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void HKINFELGCPA(::PNJDGHBEMLK* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_HKINFELGCPA_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLKKPJBCCMN_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}
};
