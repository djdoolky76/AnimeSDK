#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::SpringBone { class SpringCollider; }
namespace ABC::SpringBone { class SpringManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ABC_SPRINGBONE_SPRINGBONE_A0BF2971F8B5C816_OFFSET UNITYSDK_OFFSET(0x224C790)
#define ABC_SPRINGBONE_SPRINGBONE_AA5A7324624C797C_1_OFFSET UNITYSDK_OFFSET(0x224C030)
#define ABC_SPRINGBONE_SPRINGBONE_AA5A7324624C797C_OFFSET UNITYSDK_OFFSET(0x224BE60)
#define ABC_SPRINGBONE_SPRINGBONE_ABEA2DDE709CE582_OFFSET UNITYSDK_OFFSET(0x224C220)
#define ABC_SPRINGBONE_SPRINGBONE_B6C33F170BEC58BF_OFFSET UNITYSDK_OFFSET(0x224BD20)
#define ABC_SPRINGBONE_SPRINGBONE_BA04C58B099C7F5D_OFFSET UNITYSDK_OFFSET(0x20A5040)
#define ABC_SPRINGBONE_SPRINGBONE_BA0D7F907273D495_OFFSET UNITYSDK_OFFSET(0x224E550)
#define ABC_SPRINGBONE_SPRINGBONE_E3D35E1DF0703470_OFFSET UNITYSDK_OFFSET(0x19392E0)
#define ABC_SPRINGBONE_SPRINGBONE_E7289A23E44B0144_OFFSET UNITYSDK_OFFSET(0x224C450)
#define ABC_SPRINGBONE_SPRINGBONE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x224C4D0)
#define ABC_SPRINGBONE_SPRINGBONE_F34BDE624D9B527C_OFFSET UNITYSDK_OFFSET(0x224C870)
#define ABC_SPRINGBONE_SPRINGBONE_F49FD96479E183EC_OFFSET UNITYSDK_OFFSET(0x224E530)
#define ABC_SPRINGBONE_SPRINGBONE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x224C0D0)
#define ABC_SPRINGBONE_SPRINGBONE_FE0125CDE457C86A_OFFSET UNITYSDK_OFFSET(0x224C370)
#define ABC_SPRINGBONE_SPRINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x224E4C0)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int SpringBone_TypeDefinitionIndex = 6919;

	class SpringBone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* child; // 0x20
		::UnityEngine::Vector3 boneAxis; // 0x28
		::System::Single radius; // 0x34
		::System::Single rootOffsetBlend; // 0x38
		::System::Boolean isUseEachBoneForceSettings; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single stiffnessForce; // 0x40
		::System::Single dragForce; // 0x44
		::UnityEngine::Vector3 springForce; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::ABC::SpringBone::SpringCollider*>* colliders; // 0x58
		::System::Single dynamicRatio; // 0x60
		::System::Boolean debug; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single EE01D767BBA54B9F; // 0x68
		::System::Byte _padding3[0x4];
		::UnityEngine::Transform* B4CD30D543ADB2BC; // 0x70
		::UnityEngine::Vector3 ABD95CC16B1951E3; // 0x78
		::UnityEngine::Vector3 B1AB0FD8ADDC4523; // 0x84
		::UnityEngine::Quaternion A5E84253382CCC10; // 0x90
		::UnityEngine::Quaternion E1B0B035C49DC907; // 0xA0
		::ABC::SpringBone::SpringManager* BB96EC10C4553AC7; // 0xB0
		::UnityEngine::Transform* F828E57BB1EB0369; // 0xB8
		::System::Boolean E35C5D59421D9E9E; // 0xC0
		::System::Byte _padding4[0x7];
		::Il2CppArray<::ABC::SpringBone::SpringCollider*>* AA57E350F7C0A919; // 0xC8
		::UnityEngine::Vector3 EE7F3E432D131ED8; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE__CTOR_OFFSET))(this);
		}

		::System::Void AA5A7324624C797C(::Il2CppArray<::ABC::SpringBone::SpringCollider*>* E828E972606C6C87)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ABC::SpringBone::SpringCollider*>*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_AA5A7324624C797C_OFFSET))(this, E828E972606C6C87);
		}

		::System::Void A0BF2971F8B5C816()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_A0BF2971F8B5C816_OFFSET))(this);
		}

		::System::Void E7289A23E44B0144()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_E7289A23E44B0144_OFFSET))(this);
		}

		::System::Void FE0125CDE457C86A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_FE0125CDE457C86A_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void F34BDE624D9B527C(::System::Single FC5F3297C6ED0D42, ::UnityEngine::Vector3 A1D4CA62EF9D99AB, ::UnityEngine::Vector3 BEE96F6C32962307)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_F34BDE624D9B527C_OFFSET))(this, FC5F3297C6ED0D42, A1D4CA62EF9D99AB, BEE96F6C32962307);
		}

		::System::Void AA5A7324624C797C_1(::System::Collections::Generic::List_1<::ABC::SpringBone::SpringCollider*>* E828E972606C6C87)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::SpringBone::SpringCollider*>*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_AA5A7324624C797C_1_OFFSET))(this, E828E972606C6C87);
		}

		::UnityEngine::Vector3 F49FD96479E183EC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_F49FD96479E183EC_OFFSET))(this);
		}

		::System::Single BA04C58B099C7F5D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_BA04C58B099C7F5D_OFFSET))(this);
		}

		::Il2CppArray<::ABC::SpringBone::SpringCollider*>* E3D35E1DF0703470()
		{
			return ((::Il2CppArray<::ABC::SpringBone::SpringCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_E3D35E1DF0703470_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B6C33F170BEC58BF(::ABC::SpringBone::SpringCollider* EA673E3ABE11B039)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::SpringBone::SpringCollider*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_B6C33F170BEC58BF_OFFSET))(this, EA673E3ABE11B039);
		}

		::ABC::SpringBone::SpringManager* ABEA2DDE709CE582(::UnityEngine::Transform* BBCFEC7DB309E927)
		{
			return ((::ABC::SpringBone::SpringManager*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_ABEA2DDE709CE582_OFFSET))(this, BBCFEC7DB309E927);
		}

		::UnityEngine::Vector3 BA0D7F907273D495()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGBONE_BA0D7F907273D495_OFFSET))(this);
		}
	};
}
