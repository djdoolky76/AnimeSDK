#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_PERSTATEPARAMBEAT_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F0F00)

namespace RPG::Client
{
	inline static constexpr unsigned int PerStateParamBeat_TypeDefinitionIndex = 72781;

	class PerStateParamBeat : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* StateAnimCurve; // 0x10
		::UnityEngine::Texture2D* StateTex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSTATEPARAMBEAT_CTOR_OFFSET))(this);
		}

	};
}
