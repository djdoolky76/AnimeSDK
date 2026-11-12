#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xE25E070)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_CTOR_OFFSET UNITYSDK_OFFSET(0xE25E230)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_FAJAHACNNOH_OFFSET UNITYSDK_OFFSET(0xE25DE40)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xE25DFE0)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xE25DA70)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_KBNLEBAEFIJ_OFFSET UNITYSDK_OFFSET(0xE25E0C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_NNOPFHDNCAF_OFFSET UNITYSDK_OFFSET(0xE25E020)
#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_OLEELCJCCLG_OFFSET UNITYSDK_OFFSET(0xE25DC60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSkinnedParticles_TypeDefinitionIndex = 71978;

	class MonoEffectPluginSkinnedParticles : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* ParticleConfigs; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Boolean FAJAHACNNOH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_FAJAHACNNOH_OFFSET))(this, a1);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void NNOPFHDNCAF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_NNOPFHDNCAF_OFFSET))(this, a1);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_CBKPMHCOCMH_OFFSET))(this);
		}

		::System::Void KBNLEBAEFIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_KBNLEBAEFIJ_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* OLEELCJCCLG(::System::String* a1)
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_OLEELCJCCLG_OFFSET))(this, a1);
		}

	};
}
