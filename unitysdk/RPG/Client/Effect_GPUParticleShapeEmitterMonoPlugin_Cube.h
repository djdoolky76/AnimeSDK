#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_BHEPADJJJLB_OFFSET UNITYSDK_OFFSET(0xCD29820)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD26620)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_FILEBFONMHM_OFFSET UNITYSDK_OFFSET(0xCD29CF0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_NMFPKONJKJF_OFFSET UNITYSDK_OFFSET(0xCD29760)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_OBCJBJAFGOP_OFFSET UNITYSDK_OFFSET(0xCD27FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cube_TypeDefinitionIndex = 70487;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cube : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::UnityEngine::Vector3 Size; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds OBCJBJAFGOP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_OBCJBJAFGOP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NMFPKONJKJF()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_NMFPKONJKJF_OFFSET))(this);
		}

		::System::Void BHEPADJJJLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_BHEPADJJJLB_OFFSET))(this, a1);
		}

		::System::Void FILEBFONMHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_FILEBFONMHM_OFFSET))(this, a1);
		}

	};
}
