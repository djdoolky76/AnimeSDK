#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class A0522E4C9CA72129; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONENTER_AB1441CA4D0BDD1D_OFFSET UNITYSDK_OFFSET(0x2927780)
#define AKTRIGGERCOLLISIONENTER_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x2927870)
#define AKTRIGGERCOLLISIONENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerCollisionEnter_TypeDefinitionIndex = 20466;

class AkTriggerCollisionEnter : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x28

	::System::Void AB1441CA4D0BDD1D(::UnityEngine::A0522E4C9CA72129* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::A0522E4C9CA72129*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_AB1441CA4D0BDD1D_OFFSET))(this, AA06AA4E70E7D273);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER__CTOR_OFFSET))(this);
	}

	::System::Void AEE2201EF3870E65(::UnityEngine::Collider* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_AEE2201EF3870E65_OFFSET))(this, AA06AA4E70E7D273);
	}
};
