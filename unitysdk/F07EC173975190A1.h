#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/System/Object.h"

#define F07EC173975190A1_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3897180)
#define F07EC173975190A1__CTOR_OFFSET UNITYSDK_OFFSET(0x38086F0)

inline static constexpr unsigned int F07EC173975190A1_TypeDefinitionIndex = 18119;

class F07EC173975190A1 : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_AttributeInfo BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::F07EC173975190A1* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F07EC173975190A1*))((::PBYTE)hIl2Cpp + F07EC173975190A1_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_AttributeInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + F07EC173975190A1__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
