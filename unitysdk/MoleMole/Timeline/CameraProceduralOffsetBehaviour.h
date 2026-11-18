#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CameraProceduralAxisSettings.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETBEHAVIOUR_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x18120D40)
#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18120D30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraProceduralOffsetBehaviour_TypeDefinitionIndex = 88299;

	class CameraProceduralOffsetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::CameraProceduralAxisSettings X; // 0x10
		::MoleMole::Timeline::CameraProceduralAxisSettings Y; // 0x40
		::MoleMole::Timeline::CameraProceduralAxisSettings Z; // 0x70
		::System::Int32 Seed; // 0xA0
		::System::Single Irregularity; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PKAFJHDJEDO(::System::Double FLMOEINCPOF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETBEHAVIOUR_PKAFJHDJEDO_OFFSET))(this, FLMOEINCPOF);
		}
	};
}
