#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFKIFKBJPKM.h"
#include "unitysdk/NDCAGIAJLEH.h"

class KGBFLHNJHHN;

#define NCBBLOBHDEE_DCLCAOONGKM_OFFSET UNITYSDK_OFFSET(0x19DBCE90)
#define NCBBLOBHDEE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBCE80)

inline static constexpr unsigned int NCBBLOBHDEE_TypeDefinitionIndex = 11112;

class NCBBLOBHDEE : public ::DFKIFKBJPKM
{
public:
	::System::Void _ctor(::NDCAGIAJLEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDCAGIAJLEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCBBLOBHDEE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean DCLCAOONGKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBBLOBHDEE_DCLCAOONGKM_OFFSET))(this);
	}
};
