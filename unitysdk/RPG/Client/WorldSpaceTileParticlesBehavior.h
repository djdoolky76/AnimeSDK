#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE47AAD0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE479960)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE47AAC0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE47A9E0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE4799C0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE479040)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE479A80)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE479840)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE47AA60)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE479A20)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE479140)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE4790D0)
#define RPG_CLIENT_WORLDSPACETILEPARTICLESBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE47AA20)

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
		static ::System::Int32* StaticGet__ParticleColorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDD0);
		}

		static ::System::Int32* StaticGet__ParticleVelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDD4);
		}

		static ::System::Int32* StaticGet__BoundRotationID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDD8);
		}

		static ::System::Int32* StaticGet__BoundCenterID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDDC);
		}

		static ::System::Int32* StaticGet__BoundSizeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDE0);
		}

		static ::System::Int32* StaticGet__ParticleSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDE4);
		}

		static ::System::Int32* StaticGet__FogScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDE8);
		}

		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDEC);
		}

		static ::System::Int32* StaticGet__RandomseedID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDF0);
		}

		static ::System::Int32* StaticGet__FlickerFrequency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WorldSpaceTileParticlesBehavior")->GetStaticField(0xFDF4);
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
