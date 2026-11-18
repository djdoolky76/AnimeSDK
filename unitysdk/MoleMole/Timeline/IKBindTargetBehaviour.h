#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOKKBNGCBJL.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_IKBINDTARGETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18126750)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int IKBindTargetBehaviour_TypeDefinitionIndex = 56556;

	class IKBindTargetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::IOKKBNGCBJL ikType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* targetTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
