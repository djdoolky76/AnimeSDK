#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGIKAACNDFM.h"
#include "unitysdk/EPIAAKGJFMJ.h"

class FMOBMNFDBGO;
class KGBFLHNJHHN;

#define OLENFKEHAIC_LBNPODOOBGE_OFFSET UNITYSDK_OFFSET(0x1E4E3510)
#define OLENFKEHAIC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E4E3420)
#define OLENFKEHAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3410)

inline static constexpr unsigned int OLENFKEHAIC_TypeDefinitionIndex = 94281;

class OLENFKEHAIC : public ::DGIKAACNDFM
{
public:
	::System::Void _ctor(::EPIAAKGJFMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPIAAKGJFMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OLENFKEHAIC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::FMOBMNFDBGO* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMOBMNFDBGO*))((::PBYTE)hIl2Cpp + OLENFKEHAIC_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}

	::System::Int32 LBNPODOOBGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENFKEHAIC_LBNPODOOBGE_OFFSET))(this);
	}
};
