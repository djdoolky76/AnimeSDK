#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIIHCIMNNGN.h"
#include "unitysdk/System/Object.h"

class IKINJCIJHGI;
class LLCBKNBIGPP;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBMPCKAADBP_AMHPHCLIAAF_OFFSET UNITYSDK_OFFSET(0x1517EB90)
#define LBMPCKAADBP_CAIBDEOBOAJ_OFFSET UNITYSDK_OFFSET(0x1517E520)
#define LBMPCKAADBP_EIDFGIFBBDF_OFFSET UNITYSDK_OFFSET(0x1517DF60)
#define LBMPCKAADBP_FPEIDBBNOKO_OFFSET UNITYSDK_OFFSET(0x1517E000)
#define LBMPCKAADBP_HLDHJNIHOEE_OFFSET UNITYSDK_OFFSET(0x1517E5D0)
#define LBMPCKAADBP_IGFKJCHAFLD_OFFSET UNITYSDK_OFFSET(0x1517E620)
#define LBMPCKAADBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1517DF50)

inline static constexpr unsigned int LBMPCKAADBP_TypeDefinitionIndex = 91415;

class LBMPCKAADBP : public ::System::Object
{
public:
	::IKINJCIJHGI* CPEJDLKKAJE; // 0x10
	::System::Collections::Generic::List_1<::LLCBKNBIGPP*>* OLPGBFGCIMH; // 0x18
	::System::Action_1<::System::Single>* BOEAAAPPJHI; // 0x20
	::System::Boolean FNBFNGCGHDK; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single CBIACCMBCMI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMPCKAADBP__CTOR_OFFSET))(this);
	}

	::System::Void EIDFGIFBBDF(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBMPCKAADBP_EIDFGIFBBDF_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void FPEIDBBNOKO(::System::Single GFLFOMADNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBMPCKAADBP_FPEIDBBNOKO_OFFSET))(this, GFLFOMADNNP);
	}

	::System::Void CAIBDEOBOAJ(::JIIHCIMNNGN JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::JIIHCIMNNGN))((::PBYTE)hIl2Cpp + LBMPCKAADBP_CAIBDEOBOAJ_OFFSET))(this, JBCNPOHMGPE);
	}

	::System::Void HLDHJNIHOEE(::IKINJCIJHGI* CPEJDLKKAJE)
	{
		return ((::System::Void(*)(::PVOID, ::IKINJCIJHGI*))((::PBYTE)hIl2Cpp + LBMPCKAADBP_HLDHJNIHOEE_OFFSET))(this, CPEJDLKKAJE);
	}

	::System::Void IGFKJCHAFLD(::System::Single GFLFOMADNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBMPCKAADBP_IGFKJCHAFLD_OFFSET))(this, GFLFOMADNNP);
	}

	::System::Void AMHPHCLIAAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMPCKAADBP_AMHPHCLIAAF_OFFSET))(this);
	}
};
