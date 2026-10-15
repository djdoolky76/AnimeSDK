#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_BHEPADJJJLB_OFFSET UNITYSDK_OFFSET(0xCD2AF80)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2BA00)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_FILEBFONMHM_OFFSET UNITYSDK_OFFSET(0xCD2B400)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_NMFPKONJKJF_OFFSET UNITYSDK_OFFSET(0xCD2AEC0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_OBCJBJAFGOP_OFFSET UNITYSDK_OFFSET(0xCD2A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cylinder_TypeDefinitionIndex = 70489;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cylinder : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single Radius; // 0x40
		::System::Single Height; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds OBCJBJAFGOP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_OBCJBJAFGOP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NMFPKONJKJF()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_NMFPKONJKJF_OFFSET))(this);
		}

		::System::Void BHEPADJJJLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_BHEPADJJJLB_OFFSET))(this, a1);
		}

		::System::Void FILEBFONMHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_FILEBFONMHM_OFFSET))(this, a1);
		}

	};
}
