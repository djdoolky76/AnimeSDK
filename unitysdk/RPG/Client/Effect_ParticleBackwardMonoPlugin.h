#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LMMIDDEFOAA;
namespace ParticleRecorder { class ParticleRecorders; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD59420)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD593D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleBackwardMonoPlugin_TypeDefinitionIndex = 70520;

	class Effect_ParticleBackwardMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* ParticlesBackwardDataPath; // 0x38
		::System::Boolean UseMotionEmmision; // 0x40
		::System::Byte _padding1[0x3];
		::System::Int32 LoopCycles; // 0x44
		::System::Boolean isLoop; // 0x48
		::System::Boolean useMaterialTimeReverse; // 0x49
		::System::Boolean isDebug; // 0x4A
		::System::Boolean AdaptFrameRate; // 0x4B
		::System::Single CutTime; // 0x4C
		::System::Boolean BackwardToForwardImmediate; // 0x50
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleRecorders*>* _DebugRecorder; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _MotionEmissionDebug; // 0x60
		::UnityEngine::AnimationCurve* positionX; // 0x68
		::UnityEngine::AnimationCurve* positionY; // 0x70
		::UnityEngine::AnimationCurve* positionZ; // 0x78
		::UnityEngine::AnimationCurve* particleAlpha; // 0x80
		::LMMIDDEFOAA* RuntimeRewindTrack; // 0x88
		::System::Single MotionTrackTotalTime; // 0x90
		::System::Boolean useRuntimeTrack; // 0x94
		::System::Byte _padding3[0x3];
		::System::Single gameTimeScale; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
