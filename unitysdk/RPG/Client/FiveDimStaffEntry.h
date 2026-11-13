#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FIVEDIMSTAFFENTRY_AWAKE_OFFSET UNITYSDK_OFFSET(0x19AD6B90)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x19AD7100)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_EONKNONKLFK_OFFSET UNITYSDK_OFFSET(0x19AD6E20)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_TRIGGERIN_OFFSET UNITYSDK_OFFSET(0x19AD6CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffEntry_TypeDefinitionIndex = 61683;

	class FiveDimStaffEntry : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::String* AnimTriggerOnPlayerEnter; // 0x18
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _ShapeParticles; // 0x20
		::System::String* EventOnPlayerEnter; // 0x28
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x30
		::UnityEngine::Animator* KCOAILOHDND; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_AWAKE_OFFSET))(this);
		}

		::System::Void TriggerIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_TRIGGERIN_OFFSET))(this);
		}

		::System::Void EONKNONKLFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_EONKNONKLFK_OFFSET))(this);
		}

	};
}
