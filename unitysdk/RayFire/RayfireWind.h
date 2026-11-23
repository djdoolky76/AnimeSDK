#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREWIND_A244F1954480A470_OFFSET UNITYSDK_OFFSET(0x29AD800)
#define RAYFIRE_RAYFIREWIND_A7C1C2EDA5B072BA_OFFSET UNITYSDK_OFFSET(0x29ACBE0)
#define RAYFIRE_RAYFIREWIND_A93706E90E53D4FE_OFFSET UNITYSDK_OFFSET(0x29ACCA0)
#define RAYFIRE_RAYFIREWIND_AB34718EA2D90A6B_OFFSET UNITYSDK_OFFSET(0x29AD5C0)
#define RAYFIRE_RAYFIREWIND_AC1DAC920E653FB6_OFFSET UNITYSDK_OFFSET(0x29AD1B0)
#define RAYFIRE_RAYFIREWIND_B9BC9EFEEDD9303F_OFFSET UNITYSDK_OFFSET(0x29ACDE0)
#define RAYFIRE_RAYFIREWIND_B9BEDB1ABDE8CD61_OFFSET UNITYSDK_OFFSET(0x29AD7B0)
#define RAYFIRE_RAYFIREWIND_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x29ACDD0)
#define RAYFIRE_RAYFIREWIND_BD87623221A3DEAB_OFFSET UNITYSDK_OFFSET(0x29ACE70)
#define RAYFIRE_RAYFIREWIND_BF128134802B6CC9_OFFSET UNITYSDK_OFFSET(0x29AC8B0)
#define RAYFIRE_RAYFIREWIND_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x29ACB60)
#define RAYFIRE_RAYFIREWIND_E2CC946755DF67F5_OFFSET UNITYSDK_OFFSET(0x29AC9C0)
#define RAYFIRE_RAYFIREWIND_E6248C257C1C7613_OFFSET UNITYSDK_OFFSET(0x29ACD80)
#define RAYFIRE_RAYFIREWIND_EF1151EAAD3C94BD_OFFSET UNITYSDK_OFFSET(0x29AD870)
#define RAYFIRE_RAYFIREWIND_F0233EA6A4EC9F1A_OFFSET UNITYSDK_OFFSET(0x29ACCF0)
#define RAYFIRE_RAYFIREWIND_F55563CD6239624B_OFFSET UNITYSDK_OFFSET(0x29AC930)
#define RAYFIRE_RAYFIREWIND_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29AC8B0)
#define RAYFIRE_RAYFIREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x29AD8B0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireWind_TypeDefinitionIndex = 15626;

	class RayfireWind : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* ABF768E1D71A14F9; // 0x20
		::Il2CppArray<::UnityEngine::Collider*>* BF60F20278E30FA8; // 0x28
		::UnityEngine::Vector3 FB4788466B852854; // 0x30
		::UnityEngine::Vector3 AD002A73C2E87633; // 0x3C
		::System::Single AB56931F1FA7CFB9; // 0x48
		::UnityEngine::Vector3 gizmoSize; // 0x4C
		::System::Boolean showGizmo; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single globalScale; // 0x5C
		::System::Single lengthScale; // 0x60
		::System::Single widthScale; // 0x64
		::System::Single speed; // 0x68
		::System::Boolean showNoise; // 0x6C
		::System::Byte _padding1[0x3];
		::System::Single minimum; // 0x70
		::System::Single maximum; // 0x74
		::System::Single torque; // 0x78
		::System::Boolean forceByMass; // 0x7C
		::System::Byte _padding2[0x3];
		::System::Single divergency; // 0x80
		::System::Single turbulence; // 0x84
		::System::Single previewDensity; // 0x88
		::System::Single previewSize; // 0x8C
		::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* rigidbodies; // 0x90
		::System::Int32 mask; // 0x98
		::System::Byte _padding3[0x4];
		::System::String* tagFilter; // 0xA0

		::System::Void B9BC9EFEEDD9303F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_B9BC9EFEEDD9303F_OFFSET))(this);
		}

		::System::Void AB34718EA2D90A6B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_AB34718EA2D90A6B_OFFSET))(this);
		}

		::System::Void AC1DAC920E653FB6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_AC1DAC920E653FB6_OFFSET))(this);
		}

		::System::Single F0233EA6A4EC9F1A(::UnityEngine::Vector3 E46F3C856E19A4B4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_F0233EA6A4EC9F1A_OFFSET))(this, E46F3C856E19A4B4);
		}

		::System::Void B9BEDB1ABDE8CD61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_B9BEDB1ABDE8CD61_OFFSET))(this);
		}

		::System::Single EF1151EAAD3C94BD(::System::Single E6A305882BEE348D)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_EF1151EAAD3C94BD_OFFSET))(this, E6A305882BEE348D);
		}

		::System::Single A93706E90E53D4FE(::UnityEngine::Vector3 F35540D578D5D440, ::System::Single F89EDF99AF2EE180, ::System::Single A331E6052D2C72B7, ::System::Single E30C7E55019CDC81, ::System::Single BDD1C0F3280CE88D, ::System::Single ABE062888042DD6C, ::System::Single A8FA03AB120F3647)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_A93706E90E53D4FE_OFFSET))(this, F35540D578D5D440, F89EDF99AF2EE180, A331E6052D2C72B7, E30C7E55019CDC81, BDD1C0F3280CE88D, ABE062888042DD6C, A8FA03AB120F3647);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Single A7C1C2EDA5B072BA(::UnityEngine::Vector3 E46F3C856E19A4B4, ::System::Single F89EDF99AF2EE180, ::System::Single A331E6052D2C72B7, ::System::Single E30C7E55019CDC81, ::System::Single BDD1C0F3280CE88D, ::System::Single ABE062888042DD6C, ::System::Single A8FA03AB120F3647)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_A7C1C2EDA5B072BA_OFFSET))(this, E46F3C856E19A4B4, F89EDF99AF2EE180, A331E6052D2C72B7, E30C7E55019CDC81, BDD1C0F3280CE88D, ABE062888042DD6C, A8FA03AB120F3647);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void BD87623221A3DEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_BD87623221A3DEAB_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::UnityEngine::Vector3 F55563CD6239624B(::UnityEngine::Vector3 E46F3C856E19A4B4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_F55563CD6239624B_OFFSET))(this, E46F3C856E19A4B4);
		}

		::System::Single E6248C257C1C7613(::UnityEngine::Vector3 F35540D578D5D440)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_E6248C257C1C7613_OFFSET))(this, F35540D578D5D440);
		}

		::System::Void BF128134802B6CC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_BF128134802B6CC9_OFFSET))(this);
		}

		::System::Collections::IEnumerator* A244F1954480A470()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_A244F1954480A470_OFFSET))(this);
		}

		::UnityEngine::Vector3 E2CC946755DF67F5(::UnityEngine::Vector3 F35540D578D5D440)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREWIND_E2CC946755DF67F5_OFFSET))(this, F35540D578D5D440);
		}
	};
}
