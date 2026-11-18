#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAEHCGHCHLJ.h"
#include "unitysdk/System/Object.h"

#define PMDCGBCAOGL_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x1C664440)
#define PMDCGBCAOGL_AOLKFIKCNOH_OFFSET UNITYSDK_OFFSET(0x1C6643B0)
#define PMDCGBCAOGL_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x1C664400)

inline static constexpr unsigned int PMDCGBCAOGL_TypeDefinitionIndex = 65772;

class PMDCGBCAOGL : public ::System::Object
{
public:
	static ::System::Boolean AOLKFIKCNOH(::GAEHCGHCHLJ OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::GAEHCGHCHLJ))((::PBYTE)hIl2Cpp + PMDCGBCAOGL_AOLKFIKCNOH_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean PAJNCNHJDKM(::GAEHCGHCHLJ OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::GAEHCGHCHLJ))((::PBYTE)hIl2Cpp + PMDCGBCAOGL_PAJNCNHJDKM_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean AMGBGFDJNFG(::GAEHCGHCHLJ OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::GAEHCGHCHLJ))((::PBYTE)hIl2Cpp + PMDCGBCAOGL_AMGBGFDJNFG_OFFSET))(OBNIAHNMHPF);
	}
};
