#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace ABC::TechArt::Timeline::PostProcess { class PPGlitchTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2864440)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x17B7850)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x2864580)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int PPGlitchTimelineClip_TypeDefinitionIndex = 16007;

	class PPGlitchTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::PPGlitchTimelineBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}
	};
}
