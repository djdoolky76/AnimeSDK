#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_MBOPBOHOONE_FEJDCJMBNID_OFFSET UNITYSDK_OFFSET(0x15B75190)
#define JOFANLNIMPC_MBOPBOHOONE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B75180)

inline static constexpr unsigned int JOFANLNIMPC_MBOPBOHOONE_TypeDefinitionIndex = 54089;

class JOFANLNIMPC_MBOPBOHOONE : public ::System::Object
{
public:
	::UnityEngine::Vector2 CENABHEMOKI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MBOPBOHOONE__CTOR_OFFSET))(this);
	}

	::System::Void FEJDCJMBNID(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MBOPBOHOONE_FEJDCJMBNID_OFFSET))(this, LJBPECKCCEA);
	}
};
