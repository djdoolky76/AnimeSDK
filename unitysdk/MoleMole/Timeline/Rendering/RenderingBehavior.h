#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline::Rendering { class RenderingSetting; }

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x14BD63C0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x14BD63E0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14BD6260)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14BD60D0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14BD6300)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x14BD63F0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x14BD63D0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x14BD61C0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD6370)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingBehavior_TypeDefinitionIndex = 49684;

	class RenderingBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::Rendering::RenderingSetting* setting; // 0x10
		::System::Boolean hasPrevSetting; // 0x18
		::System::Byte _padding0[0x7];
		::MoleMole::Timeline::Rendering::RenderingSetting* prevSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGBEHAVIOR_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
