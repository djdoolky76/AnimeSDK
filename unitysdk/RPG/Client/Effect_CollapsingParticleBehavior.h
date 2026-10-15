#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_CollapsingParticleMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD224D0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD224C0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD20B40)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD206D0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD22360)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD20800)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD207A0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD20BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_CollapsingParticleBehavior_TypeDefinitionIndex = 70435;

	class Effect_CollapsingParticleBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Mesh* m_SrcMesh; // 0x38
		::System::Boolean isPrototype; // 0x40
		::System::Boolean hasRegisterd; // 0x41
		static ::System::Collections::Generic::List_1<::RPG::Client::Effect_CollapsingParticleMonoPlugin*>** StaticGet_particleList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::Effect_CollapsingParticleMonoPlugin*>**)UnitySDK::FromName("RPG.Client", "Effect_CollapsingParticleBehavior")->GetStaticField(0x376E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_CollapsingParticleMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_CollapsingParticleMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
