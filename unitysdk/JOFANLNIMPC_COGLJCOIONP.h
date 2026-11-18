#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGCAPDENJJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JOFANLNIMPC_JPKHGCEMGFK;

#define JOFANLNIMPC_COGLJCOIONP_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x13AE3AD0)
#define JOFANLNIMPC_COGLJCOIONP__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE3AC0)

inline static constexpr unsigned int JOFANLNIMPC_COGLJCOIONP_TypeDefinitionIndex = 54093;

class JOFANLNIMPC_COGLJCOIONP : public ::System::Object
{
public:
	::JOFANLNIMPC_JPKHGCEMGFK* FGBNBFHOKAA; // 0x10
	::DEGCAPDENJJ DENJNGAAIME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_COGLJCOIONP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 LJHDGNAEDIC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_COGLJCOIONP_LJHDGNAEDIC_OFFSET))(this);
	}
};
