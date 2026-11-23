#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/E7B23211DE80AB79.h"
#include "unitysdk/RayFire/RayfireBlade_B3FE7A96AAECB5F7.h"
#include "unitysdk/RayFire/RayfireBlade_B85480612C26C1B5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FC3E703A0EE21C6A;
namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREBLADE_A2DE9A4948883D58_OFFSET UNITYSDK_OFFSET(0x2A112E0)
#define RAYFIRE_RAYFIREBLADE_A59DFBF2B6127940_OFFSET UNITYSDK_OFFSET(0x2A10D40)
#define RAYFIRE_RAYFIREBLADE_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x2A112F0)
#define RAYFIRE_RAYFIREBLADE_B0A74F43D20C435E_OFFSET UNITYSDK_OFFSET(0x18D3AF0)
#define RAYFIRE_RAYFIREBLADE_BF128134802B6CC9_OFFSET UNITYSDK_OFFSET(0x2A10DE0)
#define RAYFIRE_RAYFIREBLADE_EA56B585EC35626E_OFFSET UNITYSDK_OFFSET(0x2A11390)
#define RAYFIRE_RAYFIREBLADE_EB04BA542F56A1A6_OFFSET UNITYSDK_OFFSET(0x2A113A0)
#define RAYFIRE_RAYFIREBLADE_EECCEB616C6B3A86_OFFSET UNITYSDK_OFFSET(0x2A110E0)
#define RAYFIRE_RAYFIREBLADE_EEEEDF0334307A8F_OFFSET UNITYSDK_OFFSET(0x2A10D70)
#define RAYFIRE_RAYFIREBLADE_EFE4D6111C0D3562_OFFSET UNITYSDK_OFFSET(0x2A11500)
#define RAYFIRE_RAYFIREBLADE_F694EB4FE0C6198B_OFFSET UNITYSDK_OFFSET(0x2A112F0)
#define RAYFIRE_RAYFIREBLADE_F87389BD4E292B88_OFFSET UNITYSDK_OFFSET(0x2A11700)
#define RAYFIRE_RAYFIREBLADE_FB26124D1F17E2F4_OFFSET UNITYSDK_OFFSET(0x2A11190)
#define RAYFIRE_RAYFIREBLADE_FB7A652BA2590B0A_OFFSET UNITYSDK_OFFSET(0x2A10F70)
#define RAYFIRE_RAYFIREBLADE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2A10D60)
#define RAYFIRE_RAYFIREBLADE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A11980)

namespace RayFire
{
	inline static constexpr unsigned int RayfireBlade_TypeDefinitionIndex = 15933;

	class RayfireBlade : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireBlade_B85480612C26C1B5 actionType; // 0x20
		::RayFire::RayfireBlade_B3FE7A96AAECB5F7 onTrigger; // 0x24
		::E33DBE3D45A5731A::E7B23211DE80AB79 sliceType; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* target; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* targets; // 0x38
		::System::Single force; // 0x40
		::System::Boolean affectInactive; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single damage; // 0x48
		::System::Single cooldown; // 0x4C
		::UnityEngine::Transform* transForm; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* enterPlane; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* exitPlane; // 0x60
		::UnityEngine::Collider* colLider; // 0x68
		::System::Int32 mask; // 0x70
		::System::Byte _padding2[0x4];
		::System::String* tagFilter; // 0x78
		::System::Boolean coolDownState; // 0x80
		::System::Byte _padding3[0x7];
		::FC3E703A0EE21C6A* sliceEvent; // 0x88

		::Il2CppArray<::UnityEngine::Vector3>* FB26124D1F17E2F4()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_FB26124D1F17E2F4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void FB7A652BA2590B0A(::UnityEngine::GameObject* BE7F71B85CA41A2C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_FB7A652BA2590B0A_OFFSET))(this, BE7F71B85CA41A2C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE__CTOR_OFFSET))(this);
		}

		::System::Void BF128134802B6CC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_BF128134802B6CC9_OFFSET))(this);
		}

		::System::Void F694EB4FE0C6198B(::UnityEngine::Collider* E955C02910D334F4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_F694EB4FE0C6198B_OFFSET))(this, E955C02910D334F4);
		}

		::System::Void AEE2201EF3870E65(::UnityEngine::Collider* E955C02910D334F4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_AEE2201EF3870E65_OFFSET))(this, E955C02910D334F4);
		}

		::System::Boolean EECCEB616C6B3A86(::UnityEngine::GameObject* BE7F71B85CA41A2C)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_EECCEB616C6B3A86_OFFSET))(this, BE7F71B85CA41A2C);
		}

		::System::Boolean A59DFBF2B6127940(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Single EF0556457E94F108)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_A59DFBF2B6127940_OFFSET))(this, F2C7FF5A19F78852, EF0556457E94F108);
		}

		::System::Void F87389BD4E292B88(::UnityEngine::Collider* E955C02910D334F4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_F87389BD4E292B88_OFFSET))(this, E955C02910D334F4);
		}

		::System::Void B0A74F43D20C435E(::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_B0A74F43D20C435E_OFFSET))(this, E5EB06E4FD2C32F7);
		}

		::System::Void EB04BA542F56A1A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_EB04BA542F56A1A6_OFFSET))(this);
		}

		::System::Void EA56B585EC35626E(::UnityEngine::Collider* E955C02910D334F4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_EA56B585EC35626E_OFFSET))(this, E955C02910D334F4);
		}

		::System::Boolean A2DE9A4948883D58(::System::Int32 B93BF2A32BACA02F)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_A2DE9A4948883D58_OFFSET))(this, B93BF2A32BACA02F);
		}

		::System::Collections::IEnumerator* EEEEDF0334307A8F()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_EEEEDF0334307A8F_OFFSET))(this);
		}

		::System::Void EFE4D6111C0D3562(::UnityEngine::GameObject* BE7F71B85CA41A2C, ::Il2CppArray<::UnityEngine::Vector3>* EA2F00A6757C737E)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBLADE_EFE4D6111C0D3562_OFFSET))(this, BE7F71B85CA41A2C, EA2F00A6757C737E);
		}
	};
}
