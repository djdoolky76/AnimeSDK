#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGOILLLFNBH;
class EnvLocalVolume;
class LocalAmbientVolume;
class LocalFogSphereInstance;
namespace RPG::Client { class BillboardController; }
namespace RPG::Client { class EasyFog; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_GOKDCHLDBDB; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FogEmissionBakeVolume; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_AOGFEKJFGKK_OFFSET UNITYSDK_OFFSET(0xE29EFB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_BHCMHOIKHML_OFFSET UNITYSDK_OFFSET(0xE2A0920)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE2A3810)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CJNEKAPBLKE_OFFSET UNITYSDK_OFFSET(0xE29F390)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A3E00)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GEOGNHJAFCG_OFFSET UNITYSDK_OFFSET(0xE29D070)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE29EDA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE2A3A20)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE2A30B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_MEJILMGLMOC_OFFSET UNITYSDK_OFFSET(0xE2A3AE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE2A3580)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_OGAECLAGLIK_OFFSET UNITYSDK_OFFSET(0xE29F590)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE2A3A80)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_ONPCHPCJNML_OFFSET UNITYSDK_OFFSET(0xE2A0490)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE2A31B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossLightsBehavior_TypeDefinitionIndex = 70229;

	class TimeSpaceCrisscrossLightsBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsRegisted; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* _LightsGroupA; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* _LightsGroupB; // 0x50
		::System::Int32 _TargetFollowConeID; // 0x58
		::System::Byte _padding1[0x4];
		::BGOILLLFNBH* _LightsQuadTreeA; // 0x60
		::BGOILLLFNBH* _LightsQuadTreeB; // 0x68
		::Il2CppArray<::LocalFogSphereInstance*>* _LocalFogGroupA; // 0x70
		::Il2CppArray<::LocalFogSphereInstance*>* _LocalFogGroupB; // 0x78
		::Il2CppArray<::VLB::VolumetricLightBeam*>* _VLBGroupA; // 0x80
		::Il2CppArray<::VLB::VolumetricLightBeam*>* _VLBGroupB; // 0x88
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleSystemRendererA; // 0x90
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleSystemRendererB; // 0x98
		::Il2CppArray<::RPG::Client::LineGlowLightMonoPlugin*>* _LineGlowA; // 0xA0
		::Il2CppArray<::RPG::Client::LineGlowLightMonoPlugin*>* _LineGlowB; // 0xA8
		::Il2CppArray<::RPG::Client::EasyFog*>* _EasyFogA; // 0xB0
		::Il2CppArray<::RPG::Client::EasyFog*>* _EasyFogB; // 0xB8
		::Il2CppArray<::LocalAmbientVolume*>* _LavA; // 0xC0
		::Il2CppArray<::LocalAmbientVolume*>* _LavB; // 0xC8
		::Il2CppArray<::RPG::Client::BillboardController*>* _BillboardControllderA; // 0xD0
		::Il2CppArray<::RPG::Client::BillboardController*>* _BillboardControllderB; // 0xD8
		::Il2CppArray<::UnityEngine::FogEmissionBakeVolume*>* _FogEmissionBakeVolumeA; // 0xE0
		::Il2CppArray<::UnityEngine::FogEmissionBakeVolume*>* _FogEmissionBakeVolumeB; // 0xE8
		::Il2CppArray<::EnvLocalVolume*>* _EnvLocalVolumeA; // 0xF0
		::Il2CppArray<::EnvLocalVolume*>* _EnvLocalVolumeB; // 0xF8
		::System::Collections::Generic::List_1<::System::Object*>* _QuadTreeQueryListA; // 0x100
		::System::Collections::Generic::List_1<::System::Object*>* _QuadTreeQueryListB; // 0x108
		::Il2CppArray<::UnityEngine::Plane>* PlaneA; // 0x110
		::Il2CppArray<::UnityEngine::Plane>* PlaneB; // 0x118
		::Il2CppArray<::UnityEngine::Plane>* PlaneC; // 0x120
		::Il2CppArray<::UnityEngine::Plane>* PlaneAIns; // 0x128
		::Il2CppArray<::UnityEngine::Plane>* PlaneBIns; // 0x130
		::Il2CppArray<::UnityEngine::Plane>* PlaneCIns; // 0x138
		::Il2CppArray<::System::Single>* _QuadTreeConeRect; // 0x140
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState _TSCState; // 0x148
		::System::Byte _padding2[0x4];
		::RPG::Client::TimeSpaceCrisscrossLightsBehavior_GOKDCHLDBDB* _FogDataA; // 0x150
		::RPG::Client::TimeSpaceCrisscrossLightsBehavior_GOKDCHLDBDB* _FogDataB; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void GEOGNHJAFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GEOGNHJAFCG_OFFSET))(this);
		}

		::System::Void AOGFEKJFGKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_AOGFEKJFGKK_OFFSET))(this);
		}

		::System::Void CJNEKAPBLKE(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4, ::Il2CppArray<::UnityEngine::Plane>* a5, ::Il2CppArray<::UnityEngine::Plane>* a6, ::Il2CppArray<::UnityEngine::Plane>* a7, ::Il2CppArray<::UnityEngine::Vector3>* a8, ::Il2CppArray<::UnityEngine::Vector3>* a9, ::Il2CppArray<::UnityEngine::Vector3>* a10, ::Il2CppArray<::UnityEngine::Vector3>* a11, ::Il2CppArray<::UnityEngine::Vector3>* a12, ::Il2CppArray<::UnityEngine::Vector3>* a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CJNEKAPBLKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void OGAECLAGLIK(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4, ::Il2CppArray<::UnityEngine::Plane>* a5, ::Il2CppArray<::UnityEngine::Plane>* a6, ::Il2CppArray<::UnityEngine::Plane>* a7, ::Il2CppArray<::UnityEngine::Vector3>* a8, ::Il2CppArray<::UnityEngine::Vector3>* a9, ::Il2CppArray<::UnityEngine::Vector3>* a10, ::Il2CppArray<::UnityEngine::Vector3>* a11, ::Il2CppArray<::UnityEngine::Vector3>* a12, ::Il2CppArray<::UnityEngine::Vector3>* a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_OGAECLAGLIK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void ONPCHPCJNML(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_ONPCHPCJNML_OFFSET))(this, a1);
		}

		::System::Void BHCMHOIKHML(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a16)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_BHCMHOIKHML_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void MEJILMGLMOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_MEJILMGLMOC_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossLightsMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossLightsMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
