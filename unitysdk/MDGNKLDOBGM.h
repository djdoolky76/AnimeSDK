#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/COBABJOLFLG.h"
#include "unitysdk/HLLMHIAANOG.h"

class OOPBBMGPCLB;

#define MDGNKLDOBGM_NMNAPPHDOEL_OFFSET UNITYSDK_OFFSET(0x13D1AC80)
#define MDGNKLDOBGM_PLGJFPDLKHJ_OFFSET UNITYSDK_OFFSET(0x13D1AF60)

inline static constexpr unsigned int MDGNKLDOBGM_TypeDefinitionIndex = 82590;

class MDGNKLDOBGM : public ::System::Object
{
public:
	static ::OOPBBMGPCLB* NMNAPPHDOEL(::COBABJOLFLG& HFDCEKBJBHH)
	{
		return ((::OOPBBMGPCLB*(*)(::COBABJOLFLG&))((::PBYTE)hIl2Cpp + MDGNKLDOBGM_NMNAPPHDOEL_OFFSET))(HFDCEKBJBHH);
	}

	static ::OOPBBMGPCLB* PLGJFPDLKHJ(::HLLMHIAANOG& EBDJIHHBMGN)
	{
		return ((::OOPBBMGPCLB*(*)(::HLLMHIAANOG&))((::PBYTE)hIl2Cpp + MDGNKLDOBGM_PLGJFPDLKHJ_OFFSET))(EBDJIHHBMGN);
	}
};
