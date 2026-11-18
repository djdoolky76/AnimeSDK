#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPKPBFBANE.h"
#include "unitysdk/System/Object.h"

#define NAAPJDKKGIF_BGFFOGLGILC_OFFSET UNITYSDK_OFFSET(0xE54D860)
#define NAAPJDKKGIF_FHEPDLDGLBB_OFFSET UNITYSDK_OFFSET(0xE54D820)
#define NAAPJDKKGIF_MAGODCAHOMC_OFFSET UNITYSDK_OFFSET(0xE54D7D0)

inline static constexpr unsigned int NAAPJDKKGIF_TypeDefinitionIndex = 49675;

class NAAPJDKKGIF : public ::System::Object
{
public:
	static ::System::Boolean MAGODCAHOMC(::DCPKPBFBANE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::DCPKPBFBANE))((::PBYTE)hIl2Cpp + NAAPJDKKGIF_MAGODCAHOMC_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean FHEPDLDGLBB(::DCPKPBFBANE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::DCPKPBFBANE))((::PBYTE)hIl2Cpp + NAAPJDKKGIF_FHEPDLDGLBB_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean BGFFOGLGILC(::DCPKPBFBANE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::DCPKPBFBANE))((::PBYTE)hIl2Cpp + NAAPJDKKGIF_BGFFOGLGILC_OFFSET))(OBNIAHNMHPF);
	}
};
