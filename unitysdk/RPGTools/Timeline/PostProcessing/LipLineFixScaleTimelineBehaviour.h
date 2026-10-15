#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/LipLineFixParams.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DEBEAKKOHLN;
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_CBKEOJOFLPA_OFFSET UNITYSDK_OFFSET(0xE9255C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE925870)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_GET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xE9252A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_HDBPFGKEGBM_OFFSET UNITYSDK_OFFSET(0xE925790)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_NDILNGIHMEF_OFFSET UNITYSDK_OFFSET(0xE9253C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE925650)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE9252C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE925480)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xE9252B0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LipLineFixScaleTimelineBehaviour_TypeDefinitionIndex = 48581;

	class LipLineFixScaleTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean _AutoReset_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::RPGTools::Timeline::PostProcessing::LipLineFixParams LipLineParams; // 0x1C
		::System::Int32 _LipLineFixScaleID; // 0x20
		::System::Byte _padding1[0x4];
		::DEBEAKKOHLN* _GoRendererCache; // 0x28
		// static const ::System::Object _DEFAULT_LIPLINE_FIXSCALE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_GET_AUTORESET_OFFSET))(this);
		}

		::System::Void set_AutoReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_SET_AUTORESET_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void CBKEOJOFLPA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_CBKEOJOFLPA_OFFSET))(this, a1);
		}

		::System::Void NDILNGIHMEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_NDILNGIHMEF_OFFSET))(this);
		}

		::System::Void HDBPFGKEGBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINEBEHAVIOUR_HDBPFGKEGBM_OFFSET))(this);
		}

	};
}
