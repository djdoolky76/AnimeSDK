#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define MOLEMOLE_CAMERAS_NAPCAMERASHOT_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18B7BD40)
#define MOLEMOLE_CAMERAS_NAPCAMERASHOT_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B7BF40)
#define MOLEMOLE_CAMERAS_NAPCAMERASHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7C7E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapCameraShot_TypeDefinitionIndex = 66857;

	class NapCameraShot : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* DisplayName; // 0x18
		::UnityEngine::ExposedReference_1<::Cinemachine::CinemachineVirtualCameraBase*> VirtualCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCAMERASHOT_GATHERPROPERTIES_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}
	};
}
