#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x189744B0)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_GET_REALPRIORITY_OFFSET UNITYSDK_OFFSET(0x18973E90)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x189744A0)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x18974490)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x18974050)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x18973EA0)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18974200)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18974480)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvironmentOverrideBehavior_TypeDefinitionIndex = 64716;

	class VisualEnvironmentOverrideBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::System::Int32 priority; // 0x18
		::System::Boolean isApplied; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* overrideConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_realPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_GET_REALPRIORITY_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}
	};
}
