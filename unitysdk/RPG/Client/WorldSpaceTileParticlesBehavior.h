#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE485540)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE483CD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE485530)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE484D50)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE483D30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE483AD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE483DF0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE483BD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE484DD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE483D90)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE484E30)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE483B60)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE484D90)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldSpaceTileParticlesBehavior_TypeDefinitionIndex = 70716;

	class WorldSpaceTileParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60
		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12460);
		}

		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12464);
		}

		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12468);
		}

		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x1246C);
		}

		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12470);
		}

		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12474);
		}

		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12478);
		}

		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x1247C);
		}

		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12480);
		}

		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0x12484);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OINBDMGFFJL_OFFSET))(this);
		}

		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::WorldSpaceTileParticlesMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
