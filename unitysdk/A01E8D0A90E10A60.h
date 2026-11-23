#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"

class B00339FEEDAC17FC;

#define A01E8D0A90E10A60_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3821800)

inline static constexpr unsigned int A01E8D0A90E10A60_TypeDefinitionIndex = 17909;

class A01E8D0A90E10A60 : public ::System::Object
{
public:
	static ::B00339FEEDAC17FC* F29687675C2F4BB9(::HoudiniEngineUnity::HAPI_NodeInfo BD8273AB04C4B760)
	{
		return ((::B00339FEEDAC17FC*(*)(::HoudiniEngineUnity::HAPI_NodeInfo))((::PBYTE)hIl2Cpp + A01E8D0A90E10A60_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
