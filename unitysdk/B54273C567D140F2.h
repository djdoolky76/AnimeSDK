#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/System/Object.h"

#define B54273C567D140F2_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3821890)
#define B54273C567D140F2__CTOR_OFFSET UNITYSDK_OFFSET(0x38219D0)

inline static constexpr unsigned int B54273C567D140F2_TypeDefinitionIndex = 17893;

class B54273C567D140F2 : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_TransformEuler BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_TransformEuler BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_TransformEuler))((::PBYTE)hIl2Cpp + B54273C567D140F2__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::B54273C567D140F2* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B54273C567D140F2*))((::PBYTE)hIl2Cpp + B54273C567D140F2_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
