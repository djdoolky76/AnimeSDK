#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class EKPOLIPHPIK;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RPG_CUSTOMRP_CAPSULEOCCLUSION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE48F4E0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_CTOR_OFFSET UNITYSDK_OFFSET(0xE48F480)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE48E5A0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0xE48F400)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0xE48DEC0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_FBNOJIGHEPK_OFFSET UNITYSDK_OFFSET(0xE48E670)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_FORCESETLOCALLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xE48E880)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_HAJJGCFMCKO_OFFSET UNITYSDK_OFFSET(0xE48EEF0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_HBDBNICBHCO_OFFSET UNITYSDK_OFFSET(0xE48E8D0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_HMJGHMJJLEE_OFFSET UNITYSDK_OFFSET(0xE48EAC0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_IECIGPPKPLH_OFFSET UNITYSDK_OFFSET(0xE48E560)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE48E5E0)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE48F130)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETCAPSULELIGHTDIR_OFFSET UNITYSDK_OFFSET(0xE48E800)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SETDEFAULTBONES_OFFSET UNITYSDK_OFFSET(0xE48E240)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE48E500)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_TESTCAPSULEDIR_OFFSET UNITYSDK_OFFSET(0xE48E740)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xE48F240)

namespace RPG::CustomRP
{
	class CapsuleOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single occulusionScale; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* capsulesList; // 0x20
		::EKPOLIPHPIK* LNMKKMMMHMC; // 0x28
		::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x30
		::System::Boolean NOGLJEOIEOP; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* AEIENLCDEIL; // 0x40
		::System::Boolean EJIKFBCOJOJ; // 0x48
		::System::Boolean isOverride; // 0x49
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector3 lightDir; // 0x4C
		::UnityEngine::Mesh* smallBall; // 0x58
		static ::Il2CppArray<::System::String*>** StaticGet_NHFJELOCFOE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.CustomRP", "CapsuleOcclusion")->GetStaticField(0x52EA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_DCEODDLKNCI()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.CustomRP", "CapsuleOcclusion")->GetStaticField(0x52EA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_CCTOR_OFFSET))();
		}

		::System::Void EOCEFJFIJLK(::RPG::CustomRP::CapsuleOcclusion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CapsuleOcclusion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_EOCEFJFIJLK_OFFSET))(this, a1);
		}

		::System::Void SetDefaultBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SETDEFAULTBONES_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_ONDISABLE_OFFSET))(this);
		}

		::System::Void FBNOJIGHEPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_FBNOJIGHEPK_OFFSET))(this);
		}

		::System::Void TestCapsuleDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_TESTCAPSULEDIR_OFFSET))(this);
		}

		::System::Void setCapsuleLightDir(::System::Boolean a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_SETCAPSULELIGHTDIR_OFFSET))(this, a1, a2);
		}

		::System::Void ForceSetLocalLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_FORCESETLOCALLIGHTDIR_OFFSET))(this);
		}

		::System::Void HMJGHMJJLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_HMJGHMJJLEE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_UPDATE_OFFSET))(this);
		}

		::System::Void IECIGPPKPLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_IECIGPPKPLH_OFFSET))(this);
		}

		::System::Void HBDBNICBHCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_HBDBNICBHCO_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 HAJJGCFMCKO(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_HAJJGCFMCKO_OFFSET))(this, a1);
		}

		static ::System::Void DrawWireCapsule(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_DRAWWIRECAPSULE_OFFSET))(a1, a2, a3);
		}

	};
}
