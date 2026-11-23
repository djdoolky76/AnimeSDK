#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireSound; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Audio { class AudioMixerGroup; }

#define RAYFIRE_RFSOUND_ACTIVATIONSOUND_OFFSET UNITYSDK_OFFSET(0x29390F0)
#define RAYFIRE_RFSOUND_COPYROOTMESHSOUND_OFFSET UNITYSDK_OFFSET(0x2939370)
#define RAYFIRE_RFSOUND_DEMOLITIONSOUND_OFFSET UNITYSDK_OFFSET(0x2939530)
#define RAYFIRE_RFSOUND_FILTERCHECK_OFFSET UNITYSDK_OFFSET(0x29397B0)
#define RAYFIRE_RFSOUND_GET_HASCLIPS_OFFSET UNITYSDK_OFFSET(0x293A140)
#define RAYFIRE_RFSOUND_GEVOLUME_OFFSET UNITYSDK_OFFSET(0x29399A0)
#define RAYFIRE_RFSOUND_INITIALIZATIONSOUND_OFFSET UNITYSDK_OFFSET(0x2939A70)
#define RAYFIRE_RFSOUND_PLAY_OFFSET UNITYSDK_OFFSET(0x2939D00)
#define RAYFIRE_RFSOUND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2939FB0)
#define RAYFIRE_RFSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x2939FE0)

namespace RayFire
{
	inline static constexpr unsigned int RFSound_TypeDefinitionIndex = 15316;

	class RFSound : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single multiplier; // 0x14
		::UnityEngine::AudioClip* clip; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* clips; // 0x20
		::UnityEngine::Audio::AudioMixerGroup* outputGroup; // 0x28

		static ::System::Single GeVolume(::RayFire::RayfireSound* F2C7FF5A19F78852, ::System::Single F54AF627638DE3C9)
		{
			return ((::System::Single(*)(::RayFire::RayfireSound*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_GEVOLUME_OFFSET))(F2C7FF5A19F78852, F54AF627638DE3C9);
		}

		static ::System::Void DemolitionSound(::RayFire::RayfireSound* F2C7FF5A19F78852, ::System::Single F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::RayFire::RayfireSound*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_DEMOLITIONSOUND_OFFSET))(F2C7FF5A19F78852, F54AF627638DE3C9);
		}

		::System::Boolean get_HasClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_GET_HASCLIPS_OFFSET))(this);
		}

		static ::System::Void CopyRootMeshSound(::RayFire::RayfireRigid* AFE8F10692F5139F, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* AE6F379D49132D4B)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_COPYROOTMESHSOUND_OFFSET))(AFE8F10692F5139F, AE6F379D49132D4B);
		}

		static ::System::Void Play(::RayFire::RayfireSound* F2C7FF5A19F78852, ::UnityEngine::AudioClip* AD43DEAB8304398A, ::UnityEngine::Audio::AudioMixerGroup* BCECAFDA9510556A, ::System::Single B44B351D79166B65)
		{
			return ((::System::Void(*)(::RayFire::RayfireSound*, ::UnityEngine::AudioClip*, ::UnityEngine::Audio::AudioMixerGroup*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_PLAY_OFFSET))(F2C7FF5A19F78852, AD43DEAB8304398A, BCECAFDA9510556A, B44B351D79166B65);
		}

		static ::System::Void ActivationSound(::RayFire::RayfireSound* F2C7FF5A19F78852, ::System::Single F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::RayFire::RayfireSound*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_ACTIVATIONSOUND_OFFSET))(F2C7FF5A19F78852, F54AF627638DE3C9);
		}

		static ::System::Void InitializationSound(::RayFire::RayfireSound* F2C7FF5A19F78852, ::System::Single F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::RayFire::RayfireSound*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_INITIALIZATIONSOUND_OFFSET))(F2C7FF5A19F78852, F54AF627638DE3C9);
		}

		::System::Void _ctor(::RayFire::RFSound* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFSound*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND__CTOR_OFFSET))(this, AFE8F10692F5139F);
		}

		static ::System::Boolean FilterCheck(::RayFire::RayfireSound* F2C7FF5A19F78852, ::System::Single F54AF627638DE3C9)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireSound*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND_FILTERCHECK_OFFSET))(F2C7FF5A19F78852, F54AF627638DE3C9);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSOUND__CTOR_1_OFFSET))(this);
		}
	};
}
