#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/System/Object.h"

#define B00339FEEDAC17FC_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387C8E0)
#define B00339FEEDAC17FC__CTOR_OFFSET UNITYSDK_OFFSET(0x387CCB0)

inline static constexpr unsigned int B00339FEEDAC17FC_TypeDefinitionIndex = 18078;

class B00339FEEDAC17FC : public ::System::Object
{
public:
	::HoudiniEngineUnity::HAPI_NodeInfo BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::HoudiniEngineUnity::HAPI_NodeInfo BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_NodeInfo))((::PBYTE)hIl2Cpp + B00339FEEDAC17FC__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::B00339FEEDAC17FC* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B00339FEEDAC17FC*))((::PBYTE)hIl2Cpp + B00339FEEDAC17FC_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
