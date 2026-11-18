#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collision2D; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION2D_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x177DF800)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x177DFB20)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundScene_Collision2D_TypeDefinitionIndex = 49329;

	class MonoSoundScene_Collision2D : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single threshold; // 0x18
		::System::Single cooldown; // 0x1C
		::System::Single AEKJCPMNIBB; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* collisionEventName; // 0x28
		::System::String* collisionRTPCName; // 0x30
		::System::Single maxRelativeVelocity; // 0x38
		::System::Boolean showLog; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION2D__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_COLLISION2D_ONCOLLISIONENTER2D_OFFSET))(this, GMKILPBDCFN);
		}
	};
}
