#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define ABC_COMMON_TIMELINE_UNITY_RAWANIMATIONCLIPASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1EAA2B0)
#define ABC_COMMON_TIMELINE_UNITY_RAWANIMATIONCLIPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int RawAnimationClipAsset_TypeDefinitionIndex = 6701;

	class RawAnimationClipAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* Name; // 0x18

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_RAWANIMATIONCLIPASSET_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_RAWANIMATIONCLIPASSET__CTOR_OFFSET))(this);
		}
	};
}
