#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BBF56486E1969E72.h"
#include "unitysdk/UnityEngine/F91FAA8FB16EDFAA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFManDemolition; }
namespace RayFire { class RFMaterialPresets; }
namespace RayFire { class RFPoolingFragment; }
namespace RayFire { class RFPoolingParticles; }
namespace RayFire { class RFUny; }
namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREMAN_A03071D206C0B370_OFFSET UNITYSDK_OFFSET(0x29C70B0)
#define RAYFIRE_RAYFIREMAN_A2AF1083D3C41662_OFFSET UNITYSDK_OFFSET(0x29C6B50)
#define RAYFIRE_RAYFIREMAN_A6E82CC16E8A870B_OFFSET UNITYSDK_OFFSET(0x29C6840)
#define RAYFIRE_RAYFIREMAN_ACE5BEDF7ED0A093_OFFSET UNITYSDK_OFFSET(0x29C7A70)
#define RAYFIRE_RAYFIREMAN_AFAE52FE3E938016_OFFSET UNITYSDK_OFFSET(0x29C6CF0)
#define RAYFIRE_RAYFIREMAN_B189259ED0204660_OFFSET UNITYSDK_OFFSET(0x29C72A0)
#define RAYFIRE_RAYFIREMAN_B963969DA071D15F_OFFSET UNITYSDK_OFFSET(0x29C6FB0)
#define RAYFIRE_RAYFIREMAN_BA2E2A23560F7265_OFFSET UNITYSDK_OFFSET(0x29C7360)
#define RAYFIRE_RAYFIREMAN_E6FC22EDAE8FE94F_OFFSET UNITYSDK_OFFSET(0x29C6920)
#define RAYFIRE_RAYFIREMAN_ECB9E8C05A056BEC_OFFSET UNITYSDK_OFFSET(0x29C76A0)
#define RAYFIRE_RAYFIREMAN_EF6592DAF9FA02EC_OFFSET UNITYSDK_OFFSET(0x29C6BA0)
#define RAYFIRE_RAYFIREMAN_F12841DB54B709DF_OFFSET UNITYSDK_OFFSET(0x29C6D80)
#define RAYFIRE_RAYFIREMAN_F31383CCC30671B5_OFFSET UNITYSDK_OFFSET(0x29C6A10)
#define RAYFIRE_RAYFIREMAN_F551E2F185D594CE_OFFSET UNITYSDK_OFFSET(0x29C7490)
#define RAYFIRE_RAYFIREMAN_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x29C6DF0)
#define RAYFIRE_RAYFIREMAN_F70FA4CD0E3DBAB1_OFFSET UNITYSDK_OFFSET(0x29C67D0)
#define RAYFIRE_RAYFIREMAN_F7E03574F261254C_OFFSET UNITYSDK_OFFSET(0x29C6E00)
#define RAYFIRE_RAYFIREMAN_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29C6A00)
#define RAYFIRE_RAYFIREMAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x29C7810)
#define RAYFIRE_RAYFIREMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x29C7860)

namespace RayFire
{
	inline static constexpr unsigned int RayfireMan_TypeDefinitionIndex = 15710;

	class RayfireMan : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RayFire::RayfireMan** StaticGet_FC454C207F7B2B17()
		{
			return (::RayFire::RayfireMan**)Il2CppClass::FromTypeDefinitionIndex(RayfireMan_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_B2F050583DE01B11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RayfireMan_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_B8E16EAE97CEC1E4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RayfireMan_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		::System::Boolean setGravity; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single multiplier; // 0x24
		::UnityEngine::BBF56486E1969E72 interpolation; // 0x28
		::System::Single colliderSize; // 0x2C
		::UnityEngine::F91FAA8FB16EDFAA meshCollision; // 0x30
		::UnityEngine::F91FAA8FB16EDFAA clusterCollision; // 0x34
		::System::Single minimumMass; // 0x38
		::System::Single maximumMass; // 0x3C
		::RayFire::RFMaterialPresets* materialPresets; // 0x40
		::UnityEngine::GameObject* parent; // 0x48
		::System::Single globalSolidity; // 0x50
		::System::Single timeQuota; // 0x54
		::RayFire::RFManDemolition* advancedDemolitionProperties; // 0x58
		::RayFire::RFPoolingFragment* fragments; // 0x60
		::RayFire::RFPoolingParticles* particles; // 0x68
		::UnityEngine::Transform* transForm; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* layers; // 0x78
		::System::Single maxTimeThisFrame; // 0x80
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::RayFire::RFUny*>* unyList; // 0x88
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* A94F44CD506BAD34; // 0x90
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* FCD3B0F8628271D3; // 0x98

		static ::System::Void EF6592DAF9FA02EC(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::Transform* F64C72FFEBBF3A94, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_EF6592DAF9FA02EC_OFFSET))(F2C7FF5A19F78852, F64C72FFEBBF3A94, FF0A37159A523E06);
		}

		::System::Void A03071D206C0B370()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_A03071D206C0B370_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN__CTOR_OFFSET))(this);
		}

		static ::System::Void AFAE52FE3E938016()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_AFAE52FE3E938016_OFFSET))();
		}

		static ::System::Void A2AF1083D3C41662(::UnityEngine::GameObject* AD1247287D2D9217)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_A2AF1083D3C41662_OFFSET))(AD1247287D2D9217);
		}

		::System::Collections::IEnumerator* F70FA4CD0E3DBAB1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F70FA4CD0E3DBAB1_OFFSET))(this);
		}

		::System::Void E6FC22EDAE8FE94F(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_E6FC22EDAE8FE94F_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void F7E03574F261254C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F7E03574F261254C_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Boolean ACE5BEDF7ED0A093()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_ACE5BEDF7ED0A093_OFFSET))();
		}

		::System::Void B189259ED0204660()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_B189259ED0204660_OFFSET))(this);
		}

		::System::Void F551E2F185D594CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F551E2F185D594CE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN__CCTOR_OFFSET))();
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F12841DB54B709DF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F12841DB54B709DF_OFFSET))(this);
		}

		::System::Void ECB9E8C05A056BEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_ECB9E8C05A056BEC_OFFSET))(this);
		}

		::System::Void A6E82CC16E8A870B(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_A6E82CC16E8A870B_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void F31383CCC30671B5(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::Transform* F64C72FFEBBF3A94, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_F31383CCC30671B5_OFFSET))(F2C7FF5A19F78852, F64C72FFEBBF3A94, FF0A37159A523E06);
		}

		static ::System::Void BA2E2A23560F7265(::UnityEngine::Transform* F64C72FFEBBF3A94, ::UnityEngine::Transform* F04B0AB19820A7CA)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_BA2E2A23560F7265_OFFSET))(F64C72FFEBBF3A94, F04B0AB19820A7CA);
		}

		::System::Void B963969DA071D15F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREMAN_B963969DA071D15F_OFFSET))(this);
		}
	};
}
