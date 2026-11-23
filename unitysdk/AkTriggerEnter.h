#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERENTER_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x2927A70)
#define AKTRIGGERENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerEnter_TypeDefinitionIndex = 20447;

class AkTriggerEnter : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x28

	::System::Void AEE2201EF3870E65(::UnityEngine::Collider* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGERENTER_AEE2201EF3870E65_OFFSET))(this, AA06AA4E70E7D273);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERENTER__CTOR_OFFSET))(this);
	}
};
