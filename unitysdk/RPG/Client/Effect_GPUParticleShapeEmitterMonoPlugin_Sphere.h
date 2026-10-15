#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_BHEPADJJJLB_OFFSET UNITYSDK_OFFSET(0xCD36190)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD36B40)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_FILEBFONMHM_OFFSET UNITYSDK_OFFSET(0xCD36680)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_NMFPKONJKJF_OFFSET UNITYSDK_OFFSET(0xCD360D0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_OBCJBJAFGOP_OFFSET UNITYSDK_OFFSET(0xCD349C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Sphere_TypeDefinitionIndex = 70488;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Sphere : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single Radius; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds OBCJBJAFGOP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_OBCJBJAFGOP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NMFPKONJKJF()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_NMFPKONJKJF_OFFSET))(this);
		}

		::System::Void FILEBFONMHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_FILEBFONMHM_OFFSET))(this, a1);
		}

		::System::Void BHEPADJJJLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_BHEPADJJJLB_OFFSET))(this, a1);
		}

	};
}
