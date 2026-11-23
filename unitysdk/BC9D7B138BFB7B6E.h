#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/System/Object.h"

#define BC9D7B138BFB7B6E_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387C520)
#define BC9D7B138BFB7B6E__CTOR_OFFSET UNITYSDK_OFFSET(0x387C8A0)

inline static constexpr unsigned int BC9D7B138BFB7B6E_TypeDefinitionIndex = 18075;

class BC9D7B138BFB7B6E : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_GeoInfo BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_GeoInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + BC9D7B138BFB7B6E__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::BC9D7B138BFB7B6E* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BC9D7B138BFB7B6E*))((::PBYTE)hIl2Cpp + BC9D7B138BFB7B6E_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
