#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_BHEPADJJJLB_OFFSET UNITYSDK_OFFSET(0xCD30200)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD30D80)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_FILEBFONMHM_OFFSET UNITYSDK_OFFSET(0xCD30710)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_NMFPKONJKJF_OFFSET UNITYSDK_OFFSET(0xCD30140)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_OBCJBJAFGOP_OFFSET UNITYSDK_OFFSET(0xCD2F540)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_PLBAJEPHHLL_OFFSET UNITYSDK_OFFSET(0xCD2F4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cone_TypeDefinitionIndex = 70490;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cone : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single BottomRadius; // 0x40
		::System::Single TopRadius; // 0x44
		::System::Single Height; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_CTOR_OFFSET))(this);
		}

		::System::Single PLBAJEPHHLL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_PLBAJEPHHLL_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds OBCJBJAFGOP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_OBCJBJAFGOP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NMFPKONJKJF()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_NMFPKONJKJF_OFFSET))(this);
		}

		::System::Void BHEPADJJJLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_BHEPADJJJLB_OFFSET))(this, a1);
		}

		::System::Void FILEBFONMHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_FILEBFONMHM_OFFSET))(this, a1);
		}

	};
}
