#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BEFAHFNNFMF;
namespace MoleMole::Timeline { class UnitCompManagerParams; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A0B8F80)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x1A0B9100)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x1A0B9110)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A0B8E20)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0B8E80)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1A0B8DC0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0B8F70)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B8F20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnitCompManagerBehavior_TypeDefinitionIndex = 85563;

	class UnitCompManagerBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::GameObject* ReferenceObject; // 0x18
		::MoleMole::Timeline::UnitCompManagerParams* Params; // 0x20
		::BEFAHFNNFMF* initParams; // 0x28
		::System::Boolean isInit; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void CNHBDOMKKDE(::UnityEngine::GameObject* ICPNADIPFKI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_CNHBDOMKKDE_OFFSET))(this, ICPNADIPFKI);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}
	};
}
