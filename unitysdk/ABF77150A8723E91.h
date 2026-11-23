#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define ABF77150A8723E91_BE99066C89134B20_OFFSET UNITYSDK_OFFSET(0x1FAFD50)
#define ABF77150A8723E91_F3D0939C815E2204_OFFSET UNITYSDK_OFFSET(0x1FAFF70)

inline static constexpr unsigned int ABF77150A8723E91_TypeDefinitionIndex = 6828;

class ABF77150A8723E91 : public ::System::Object
{
public:
	static ::UnityEngine::AnimationClip* F3D0939C815E2204(::UnityEngine::Animation* EC3D053A71F5A850, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::UnityEngine::AnimationClip*(*)(::UnityEngine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + ABF77150A8723E91_F3D0939C815E2204_OFFSET))(EC3D053A71F5A850, B48C66E5FB2449C6);
	}

	static ::System::String* BE99066C89134B20(::UnityEngine::Animation* EC3D053A71F5A850)
	{
		return ((::System::String*(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + ABF77150A8723E91_BE99066C89134B20_OFFSET))(EC3D053A71F5A850);
	}
};
