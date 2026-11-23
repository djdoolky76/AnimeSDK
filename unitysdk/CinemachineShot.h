#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

class F85D883F5D6BA0DA;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CINEMACHINESHOT_FCCCD8E0FCCC6059_OFFSET UNITYSDK_OFFSET(0x2A38730)
#define CINEMACHINESHOT_FD141BF89DAF4942_OFFSET UNITYSDK_OFFSET(0x2A38880)
#define CINEMACHINESHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

inline static constexpr unsigned int CinemachineShot_TypeDefinitionIndex = 18310;

class CinemachineShot : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::System::String* DisplayName; // 0x18
	::UnityEngine::ExposedReference_1<::Cinemachine::CinemachineVirtualCameraBase*> VirtualCamera; // 0x20

	::FA1EDF0909FD0302::AE42330449B9EF25 FCCCD8E0FCCC6059(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
	{
		return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINESHOT_FCCCD8E0FCCC6059_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOT__CTOR_OFFSET))(this);
	}

	::System::Void FD141BF89DAF4942(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8, ::F85D883F5D6BA0DA* A9BAF281B87EFA01)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::F85D883F5D6BA0DA*))((::PBYTE)hIl2Cpp + CINEMACHINESHOT_FD141BF89DAF4942_OFFSET))(this, A9F0E1077186BAC8, A9BAF281B87EFA01);
	}
};
