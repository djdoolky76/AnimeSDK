#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

#define F01686D80E59170F_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387CD00)
#define F01686D80E59170F__CTOR_OFFSET UNITYSDK_OFFSET(0x387D620)

inline static constexpr unsigned int F01686D80E59170F_TypeDefinitionIndex = 18056;

class F01686D80E59170F : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_ParmInfo BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::F01686D80E59170F* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F01686D80E59170F*))((::PBYTE)hIl2Cpp + F01686D80E59170F_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_ParmInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + F01686D80E59170F__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
