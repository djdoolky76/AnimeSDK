#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class A0522E4C9CA72129; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONEXIT_F405E63BF8DFA260_OFFSET UNITYSDK_OFFSET(0x2927960)
#define AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerCollisionExit_TypeDefinitionIndex = 20458;

class AkTriggerCollisionExit : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET))(this);
	}

	::System::Void F405E63BF8DFA260(::UnityEngine::A0522E4C9CA72129* AA06AA4E70E7D273)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::A0522E4C9CA72129*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT_F405E63BF8DFA260_OFFSET))(this, AA06AA4E70E7D273);
	}
};
