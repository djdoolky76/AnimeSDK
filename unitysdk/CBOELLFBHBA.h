#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DPCFKFGNBKL;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CBOELLFBHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FE6400)
#define CBOELLFBHBA_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x18FE6000)
#define CBOELLFBHBA_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x18FE5F30)
#define CBOELLFBHBA_IBMBBJDHIJE_OFFSET UNITYSDK_OFFSET(0x18FE6160)
#define CBOELLFBHBA_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18FE6230)
#define CBOELLFBHBA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18FE5F50)
#define CBOELLFBHBA_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x18FE5F40)

inline static constexpr unsigned int CBOELLFBHBA_TypeDefinitionIndex = 49309;

	class CBOELLFBHBA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::DPCFKFGNBKL* CCHAMIHMEEF; // 0x10
		::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NCLIDDOOBGC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOELLFBHBA_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ScaleCharacterNodeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ScaleCharacterNodeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOELLFBHBA_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ScaleCharacterNodeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ScaleCharacterNodeClip*))((::PBYTE)hIl2Cpp + CBOELLFBHBA_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CBOELLFBHBA_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CBOELLFBHBA_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOELLFBHBA_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void IBMBBJDHIJE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBOELLFBHBA_IBMBBJDHIJE_OFFSET))(this, a1);
		}

	};
