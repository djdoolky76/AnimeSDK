#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGEREXIT_EA56B585EC35626E_OFFSET UNITYSDK_OFFSET(0x2927B60)
#define AKTRIGGEREXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerExit_TypeDefinitionIndex = 20469;

class AkTriggerExit : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x28

	::System::Void EA56B585EC35626E(::UnityEngine::Collider* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT_EA56B585EC35626E_OFFSET))(this, AA06AA4E70E7D273);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT__CTOR_OFFSET))(this);
	}
};
