#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"

class AHAICPLGBAH;
class FOLOGHLENFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDKCFGNJCCB_BPLIIPAIOMB_OFFSET UNITYSDK_OFFSET(0x119624C0)
#define PDKCFGNJCCB_NILHMDPJLGA_OFFSET UNITYSDK_OFFSET(0x11962430)
#define PDKCFGNJCCB__CTOR_OFFSET UNITYSDK_OFFSET(0x119623C0)

inline static constexpr unsigned int PDKCFGNJCCB_TypeDefinitionIndex = 44551;

class PDKCFGNJCCB : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + PDKCFGNJCCB__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::System::Void NILHMDPJLGA(::System::Collections::Generic::List_1<::AHAICPLGBAH*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>*))((::PBYTE)hIl2Cpp + PDKCFGNJCCB_NILHMDPJLGA_OFFSET))(this, PILELGPBCLL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BPLIIPAIOMB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKCFGNJCCB_BPLIIPAIOMB_OFFSET))(this);
	}
};
