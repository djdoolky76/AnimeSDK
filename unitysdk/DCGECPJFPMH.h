#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPODMIOFOKO.h"
#include "unitysdk/MONCJMOCIEM.h"

class ELMKLNLJBLI;
class KGBFLHNJHHN;

#define DCGECPJFPMH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E0FF670)
#define DCGECPJFPMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FF660)

inline static constexpr unsigned int DCGECPJFPMH_TypeDefinitionIndex = 94604;

class DCGECPJFPMH : public ::HPODMIOFOKO
{
public:
	::System::Void _ctor(::MONCJMOCIEM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MONCJMOCIEM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCGECPJFPMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::ELMKLNLJBLI* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELMKLNLJBLI*))((::PBYTE)hIl2Cpp + DCGECPJFPMH_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
