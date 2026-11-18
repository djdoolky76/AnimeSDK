#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/KPJADOIPOGJ_GIBIJCGKMNB.h"

namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLJPCGHNHON_AHAGOGLOKNG_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1159E650)
#define NLJPCGHNHON_AHAGOGLOKNG_MKEAMBLJPGA_OFFSET UNITYSDK_OFFSET(0x1159E5F0)
#define NLJPCGHNHON_AHAGOGLOKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1159E5E0)

inline static constexpr unsigned int NLJPCGHNHON_AHAGOGLOKNG_TypeDefinitionIndex = 48738;

class NLJPCGHNHON_AHAGOGLOKNG : public ::KPJADOIPOGJ_GIBIJCGKMNB
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IBJMIHFKGND; // 0x58
	::FAKODLEPJOA OMODPELOAIC; // 0x60
	::System::Single CCDNKBONPLB; // 0x64
	::System::Boolean MCJCCJOEKGN; // 0x68
	::System::Byte _padding0[0x3];
	::System::Int32 GIEIBEMEPMH; // 0x6C
	::System::Int32 OMHKJDKFLDF; // 0x70
	::System::Single LLBEKEFONPC; // 0x74
	::System::Int32 JCPJFMEAMIH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPCGHNHON_AHAGOGLOKNG__CTOR_OFFSET))(this);
	}

	::System::Void MKEAMBLJPGA(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NLJPCGHNHON_AHAGOGLOKNG_MKEAMBLJPGA_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPCGHNHON_AHAGOGLOKNG_CHCGMACMJLD_OFFSET))(this);
	}
};
