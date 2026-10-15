#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class FlowerRingScatterMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0491D0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD047FB0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD0491C0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD0490A0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD048010)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD047690)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xD0480D0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD047E90)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD049160)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD048070)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xD047790)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD047720)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD049120)

namespace RPG::Client
{
	inline static constexpr unsigned int FlowerRingScatterBehavior_TypeDefinitionIndex = 70605;

	class FlowerRingScatterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60
		static ::System::Int32* StaticGet__GrowProgress()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14220);
		}

		static ::System::Int32* StaticGet__RandomColor0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14224);
		}

		static ::System::Int32* StaticGet_ParticleSizeMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14228);
		}

		static ::System::Int32* StaticGet__RingThickness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x1422C);
		}

		static ::System::Int32* StaticGet__ParticleRotationMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14230);
		}

		static ::System::Int32* StaticGet__DissolveSmoothness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14234);
		}

		static ::System::Int32* StaticGet__DissolveTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14238);
		}

		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x1423C);
		}

		static ::System::Int32* StaticGet__RandomColor1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14240);
		}

		static ::System::Int32* StaticGet__RingRadius()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14244);
		}

		static ::System::Int32* StaticGet__DissolveTile()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14248);
		}

		static ::System::Int32* StaticGet__DissolveProgress()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x1424C);
		}

		static ::System::Int32* StaticGet__GrowRandomSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14250);
		}

		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14254);
		}

		static ::System::Int32* StaticGet_ParticleSizeMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x14258);
		}

		static ::System::Int32* StaticGet__ParticleRotationMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "FlowerRingScatterBehavior")->GetStaticField(0x1425C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_OINBDMGFFJL_OFFSET))(this);
		}

		::RPG::Client::FlowerRingScatterMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::FlowerRingScatterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
