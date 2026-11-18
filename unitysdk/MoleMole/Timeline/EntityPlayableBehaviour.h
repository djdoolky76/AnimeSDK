#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_BCIHDCHAEBI_OFFSET UNITYSDK_OFFSET(0x1896AD60)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_FLACDLGDEKF_OFFSET UNITYSDK_OFFSET(0x1896A9D0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1896A990)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GEBBNNFHKDO_OFFSET UNITYSDK_OFFSET(0x1896ABA0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1896B090)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1896B060)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1896B080)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_NJLOJHOGPGC_OFFSET UNITYSDK_OFFSET(0x1896AA10)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1896AAD0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1896AA50)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1896B000)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1896B070)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PHBKAICNMCH_OFFSET UNITYSDK_OFFSET(0x1896AF60)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1896AC00)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1896B050)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EntityPlayableBehaviour_TypeDefinitionIndex = 73402;

	class EntityPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* _bindingGameObject; // 0x10
		::MoleMole::Battle::Entity* _entity; // 0x18
		::System::Boolean _needPlay; // 0x20
		::System::Boolean _isPlaying; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void GALGFCPKMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GALGFCPKMGC_OFFSET))(this);
		}

		::System::Void FLACDLGDEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_FLACDLGDEKF_OFFSET))(this);
		}

		::System::Void NJLOJHOGPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_NJLOJHOGPGC_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PHBKAICNMCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PHBKAICNMCH_OFFSET))(this);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void GEBBNNFHKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_GEBBNNFHKDO_OFFSET))(this);
		}

		::System::Void BCIHDCHAEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_BCIHDCHAEBI_OFFSET))(this);
		}
	};
}
