#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJGKLAOFIEC.h"
#include "unitysdk/LLAPPKFHCKJ.h"
#include "unitysdk/System/Object.h"

#define IHPHDNGMKLG_DJEFBFFABBG_OFFSET UNITYSDK_OFFSET(0x13AA3B60)
#define IHPHDNGMKLG_NFGCIFPFDDD_OFFSET UNITYSDK_OFFSET(0x13AA3B20)

inline static constexpr unsigned int IHPHDNGMKLG_TypeDefinitionIndex = 56373;

class IHPHDNGMKLG : public ::System::Object
{
public:
	static ::GJGKLAOFIEC NFGCIFPFDDD(::LLAPPKFHCKJ OBNIAHNMHPF)
	{
		return ((::GJGKLAOFIEC(*)(::LLAPPKFHCKJ))((::PBYTE)hIl2Cpp + IHPHDNGMKLG_NFGCIFPFDDD_OFFSET))(OBNIAHNMHPF);
	}

	static ::LLAPPKFHCKJ DJEFBFFABBG(::GJGKLAOFIEC OBNIAHNMHPF)
	{
		return ((::LLAPPKFHCKJ(*)(::GJGKLAOFIEC))((::PBYTE)hIl2Cpp + IHPHDNGMKLG_DJEFBFFABBG_OFFSET))(OBNIAHNMHPF);
	}
};
