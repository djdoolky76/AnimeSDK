#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace EnviromentSystem { class EnviroGpuParticleProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x155ED1D0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AHNDNJDFPED_OFFSET UNITYSDK_OFFSET(0x155EFFE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x155EF810)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x155ED2E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0x155F03B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x155EF250)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155E94A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155E9360)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x155EAB40)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x155EE4C0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DNJIAAJGNMJ_OFFSET UNITYSDK_OFFSET(0x155E9CE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x155EA810)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x155EAE30)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x155E9880)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x155ECFE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x155ED430)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x155EF500)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x155E9D60)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_LPCOOHGAICK_OFFSET UNITYSDK_OFFSET(0x155E9BA0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_MIDBIIDBIMC_OFFSET UNITYSDK_OFFSET(0x155EFCB0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_ONGEFLHHCAG_OFFSET UNITYSDK_OFFSET(0x155ECB30)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155EA440)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty_TypeDefinitionIndex = 49600;

	class EnviroGpuParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Boolean OnlyInHighQuality; // 0x50
		::System::Boolean OccluderAsVolume; // 0x51
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::Object*>* m_GpuParticles; // 0x58
		::UnityEngine::Texture2D* PerlinNoise2D; // 0x60
		::UnityEngine::Texture2D* PerlinNoise3D; // 0x68
		::System::Boolean _Enable; // 0x70
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* tmpMaterial; // 0x78
		::Il2CppArray<::UnityEngine::Matrix4x4>* _OccludersMatrixArray; // 0x80
		static ::System::String** StaticGet__Noise2DPath()
		{
			return (::System::String**)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x48240);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>** StaticGet_GpuParticleOccluders()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>**)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x48248);
		}

		static ::System::String** StaticGet__Noise3DPath()
		{
			return (::System::String**)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x48250);
		}

		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D00);
		}

		static ::System::Int32* StaticGet__RangeMinOldShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D04);
		}

		static ::System::Int32* StaticGet__PositionTexShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D08);
		}

		static ::System::Int32* StaticGet__SpeedTexReadShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D0C);
		}

		static ::System::Int32* StaticGet__RangeMaxShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D10);
		}

		static ::System::Int32* StaticGet__WindZoneShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D14);
		}

		static ::System::Int32* StaticGet__NoiseTillingShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D18);
		}

		static ::System::Int32* StaticGet__RangeMaxOldShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D1C);
		}

		static ::System::Int32* StaticGet__NoiseTex2DShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D20);
		}

		static ::System::Int32* StaticGet__TimeShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D24);
		}

		static ::System::Int32* StaticGet__NoiseTexShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D28);
		}

		static ::System::Int32* StaticGet__GpuParticleOccluderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D2C);
		}

		static ::System::Int32* StaticGet__SpeedTexShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D30);
		}

		static ::System::Int32* StaticGet__RandomSizeShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D34);
		}

		static ::System::Int32* StaticGet__DeltaTimeShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D38);
		}

		static ::System::Int32* StaticGet__WindScaleShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D3C);
		}

		static ::System::Int32* StaticGet__PositionTexReadShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D40);
		}

		static ::System::Int32* StaticGet__RangeMinShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D44);
		}

		static ::System::Int32* StaticGet__NoiseScaleShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D48);
		}

		static ::System::Int32* StaticGet__WindZoneBBoxMaxPosShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D4C);
		}

		static ::System::Int32* StaticGet__WindGlobalShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D50);
		}

		static ::System::Int32* StaticGet__WindZoneBBoxMinPosShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D54);
		}

		static ::System::Int32* StaticGet__Occluder()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGpuParticleProperty")->GetStaticField(0x10D58);
		}

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGpuParticleProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGpuParticleProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CCTOR_OFFSET))();
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void LPCOOHGAICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_LPCOOHGAICK_OFFSET))(this);
		}

		::System::Void DNJIAAJGNMJ(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DNJIAAJGNMJ_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		static ::System::Void MIDBIIDBIMC(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_MIDBIIDBIMC_OFFSET))(a1);
		}

		static ::System::Void AHNDNJDFPED(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_AHNDNJDFPED_OFFSET))(a1);
		}

		::System::Void ONGEFLHHCAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_ONGEFLHHCAG_OFFSET))(this);
		}

	};
}
