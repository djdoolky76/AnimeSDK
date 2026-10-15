#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x1563A310)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x15635FF0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_DGNNCPFGJAK_OFFSET UNITYSDK_OFFSET(0x15635EE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_DLCHAGJCEAE_OFFSET UNITYSDK_OFFSET(0x1563A110)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_EOBKINCLBOG_OFFSET UNITYSDK_OFFSET(0x15639FC0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x15635070)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x15639EA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x15639F30)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x15639DF0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_PLKPGNCBOGH_1_OFFSET UNITYSDK_OFFSET(0x15637A20)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_PLKPGNCBOGH_OFFSET UNITYSDK_OFFSET(0x15635AC0)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1563A360)
#define ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x15636EC0)

namespace EnviromentSystemV2Space
{
	class ES_ParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		::System::Int32 m_MaxParticle; // 0x18
		::UnityEngine::Vector2 m_ParticleLifeTimeRange; // 0x1C
		::UnityEngine::Vector2 m_ParticleSizeRange; // 0x24
		::UnityEngine::Vector2 m_ParticlePositionRange; // 0x2C
		::System::Single m_ParticleSpeed; // 0x34
		::UnityEngine::Vector2Int m_MaterialSpriteTile; // 0x38
		::UnityEngine::Vector2Int m_MaterialSpriteTileRange; // 0x40
		::System::Single m_SpriteAspectRatio; // 0x48
		::System::Int32 m_RandomSeed; // 0x4C
		::UnityEngine::Material* m_Material; // 0x50
		::UnityEngine::Material* m_RenderMaterial; // 0x58
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x60
		::UnityEngine::ParticleSystemRenderer* m_ParticleSystemRenderer; // 0x68
		::UnityEngine::MaterialPropertyBlock* m_MatPropBlock; // 0x70
		::System::Int32 _MaterialSpriteTilesCount; // 0x78
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* EGBKMFOCNBN; // 0x80
		::Il2CppArray<::System::Object*>* EDAMIDLHCFN; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void DLCHAGJCEAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_DLCHAGJCEAE_OFFSET))(this);
		}

		::System::Void EOBKINCLBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_EOBKINCLBOG_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PLKPGNCBOGH()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_PLKPGNCBOGH_OFFSET))(this);
		}

		::System::Void PLKPGNCBOGH_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_PLKPGNCBOGH_1_OFFSET))(this, a1);
		}

		::System::Void DGNNCPFGJAK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_PARTICLECOMPONENT_DGNNCPFGJAK_OFFSET))(this, a1);
		}

	};
}
