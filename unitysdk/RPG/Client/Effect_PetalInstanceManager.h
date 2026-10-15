#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class Effect_PetalInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0xCD553F0)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CBJBIPNAAKF_OFFSET UNITYSDK_OFFSET(0xCD551A0)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD55560)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD55550)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD55080)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_MMFIOKJJMJO_OFFSET UNITYSDK_OFFSET(0xCD54D80)
#define RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD54D30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PetalInstanceManager_TypeDefinitionIndex = 70531;

	class Effect_PetalInstanceManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* TargetMesh; // 0x18
		::UnityEngine::Material* TargetMat; // 0x20
		::UnityEngine::Color Color; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* BHCOBPEHBBD; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* PEIKACKENHJ; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Effect_PetalInstance*>* GBGADBJMECH; // 0x48
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x50
		static ::System::Int32* StaticGet_AMMOIPKBFIM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PetalInstanceManager")->GetStaticField(0xA800);
		}

		static ::System::Int32* StaticGet_PNLOFMICNKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PetalInstanceManager")->GetStaticField(0xA804);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void MMFIOKJJMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_MMFIOKJJMJO_OFFSET))(this);
		}

		::System::Void CBJBIPNAAKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_CBJBIPNAAKF_OFFSET))(this);
		}

		::System::Void ANFFLAJPOMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PETALINSTANCEMANAGER_ANFFLAJPOMN_OFFSET))(this);
		}

	};
}
