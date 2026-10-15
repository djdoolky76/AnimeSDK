#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOTIEMUQTE_CTOR_OFFSET UNITYSDK_OFFSET(0xD86A990)

namespace RPG::Client
{
	class MonoTieMuQTE : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Total; // 0x18
		::System::Single IncreasePerClick; // 0x1C
		::UnityEngine::AnimationCurve* IncreaseCurve; // 0x20
		::UnityEngine::AnimationCurve* DecreaseCurve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIEMUQTE_CTOR_OFFSET))(this);
		}

	};
}
