#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3DEC30)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x2EDF140)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C71990)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2E88BC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1F3DD980)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutput_TypeDefinitionIndex = 4923;

	struct alignas(4) PlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10
		static ::UnityEngine::Playables::PlayableOutput* StaticGet_m_NullPlayableOutput()
		{
			return (::UnityEngine::Playables::PlayableOutput*)UnitySDK::FromName("UnityEngine.Playables", "PlayableOutput")->GetStaticField(0x3C90);
		}

		/*
		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_CTOR_OFFSET))(this, a1);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Playables::PlayableOutput get_Null()
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET))();
		}
		*/

		/*
		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Playables::PlayableOutput a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
