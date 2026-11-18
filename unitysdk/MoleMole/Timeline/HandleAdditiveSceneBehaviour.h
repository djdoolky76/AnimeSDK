#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_HANDLEADDITIVESCENEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8800)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int HandleAdditiveSceneBehaviour_TypeDefinitionIndex = 84709;

	class HandleAdditiveSceneBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* scenePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_HANDLEADDITIVESCENEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
