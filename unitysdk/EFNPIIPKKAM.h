#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class AHAICPLGBAH;
class CAFDOBPGOEI;
class FOLOGHLENFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFNPIIPKKAM_BPLIIPAIOMB_OFFSET UNITYSDK_OFFSET(0x1722D8D0)
#define EFNPIIPKKAM_EEIIANDAIBL_OFFSET UNITYSDK_OFFSET(0x1722DA00)
#define EFNPIIPKKAM_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x1722D7C0)
#define EFNPIIPKKAM_JBANFILNGAG_OFFSET UNITYSDK_OFFSET(0x1722D950)
#define EFNPIIPKKAM_KANAKBEBOEO_OFFSET UNITYSDK_OFFSET(0x1722D990)
#define EFNPIIPKKAM_NILHMDPJLGA_OFFSET UNITYSDK_OFFSET(0x1722D840)
#define EFNPIIPKKAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1722D7D0)

inline static constexpr unsigned int EFNPIIPKKAM_TypeDefinitionIndex = 78328;

class EFNPIIPKKAM : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + EFNPIIPKKAM__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_GKILDJBDCAP_OFFSET))(this);
	}

	::System::Void NILHMDPJLGA(::System::Collections::Generic::List_1<::AHAICPLGBAH*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>*))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_NILHMDPJLGA_OFFSET))(this, PILELGPBCLL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BPLIIPAIOMB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_BPLIIPAIOMB_OFFSET))(this);
	}

	::System::Void JBANFILNGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_JBANFILNGAG_OFFSET))(this);
	}

	::CAFDOBPGOEI* KANAKBEBOEO()
	{
		return ((::CAFDOBPGOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_KANAKBEBOEO_OFFSET))(this);
	}

	::FOLOGHLENFB* EEIIANDAIBL()
	{
		return ((::FOLOGHLENFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNPIIPKKAM_EEIIANDAIBL_OFFSET))(this);
	}
};
