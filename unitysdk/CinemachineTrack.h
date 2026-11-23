#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace UnityEngine { class GameObject; }

#define CINEMACHINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x2A95570)
#define CINEMACHINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95660)

inline static constexpr unsigned int CinemachineTrack_TypeDefinitionIndex = 18500;

class CinemachineTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::FA1EDF0909FD0302::AE42330449B9EF25 CreateTrackMixer(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* AD1247287D2D9217, ::System::Int32 E0526D776D4634F5)
	{
		return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINETRACK_CREATETRACKMIXER_OFFSET))(this, FF3BC15A84BE456D, AD1247287D2D9217, E0526D776D4634F5);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETRACK__CTOR_OFFSET))(this);
	}
};
