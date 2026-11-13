#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_RANDOMPLAYANIMATION_CBHOJFMADLO_OFFSET UNITYSDK_OFFSET(0x1D06B000)
#define RPG_CLIENT_RANDOMPLAYANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B090)
#define RPG_CLIENT_RANDOMPLAYANIMATION_START_OFFSET UNITYSDK_OFFSET(0x1D06AE80)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomPlayAnimation_TypeDefinitionIndex = 70764;

	class RandomPlayAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x18
		::Il2CppArray<::UnityEngine::AnimationClip*>* LFIEIDOKAJD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CBHOJFMADLO()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION_CBHOJFMADLO_OFFSET))(this);
		}

	};
}
