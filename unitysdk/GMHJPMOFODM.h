#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"

class AHAICPLGBAH;
class FOLOGHLENFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMHJPMOFODM_BPLIIPAIOMB_OFFSET UNITYSDK_OFFSET(0x17A15320)
#define GMHJPMOFODM_NILHMDPJLGA_OFFSET UNITYSDK_OFFSET(0x17A15290)
#define GMHJPMOFODM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A15220)

inline static constexpr unsigned int GMHJPMOFODM_TypeDefinitionIndex = 52916;

class GMHJPMOFODM : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + GMHJPMOFODM__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::System::Void NILHMDPJLGA(::System::Collections::Generic::List_1<::AHAICPLGBAH*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>*))((::PBYTE)hIl2Cpp + GMHJPMOFODM_NILHMDPJLGA_OFFSET))(this, PILELGPBCLL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BPLIIPAIOMB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHJPMOFODM_BPLIIPAIOMB_OFFSET))(this);
	}
};
