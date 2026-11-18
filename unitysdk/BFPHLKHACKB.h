#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLPAHNOPMGN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFPHLKHACKB_AHOJLADNFIP_OFFSET UNITYSDK_OFFSET(0x12684900)
#define BFPHLKHACKB_CFEMEADFBMD_OFFSET UNITYSDK_OFFSET(0x12684BB0)
#define BFPHLKHACKB_CKHDHMKJIJP_OFFSET UNITYSDK_OFFSET(0x12684A20)
#define BFPHLKHACKB_DGKNODBHKDO_OFFSET UNITYSDK_OFFSET(0x12684C10)
#define BFPHLKHACKB_GMPPGNNECEC_OFFSET UNITYSDK_OFFSET(0x12684AB0)
#define BFPHLKHACKB_HCMOLENILAP_OFFSET UNITYSDK_OFFSET(0x12684B00)
#define BFPHLKHACKB_NEDAPPFABCD_OFFSET UNITYSDK_OFFSET(0x12684C90)
#define BFPHLKHACKB_NFECABLMAFN_OFFSET UNITYSDK_OFFSET(0x12684550)
#define BFPHLKHACKB__CTOR_OFFSET UNITYSDK_OFFSET(0x12684430)

inline static constexpr unsigned int BFPHLKHACKB_TypeDefinitionIndex = 91681;

class BFPHLKHACKB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BCJDLGPJLMA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BBKBACMDEGE; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FFFAKFNINAM; // 0x20
	::System::Boolean DIPNEBLNBND; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 HFPCJJLPEBD; // 0x2C
	::System::Int32 LPFABHHEKON; // 0x30
	::KLPAHNOPMGN HIMDDOANAKD; // 0x34
	::System::Single NCPELHGLCNF; // 0x38
	::System::Single EPMEAEFINGL; // 0x3C
	::System::Single FDBFJILJKPK; // 0x40
	::System::Single LCCJHKBOAJG; // 0x44

	::System::Void _ctor(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFPHLKHACKB__CTOR_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Boolean AHOJLADNFIP(::System::Int32 HFMADFEECJH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFPHLKHACKB_AHOJLADNFIP_OFFSET))(this, HFMADFEECJH);
	}

	::System::Boolean HCMOLENILAP(::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + BFPHLKHACKB_HCMOLENILAP_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Int32 CKHDHMKJIJP(::System::Int32 HFMADFEECJH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFPHLKHACKB_CKHDHMKJIJP_OFFSET))(this, HFMADFEECJH);
	}

	::System::Single CFEMEADFBMD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPHLKHACKB_CFEMEADFBMD_OFFSET))(this);
	}

	::System::Boolean GMPPGNNECEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPHLKHACKB_GMPPGNNECEC_OFFSET))(this);
	}

	::System::Void DGKNODBHKDO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFPHLKHACKB_DGKNODBHKDO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean NEDAPPFABCD(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFPHLKHACKB_NEDAPPFABCD_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NFECABLMAFN(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFPHLKHACKB_NFECABLMAFN_OFFSET))(this, OIKFFGKDHME);
	}
};
