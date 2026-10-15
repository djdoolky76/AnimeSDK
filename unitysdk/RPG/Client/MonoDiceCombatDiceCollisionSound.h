#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0xD74FFD0)
#define RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xD74FE00)

namespace RPG::Client
{
	class MonoDiceCombatDiceCollisionSound : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ShortestTriggerInterval; // 0x18
		::System::Single MaxVolumeCorrespondedRelativeVelocity; // 0x1C
		::System::Single MixVolumeCorrespondedRelativeVelocity; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* IPHJGLFDPEH; // 0x28
		::System::String* CDOKKOIGCHL; // 0x30
		::System::Single PFNHBMEJLAO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICECOLLISIONSOUND_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

	};
}
