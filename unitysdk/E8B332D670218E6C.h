#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/System/Object.h"

#define E8B332D670218E6C_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x389A230)
#define E8B332D670218E6C__CTOR_OFFSET UNITYSDK_OFFSET(0x389A410)

inline static constexpr unsigned int E8B332D670218E6C_TypeDefinitionIndex = 18158;

class E8B332D670218E6C : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_ObjectInfo BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::E8B332D670218E6C* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E8B332D670218E6C*))((::PBYTE)hIl2Cpp + E8B332D670218E6C_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_ObjectInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ObjectInfo))((::PBYTE)hIl2Cpp + E8B332D670218E6C__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
