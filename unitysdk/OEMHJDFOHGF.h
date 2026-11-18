#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNNJNDAGBPN.h"
#include "unitysdk/OCDAMJPJEGH.h"

class DECNGCAONIA;
class KGBFLHNJHHN;

#define OEMHJDFOHGF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E242970)
#define OEMHJDFOHGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E242960)

inline static constexpr unsigned int OEMHJDFOHGF_TypeDefinitionIndex = 94097;

class OEMHJDFOHGF : public ::CNNJNDAGBPN
{
public:
	::System::Void _ctor(::OCDAMJPJEGH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OCDAMJPJEGH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OEMHJDFOHGF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::DECNGCAONIA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::DECNGCAONIA*))((::PBYTE)hIl2Cpp + OEMHJDFOHGF_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
