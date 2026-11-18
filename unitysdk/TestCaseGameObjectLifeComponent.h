#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TESTCASEGAMEOBJECTLIFECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6BFBC0)
#define TESTCASEGAMEOBJECTLIFECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6BFB30)
#define TESTCASEGAMEOBJECTLIFECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BFC50)

inline static constexpr unsigned int TestCaseGameObjectLifeComponent_TypeDefinitionIndex = 85173;

class TestCaseGameObjectLifeComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTCASEGAMEOBJECTLIFECOMPONENT_ONDISABLE_OFFSET))(this);
	}
};
