#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A3E8606DDC090C06.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define FBB89EE7A9C83F06__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBB89EE7A9C83F06_TypeDefinitionIndex = 20405;

class FBB89EE7A9C83F06 : public ::System::Object
{
public:
	::UnityEngine::InputSystem::InputAction* B2EE017772780D09; // 0x10
	::BDC595893C6EE433::A3E8606DDC090C06 E4760A7ACFEA2835; // 0x18
	::System::Single BF0CF07C9EA380B5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBB89EE7A9C83F06__CTOR_OFFSET))(this);
	}
};
