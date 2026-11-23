#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace ABC::Common::Timeline::Unity { class TimeDilationBehaviour; }
namespace UnityEngine { class GameObject; }

#define ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1EAAFA0)
#define ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1EAB150)
#define ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB0E0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int TimeDilationPlayableAsset_TypeDefinitionIndex = 6696;

	class TimeDilationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::ABC::Common::Timeline::Unity::TimeDilationBehaviour* template_; // 0x18

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}
	};
}
