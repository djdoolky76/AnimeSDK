#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"
class BOMMJNIPOLG;
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD924D50)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD924D00)

namespace RPG::Client
{
	class MusicVisualization_BeatEffectElementParticleSimple : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Boolean ValueAffectEmit; // 0x30
		::System::Boolean ValueAffectMat; // 0x31
		::System::Boolean ValueMapToColor; // 0x32
		::System::Boolean MapToChildsColor; // 0x33
		::System::Byte _padding0[0x4];
		::System::String* MatPropertyName; // 0x38
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x40
		::System::Int32 MatPropertyID; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _ParticleSystems; // 0x50
		::UnityEngine::ParticleSystemRenderer* _ParticleRender; // 0x58
		::System::Boolean _IsBeatEffectParticleSimpleInit; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_KFDMIOANNDO_OFFSET))(this, a1);
		}

	};
}
