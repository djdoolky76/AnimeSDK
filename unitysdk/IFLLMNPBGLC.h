#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraBackgroundData.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MFFGCMFIFNA;
namespace System { class Object; }

#define IFLLMNPBGLC_CCNDNFDJJCO_OFFSET UNITYSDK_OFFSET(0x15F17FC0)
#define IFLLMNPBGLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F18690)
#define IFLLMNPBGLC_JALBJFMCHEG_OFFSET UNITYSDK_OFFSET(0x15F175E0)
#define IFLLMNPBGLC_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15F17340)
#define IFLLMNPBGLC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15F174A0)

inline static constexpr unsigned int IFLLMNPBGLC_TypeDefinitionIndex = 47883;

	class IFLLMNPBGLC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MFFGCMFIFNA* ENNACIEALGC; // 0x10
		::RPGTools::Timeline::CRPCameraBackgroundData IODONKMPNHA; // 0x18
		::RPGTools::Timeline::CRPCameraBackgroundData EAIBFDAPANI; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLLMNPBGLC_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IFLLMNPBGLC_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IFLLMNPBGLC_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JALBJFMCHEG(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IFLLMNPBGLC_JALBJFMCHEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCNDNFDJJCO(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IFLLMNPBGLC_CCNDNFDJJCO_OFFSET))(this, a1, a2, a3);
		}

	};
