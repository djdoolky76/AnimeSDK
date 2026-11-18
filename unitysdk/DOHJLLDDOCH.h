#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/System/Object.h"

class EJHPHAKLPPF;
class KEABHJADMEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOHJLLDDOCH_ADAKBOCANNO_OFFSET UNITYSDK_OFFSET(0x13E64E50)
#define DOHJLLDDOCH_DEAPLILJLJD_OFFSET UNITYSDK_OFFSET(0x13E65230)
#define DOHJLLDDOCH_DGLGGCBOGEN_OFFSET UNITYSDK_OFFSET(0x13E64D20)
#define DOHJLLDDOCH_DIGMNAEDGBB_OFFSET UNITYSDK_OFFSET(0x13E64EB0)
#define DOHJLLDDOCH_EGFPNKPJGJB_OFFSET UNITYSDK_OFFSET(0x13E651D0)
#define DOHJLLDDOCH_FKDGKOFJEHJ_OFFSET UNITYSDK_OFFSET(0x13E65170)
#define DOHJLLDDOCH_HBBMCOMNFFD_OFFSET UNITYSDK_OFFSET(0x13E65060)
#define DOHJLLDDOCH_KHHBPEPKMEF_OFFSET UNITYSDK_OFFSET(0x13E650C0)
#define DOHJLLDDOCH_LEIDHDMEGOK_OFFSET UNITYSDK_OFFSET(0x13E65000)
#define DOHJLLDDOCH_MIKLMKPFOJL_OFFSET UNITYSDK_OFFSET(0x13E65120)
#define DOHJLLDDOCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13E64D10)

inline static constexpr unsigned int DOHJLLDDOCH_TypeDefinitionIndex = 49260;

class DOHJLLDDOCH : public ::System::Object
{
public:
	::System::Int32 FDOGGANACAP; // 0x10
	::System::Int32 OLMPJNOOEOI; // 0x14
	::DBGNNAMFJDL BHJDNIPGFGN; // 0x18

	::System::Void _ctor(::System::Int32 DMBMOMEKJFO, ::DBGNNAMFJDL BBDHPBAPPPI, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DBGNNAMFJDL, ::System::Int32))((::PBYTE)hIl2Cpp + DOHJLLDDOCH__CTOR_OFFSET))(this, DMBMOMEKJFO, BBDHPBAPPPI, MOBNMDEDJIP);
	}

	::KEABHJADMEK* DGLGGCBOGEN()
	{
		return ((::KEABHJADMEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_DGLGGCBOGEN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ADAKBOCANNO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_ADAKBOCANNO_OFFSET))(this);
	}

	::EJHPHAKLPPF* DIGMNAEDGBB()
	{
		return ((::EJHPHAKLPPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_DIGMNAEDGBB_OFFSET))(this);
	}

	::System::String* LEIDHDMEGOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_LEIDHDMEGOK_OFFSET))(this);
	}

	::System::String* HBBMCOMNFFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_HBBMCOMNFFD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* KHHBPEPKMEF()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_KHHBPEPKMEF_OFFSET))(this);
	}

	::System::Void MIKLMKPFOJL(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_MIKLMKPFOJL_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 FKDGKOFJEHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_FKDGKOFJEHJ_OFFSET))(this);
	}

	::System::String* EGFPNKPJGJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_EGFPNKPJGJB_OFFSET))(this);
	}

	::System::String* DEAPLILJLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHJLLDDOCH_DEAPLILJLJD_OFFSET))(this);
	}
};
