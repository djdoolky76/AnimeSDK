#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x14BCBAD0)
#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x14BCBA60)
#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCBAB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ActiveExternalBehaviour_TypeDefinitionIndex = 42861;

	class ActiveExternalBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
