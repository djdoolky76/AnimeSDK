#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MOAHGEJDEBE.h"
#include "unitysdk/System/Object.h"

class DBEEELCGJOA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINLPJBGEBK_DMCMGJNOJEC_OFFSET UNITYSDK_OFFSET(0x1DC84A50)
#define CINLPJBGEBK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1DC85120)
#define CINLPJBGEBK_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x1DC84980)
#define CINLPJBGEBK_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x1DC84F80)
#define CINLPJBGEBK_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x1DC84F70)
#define CINLPJBGEBK_JKAPFAPMAFN_OFFSET UNITYSDK_OFFSET(0x1DC84F90)
#define CINLPJBGEBK_OHCIOOALOLB_OFFSET UNITYSDK_OFFSET(0x1DC85160)
#define CINLPJBGEBK_PDGKCONFFFD_OFFSET UNITYSDK_OFFSET(0x1DC852E0)
#define CINLPJBGEBK_PHINIDKLKGJ_OFFSET UNITYSDK_OFFSET(0x1DC84BF0)
#define CINLPJBGEBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC847E0)
#define CINLPJBGEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC848C0)

inline static constexpr unsigned int CINLPJBGEBK_TypeDefinitionIndex = 94016;

class CINLPJBGEBK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DBEEELCGJOA*>* MHEADJKBEMO; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* LNJIHGFPNIJ; // 0x18
	::JGLIFHIAIEH JFIGOMDHKHD; // 0x20
	::MOAHGEJDEBE DKECPFBLLKJ; // 0x28
	::HexagonalLib::Coordinates::Offset MEKAFGFKKJD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_TOSTRING_OFFSET))(this);
	}

	::System::Void EFGOADGCJMA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CINLPJBGEBK_EFGOADGCJMA_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean DMCMGJNOJEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_DMCMGJNOJEC_OFFSET))(this);
	}

	::System::Void PHINIDKLKGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_PHINIDKLKGJ_OFFSET))(this);
	}

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_ELKAHJACJNC_OFFSET))(this);
	}

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Boolean JKAPFAPMAFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_JKAPFAPMAFN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_DPIHOJBBGLA_OFFSET))(this);
	}

	::DBEEELCGJOA* OHCIOOALOLB()
	{
		return ((::DBEEELCGJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_OHCIOOALOLB_OFFSET))(this);
	}

	::System::Boolean PDGKCONFFFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINLPJBGEBK_PDGKCONFFFD_OFFSET))(this);
	}
};
