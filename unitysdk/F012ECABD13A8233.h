#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"

class F01686D80E59170F;

#define F012ECABD13A8233_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3843320)

inline static constexpr unsigned int F012ECABD13A8233_TypeDefinitionIndex = 17932;

class F012ECABD13A8233 : public ::System::Object
{
public:
	static ::F01686D80E59170F* F29687675C2F4BB9(::HoudiniEngineUnity::HAPI_ParmInfo BD8273AB04C4B760)
	{
		return ((::F01686D80E59170F*(*)(::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + F012ECABD13A8233_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
