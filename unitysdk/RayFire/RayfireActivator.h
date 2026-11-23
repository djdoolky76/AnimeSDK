#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RayfireActivator_A14521A5060AA478.h"
#include "unitysdk/RayFire/RayfireActivator_AA430FF4BA6FCE52.h"
#include "unitysdk/RayFire/RayfireActivator_B77132648FA23ECC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class LineRenderer; }

#define RAYFIRE_RAYFIREACTIVATOR_A0A5A22B2B05BE60_OFFSET UNITYSDK_OFFSET(0x2993270)
#define RAYFIRE_RAYFIREACTIVATOR_A118BB32E64430EE_OFFSET UNITYSDK_OFFSET(0x29922D0)
#define RAYFIRE_RAYFIREACTIVATOR_A74FAB17B59817B7_OFFSET UNITYSDK_OFFSET(0x29926C0)
#define RAYFIRE_RAYFIREACTIVATOR_AEE2201EF3870E65_OFFSET UNITYSDK_OFFSET(0x29927C0)
#define RAYFIRE_RAYFIREACTIVATOR_B64E8269F9379877_OFFSET UNITYSDK_OFFSET(0x2992610)
#define RAYFIRE_RAYFIREACTIVATOR_BB463AF63AEB82DD_OFFSET UNITYSDK_OFFSET(0x29921D0)
#define RAYFIRE_RAYFIREACTIVATOR_BF0FA719E5135487_OFFSET UNITYSDK_OFFSET(0x2991E90)
#define RAYFIRE_RAYFIREACTIVATOR_E1F81722E296962B_OFFSET UNITYSDK_OFFSET(0x2993590)
#define RAYFIRE_RAYFIREACTIVATOR_E430D6D957B06EB7_OFFSET UNITYSDK_OFFSET(0x2993850)
#define RAYFIRE_RAYFIREACTIVATOR_E7CE398D5674F416_OFFSET UNITYSDK_OFFSET(0x2992840)
#define RAYFIRE_RAYFIREACTIVATOR_EA56B585EC35626E_OFFSET UNITYSDK_OFFSET(0x2992800)
#define RAYFIRE_RAYFIREACTIVATOR_EC4B5736CB5BB8B5_1_OFFSET UNITYSDK_OFFSET(0x29924D0)
#define RAYFIRE_RAYFIREACTIVATOR_EC4B5736CB5BB8B5_OFFSET UNITYSDK_OFFSET(0x2992580)
#define RAYFIRE_RAYFIREACTIVATOR_F2F9EFD207E9B597_OFFSET UNITYSDK_OFFSET(0x2992E80)
#define RAYFIRE_RAYFIREACTIVATOR_F33DDC7514EF3061_OFFSET UNITYSDK_OFFSET(0x29928E0)
#define RAYFIRE_RAYFIREACTIVATOR_F669CEFFB0548413_OFFSET UNITYSDK_OFFSET(0x2992940)
#define RAYFIRE_RAYFIREACTIVATOR_F848ED3D5E535EC4_OFFSET UNITYSDK_OFFSET(0x2991E60)
#define RAYFIRE_RAYFIREACTIVATOR_FCEF4315AAF7070D_OFFSET UNITYSDK_OFFSET(0x2993860)
#define RAYFIRE_RAYFIREACTIVATOR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2992240)
#define RAYFIRE_RAYFIREACTIVATOR_FE8D7081C1906CA9_OFFSET UNITYSDK_OFFSET(0x2992C20)
#define RAYFIRE_RAYFIREACTIVATOR_FFA58ADF7DF8398F_OFFSET UNITYSDK_OFFSET(0x2992E40)
#define RAYFIRE_RAYFIREACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x29939A0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireActivator_TypeDefinitionIndex = 15527;

	class RayfireActivator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireActivator_A14521A5060AA478 gizmoType; // 0x20
		::System::Single sphereRadius; // 0x24
		::UnityEngine::Vector3 boxSize; // 0x28
		::RayFire::RayfireActivator_B77132648FA23ECC type; // 0x34
		::System::Single delay; // 0x38
		::System::Boolean demolishCluster; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single duration; // 0x40
		::System::Single scaleAnimation; // 0x44
		::RayFire::RayfireActivator_AA430FF4BA6FCE52 positionAnimation; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::LineRenderer* line; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positionList; // 0x58
		::System::Boolean showGizmo; // 0x60
		::System::Boolean BB2F5EC8ADB3FE75; // 0x61
		::System::Byte _padding2[0x2];
		::System::Single BC9E62EA09413514; // 0x64
		::System::Single FDB0148C39B0C871; // 0x68
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Single>* B4C4A5279855C486; // 0x70
		::System::Single A7170E560C04F967; // 0x78
		::System::Single B37817FB029F5B34; // 0x7C
		::System::Single B297C1D48D08D7E2; // 0x80
		::System::Single F2423C105A4F9824; // 0x84
		::System::Single B7B351A473793DC5; // 0x88
		::System::Int32 FB280E0701A8961A; // 0x8C
		::UnityEngine::Vector3 F3D9D6B652896BFC; // 0x90
		::UnityEngine::Vector3 E8B72AECDD7EBEFC; // 0x9C

		::System::Void A0A5A22B2B05BE60()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_A0A5A22B2B05BE60_OFFSET))(this);
		}

		::System::Void F2F9EFD207E9B597()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_F2F9EFD207E9B597_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EC4B5736CB5BB8B5(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_EC4B5736CB5BB8B5_OFFSET))(this, E9D1ABA13C0D414F);
		}

		::System::Collections::IEnumerator* EC4B5736CB5BB8B5_1(::RayFire::RayfireRigidRoot* E88A7A0900B01658, ::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigidRoot*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_EC4B5736CB5BB8B5_1_OFFSET))(this, E88A7A0900B01658, F86513DEE5D16613);
		}

		::System::Void E1F81722E296962B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_E1F81722E296962B_OFFSET))(this);
		}

		::System::Void FE8D7081C1906CA9(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_FE8D7081C1906CA9_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Collections::IEnumerator* BB463AF63AEB82DD()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_BB463AF63AEB82DD_OFFSET))(this);
		}

		::System::Void AEE2201EF3870E65(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_AEE2201EF3870E65_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR__CTOR_OFFSET))(this);
		}

		::System::Void FCEF4315AAF7070D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_FCEF4315AAF7070D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* B64E8269F9379877(::RayFire::RayfireRigid* E9D1ABA13C0D414F, ::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_B64E8269F9379877_OFFSET))(this, E9D1ABA13C0D414F, F86513DEE5D16613);
		}

		::System::Void A118BB32E64430EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_A118BB32E64430EE_OFFSET))(this);
		}

		::System::Void EA56B585EC35626E(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_EA56B585EC35626E_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Void F33DDC7514EF3061()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_F33DDC7514EF3061_OFFSET))(this);
		}

		::System::Void F669CEFFB0548413(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_F669CEFFB0548413_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E7CE398D5674F416()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_E7CE398D5674F416_OFFSET))(this);
		}

		::System::Void BF0FA719E5135487(::UnityEngine::Vector3 B91EDB5A22893367)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_BF0FA719E5135487_OFFSET))(this, B91EDB5A22893367);
		}

		::System::Void F848ED3D5E535EC4(::UnityEngine::Collider* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_F848ED3D5E535EC4_OFFSET))(this, F86513DEE5D16613);
		}

		::System::Void FFA58ADF7DF8398F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_FFA58ADF7DF8398F_OFFSET))(this);
		}

		::System::Void E430D6D957B06EB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_E430D6D957B06EB7_OFFSET))(this);
		}

		::System::Int32 A74FAB17B59817B7(::System::Single E8FB214CD15F83F4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREACTIVATOR_A74FAB17B59817B7_OFFSET))(this, E8FB214CD15F83F4);
		}
	};
}
