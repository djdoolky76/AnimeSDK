#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace TA::EnvironmentSystem::Timeline { class ESPatchPhaseBehaviour; }
namespace UnityEngine { class GameObject; }

#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x28B27F0)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x27FF630)
#define TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x28B2930)

namespace TA::EnvironmentSystem::Timeline
{
	inline static constexpr unsigned int ESPatchPhaseClip_TypeDefinitionIndex = 16274;

	class ESPatchPhaseClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean EditorDisplayLableAsESPName; // 0x18
		::System::Byte _padding0[0x7];
		::TA::EnvironmentSystem::Timeline::ESPatchPhaseBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP__CTOR_OFFSET))(this);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_TIMELINE_ESPATCHPHASECLIP_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}
	};
}
