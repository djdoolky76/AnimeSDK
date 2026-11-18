#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_MINOMIHCJMJ_KCIIIHMLHIN_OFFSET UNITYSDK_OFFSET(0x130A0000)
#define JOFANLNIMPC_MINOMIHCJMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1309FFF0)

inline static constexpr unsigned int JOFANLNIMPC_MINOMIHCJMJ_TypeDefinitionIndex = 54088;

class JOFANLNIMPC_MINOMIHCJMJ : public ::System::Object
{
public:
	::UnityEngine::Vector3 GOLIHAFJOJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MINOMIHCJMJ__CTOR_OFFSET))(this);
	}

	::System::Void KCIIIHMLHIN(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MINOMIHCJMJ_KCIIIHMLHIN_OFFSET))(this, LJBPECKCCEA);
	}
};
