#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/A44CE0F62A31B794.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A890D6840B279297;
namespace RayFire { class RFFlash; }
namespace RayFire { class RayfireDebris; }
namespace RayFire { class RayfireDust; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREGUN_A1923329073E4513_OFFSET UNITYSDK_OFFSET(0x293B5F0)
#define RAYFIRE_RAYFIREGUN_A3464F00FF09B0BF_OFFSET UNITYSDK_OFFSET(0x293C910)
#define RAYFIRE_RAYFIREGUN_A59DFBF2B6127940_OFFSET UNITYSDK_OFFSET(0x293A6F0)
#define RAYFIRE_RAYFIREGUN_A8EE7A7F1D12F8D7_OFFSET UNITYSDK_OFFSET(0x293AA20)
#define RAYFIRE_RAYFIREGUN_BD3C721B0B2BF179_OFFSET UNITYSDK_OFFSET(0x293C570)
#define RAYFIRE_RAYFIREGUN_E265A0259348600C_OFFSET UNITYSDK_OFFSET(0x293C1E0)
#define RAYFIRE_RAYFIREGUN_E2A22D610012E86F_OFFSET UNITYSDK_OFFSET(0x293C170)
#define RAYFIRE_RAYFIREGUN_E65FC1BE60DEC09B_OFFSET UNITYSDK_OFFSET(0x293C260)
#define RAYFIRE_RAYFIREGUN_EEF31E344F9C36FB_OFFSET UNITYSDK_OFFSET(0x293A9A0)
#define RAYFIRE_RAYFIREGUN_F0C7F516882D8683_OFFSET UNITYSDK_OFFSET(0x293A930)
#define RAYFIRE_RAYFIREGUN_F848ED3D5E535EC4_OFFSET UNITYSDK_OFFSET(0x293A1D0)
#define RAYFIRE_RAYFIREGUN_FC4AAF3C7F28762B_OFFSET UNITYSDK_OFFSET(0x293C270)
#define RAYFIRE_RAYFIREGUN_FCBCE1C2498E520F_OFFSET UNITYSDK_OFFSET(0x293B230)
#define RAYFIRE_RAYFIREGUN_FD5C5C4E9770FFAD_1_OFFSET UNITYSDK_OFFSET(0x293C0B0)
#define RAYFIRE_RAYFIREGUN_FD5C5C4E9770FFAD_OFFSET UNITYSDK_OFFSET(0x293BA80)
#define RAYFIRE_RAYFIREGUN_FD6D215711B566B8_OFFSET UNITYSDK_OFFSET(0x293C3F0)
#define RAYFIRE_RAYFIREGUN_FFB49B6F94481B72_OFFSET UNITYSDK_OFFSET(0x293A540)
#define RAYFIRE_RAYFIREGUN__CCTOR_OFFSET UNITYSDK_OFFSET(0x293C7A0)
#define RAYFIRE_RAYFIREGUN__CTOR_OFFSET UNITYSDK_OFFSET(0x293C800)

namespace RayFire
{
	inline static constexpr unsigned int RayfireGun_TypeDefinitionIndex = 15319;

	class RayfireGun : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_F668985A0C61279A()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RayfireGun_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::E33DBE3D45A5731A::A44CE0F62A31B794 axis; // 0x20
		::System::Single maxDistance; // 0x24
		::UnityEngine::Transform* target; // 0x28
		::System::Int32 rounds; // 0x30
		::System::Single rate; // 0x34
		::System::Single strength; // 0x38
		::System::Single radius; // 0x3C
		::System::Boolean demolishCluster; // 0x40
		::System::Boolean affectInactive; // 0x41
		::System::Boolean rigid; // 0x42
		::System::Boolean rigidRoot; // 0x43
		::System::Boolean rigidBody; // 0x44
		::System::Byte _padding0[0x3];
		::System::Single damage; // 0x48
		::System::Boolean debris; // 0x4C
		::System::Boolean dust; // 0x4D
		::System::Boolean flash; // 0x4E
		::System::Byte _padding1[0x1];
		::RayFire::RFFlash* Flash; // 0x50
		::System::Int32 mask; // 0x58
		::System::Byte _padding2[0x4];
		::System::String* tagFilter; // 0x60
		::System::Boolean showRay; // 0x68
		::System::Boolean showHit; // 0x69
		::System::Boolean shooting; // 0x6A
		::System::Byte _padding3[0x5];
		::A890D6840B279297* shotEvent; // 0x70
		::Il2CppArray<::UnityEngine::Collider*>* F3AB674B2CB1BFEC; // 0x78

		::System::Void FCBCE1C2498E520F(::RayFire::RayfireRigidRoot* FF596F94AD9FA6E7, ::UnityEngine::E99D0ADA759D15E2 FD38A9AB8BEA087C, ::UnityEngine::Vector3 ADE222A1D8BC6110, ::UnityEngine::Vector3 E9CED3583348210C)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigidRoot*, ::UnityEngine::E99D0ADA759D15E2, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FCBCE1C2498E520F_OFFSET))(this, FF596F94AD9FA6E7, FD38A9AB8BEA087C, ADE222A1D8BC6110, E9CED3583348210C);
		}

		::System::Void BD3C721B0B2BF179(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 B41A0C11273E0D9E)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_BD3C721B0B2BF179_OFFSET))(this, EB211B01816ACA79, B41A0C11273E0D9E);
		}

		::System::Void A1923329073E4513(::UnityEngine::Vector3 AA467C4C9EFA097A, ::UnityEngine::Vector3 E9CED3583348210C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_A1923329073E4513_OFFSET))(this, AA467C4C9EFA097A, E9CED3583348210C);
		}

		::System::Collections::IEnumerator* E2A22D610012E86F()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_E2A22D610012E86F_OFFSET))(this);
		}

		::System::Void FD5C5C4E9770FFAD(::UnityEngine::Vector3 AA467C4C9EFA097A, ::UnityEngine::Vector3 E9CED3583348210C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FD5C5C4E9770FFAD_OFFSET))(this, AA467C4C9EFA097A, E9CED3583348210C);
		}

		::System::Void E265A0259348600C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_E265A0259348600C_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN__CTOR_OFFSET))(this);
		}

		::System::Void FC4AAF3C7F28762B(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* B6807A927F2DFF31, ::UnityEngine::Vector3 B038E4A0878A50F2, ::UnityEngine::Vector3 E5918751FB23E61F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FC4AAF3C7F28762B_OFFSET))(this, B6807A927F2DFF31, B038E4A0878A50F2, E5918751FB23E61F);
		}

		::System::Void FD5C5C4E9770FFAD_1(::System::Int32 BA0B90ED14249367)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FD5C5C4E9770FFAD_1_OFFSET))(this, BA0B90ED14249367);
		}

		::UnityEngine::Vector3 A3464F00FF09B0BF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_A3464F00FF09B0BF_OFFSET))(this);
		}

		::System::Void EEF31E344F9C36FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_EEF31E344F9C36FB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* F848ED3D5E535EC4(::RayFire::RayfireRigid* B16923DFA6280089, ::UnityEngine::Vector3 EB211B01816ACA79)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*(*)(::PVOID, ::RayFire::RayfireRigid*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_F848ED3D5E535EC4_OFFSET))(this, B16923DFA6280089, EB211B01816ACA79);
		}

		::System::Void FFB49B6F94481B72(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* AF0CB4AFB094A2F4, ::UnityEngine::Vector3 ADE222A1D8BC6110, ::UnityEngine::Vector3 E9CED3583348210C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FFB49B6F94481B72_OFFSET))(this, AF0CB4AFB094A2F4, ADE222A1D8BC6110, E9CED3583348210C);
		}

		::System::Void A8EE7A7F1D12F8D7(::RayFire::RayfireRigid* AFF66E4B4025A501, ::UnityEngine::E99D0ADA759D15E2 FD38A9AB8BEA087C, ::UnityEngine::Vector3 ADE222A1D8BC6110, ::UnityEngine::Vector3 E9CED3583348210C)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*, ::UnityEngine::E99D0ADA759D15E2, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_A8EE7A7F1D12F8D7_OFFSET))(this, AFF66E4B4025A501, FD38A9AB8BEA087C, ADE222A1D8BC6110, E9CED3583348210C);
		}

		::System::Void FD6D215711B566B8(::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* A4D195DCB9F0E900, ::UnityEngine::Vector3 B038E4A0878A50F2, ::UnityEngine::Vector3 E5918751FB23E61F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RayfireDust*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_FD6D215711B566B8_OFFSET))(this, A4D195DCB9F0E900, B038E4A0878A50F2, E5918751FB23E61F);
		}

		::RayFire::RayfireRigid* A59DFBF2B6127940(::RayFire::RayfireRigid* AB43B715B33612D7, ::UnityEngine::E99D0ADA759D15E2 FD38A9AB8BEA087C, ::UnityEngine::Vector3 AA467C4C9EFA097A, ::UnityEngine::Vector3 E9CED3583348210C, ::UnityEngine::Vector3 ADE222A1D8BC6110)
		{
			return ((::RayFire::RayfireRigid*(*)(::PVOID, ::RayFire::RayfireRigid*, ::UnityEngine::E99D0ADA759D15E2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_A59DFBF2B6127940_OFFSET))(this, AB43B715B33612D7, FD38A9AB8BEA087C, AA467C4C9EFA097A, E9CED3583348210C, ADE222A1D8BC6110);
		}

		::System::Void E65FC1BE60DEC09B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_E65FC1BE60DEC09B_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F0C7F516882D8683()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREGUN_F0C7F516882D8683_OFFSET))(this);
		}
	};
}
