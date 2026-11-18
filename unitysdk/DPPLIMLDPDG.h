#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEDOHEDHNCM.h"
#include "unitysdk/NKCNKNCLOLO.h"

class OBLMELFLIKL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPPLIMLDPDG_AFPGIDMJKCI_OFFSET UNITYSDK_OFFSET(0x20008040)
#define DPPLIMLDPDG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x200079D0)
#define DPPLIMLDPDG_BLOAMMJMICL_OFFSET UNITYSDK_OFFSET(0x20007E50)
#define DPPLIMLDPDG_BPIMCKIACPA_OFFSET UNITYSDK_OFFSET(0x20008080)
#define DPPLIMLDPDG_GAJEGPLKNMA_OFFSET UNITYSDK_OFFSET(0x20008120)
#define DPPLIMLDPDG_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x20008030)
#define DPPLIMLDPDG_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x20007D20)
#define DPPLIMLDPDG_OMGEDBDKPAF_OFFSET UNITYSDK_OFFSET(0x20007F40)
#define DPPLIMLDPDG_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x20008110)
#define DPPLIMLDPDG_PNNHHLPJONG_OFFSET UNITYSDK_OFFSET(0x20008200)
#define DPPLIMLDPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x200078B0)

inline static constexpr unsigned int DPPLIMLDPDG_TypeDefinitionIndex = 96382;

class DPPLIMLDPDG : public ::NKCNKNCLOLO
{
public:
	::System::Collections::Generic::Dictionary_2<::MEDOHEDHNCM, ::System::Collections::Generic::List_1<::System::Int32>*>* FENPGFAONAJ; // 0x60
	::System::Collections::Generic::Dictionary_2<::MEDOHEDHNCM, ::System::Int32>* CCPBNMDHJNI; // 0x68
	::OBLMELFLIKL* DFMKILICPFB; // 0x70
	::System::Boolean NDENFLPDNEL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPLIMLDPDG__CTOR_OFFSET))(this);
	}

	::NKCNKNCLOLO* BBOMJDBNHIC(::System::Boolean HLDIMICADKL)
	{
		return ((::NKCNKNCLOLO*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_BBOMJDBNHIC_OFFSET))(this, HLDIMICADKL);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Int32 BLOAMMJMICL(::System::Int32 BKOLCDPOJAL)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_BLOAMMJMICL_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OMGEDBDKPAF(::System::Int32 BKOLCDPOJAL)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_OMGEDBDKPAF_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_HFJKKGKPANC_OFFSET))(this);
	}

	::System::Boolean AFPGIDMJKCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_AFPGIDMJKCI_OFFSET))(this);
	}

	::System::Int32 BPIMCKIACPA(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_BPIMCKIACPA_OFFSET))(this, MIALFKCCCPI);
	}

	::NKCNKNCLOLO* PNHPDOBPKKE(::System::Boolean MIALFKCCCPI)
	{
		return ((::NKCNKNCLOLO*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GAJEGPLKNMA(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_GAJEGPLKNMA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNNHHLPJONG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPLIMLDPDG_PNNHHLPJONG_OFFSET))(this);
	}
};
