#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
#include "unitysdk/System/Object.h"

#define AA221CEAA045AD8D_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38074E0)
#define AA221CEAA045AD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x3807810)

inline static constexpr unsigned int AA221CEAA045AD8D_TypeDefinitionIndex = 17820;

class AA221CEAA045AD8D : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_AssetInfo BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::AA221CEAA045AD8D* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AA221CEAA045AD8D*))((::PBYTE)hIl2Cpp + AA221CEAA045AD8D_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_AssetInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_AssetInfo))((::PBYTE)hIl2Cpp + AA221CEAA045AD8D__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
