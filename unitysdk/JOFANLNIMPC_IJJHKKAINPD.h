#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_IJJHKKAINPD_BGCJAKOICKM_OFFSET UNITYSDK_OFFSET(0x18A28990)
#define JOFANLNIMPC_IJJHKKAINPD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A28980)

inline static constexpr unsigned int JOFANLNIMPC_IJJHKKAINPD_TypeDefinitionIndex = 54085;

class JOFANLNIMPC_IJJHKKAINPD : public ::System::Object
{
public:
	::System::Single OGMHMCOMLLM; // 0x10
	::UnityEngine::Vector2 NEIFLPGOOJK; // 0x14
	::UnityEngine::Vector3 GOLIHAFJOJP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_IJJHKKAINPD__CTOR_OFFSET))(this);
	}

	::System::Void BGCJAKOICKM(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_IJJHKKAINPD_BGCJAKOICKM_OFFSET))(this, LJBPECKCCEA);
	}
};
