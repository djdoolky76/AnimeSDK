#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RayfireBomb_A1466F9E20197644.h"
#include "unitysdk/RayFire/RayfireBomb_AAC3287C47C3DDE5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class E61210BA712BA156;
namespace RayFire { class RayfireBomb_Projectile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREBOMB_A7FAEED9D65B9195_OFFSET UNITYSDK_OFFSET(0x295DA20)
#define RAYFIRE_RAYFIREBOMB_AC1DAC920E653FB6_OFFSET UNITYSDK_OFFSET(0x295CF20)
#define RAYFIRE_RAYFIREBOMB_B00E4137AA67505C_OFFSET UNITYSDK_OFFSET(0x295C8E0)
#define RAYFIRE_RAYFIREBOMB_B4AD6582E095BF8D_OFFSET UNITYSDK_OFFSET(0x295C3F0)
#define RAYFIRE_RAYFIREBOMB_B4F9A8D013BCC2D6_OFFSET UNITYSDK_OFFSET(0x295DB30)
#define RAYFIRE_RAYFIREBOMB_BBDA5DE54ED5D6E7_OFFSET UNITYSDK_OFFSET(0x295D320)
#define RAYFIRE_RAYFIREBOMB_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x295C4B0)
#define RAYFIRE_RAYFIREBOMB_BD87623221A3DEAB_OFFSET UNITYSDK_OFFSET(0x295CE60)
#define RAYFIRE_RAYFIREBOMB_BEF1833396953486_OFFSET UNITYSDK_OFFSET(0x295D1C0)
#define RAYFIRE_RAYFIREBOMB_BF128134802B6CC9_OFFSET UNITYSDK_OFFSET(0x295C540)
#define RAYFIRE_RAYFIREBOMB_E0F87A836674ED8D_OFFSET UNITYSDK_OFFSET(0x295CBA0)
#define RAYFIRE_RAYFIREBOMB_E3C8347BF6367BF3_1_OFFSET UNITYSDK_OFFSET(0x295C600)
#define RAYFIRE_RAYFIREBOMB_E3C8347BF6367BF3_OFFSET UNITYSDK_OFFSET(0x295C690)
#define RAYFIRE_RAYFIREBOMB_E5B1C943BFF94207_OFFSET UNITYSDK_OFFSET(0x295D7B0)
#define RAYFIRE_RAYFIREBOMB_EAE53101AB058546_OFFSET UNITYSDK_OFFSET(0x295D3C0)
#define RAYFIRE_RAYFIREBOMB_F035ACEA661820F3_OFFSET UNITYSDK_OFFSET(0x295C590)
#define RAYFIRE_RAYFIREBOMB_F6527C0E78E6CFE5_OFFSET UNITYSDK_OFFSET(0x295CAD0)
#define RAYFIRE_RAYFIREBOMB_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x295C390)
#define RAYFIRE_RAYFIREBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x295DCD0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireBomb_TypeDefinitionIndex = 15441;

	class RayfireBomb : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireBomb_A1466F9E20197644 rangeType; // 0x20
		::RayFire::RayfireBomb_AAC3287C47C3DDE5 fadeType; // 0x24
		::System::Single range; // 0x28
		::System::Single strength; // 0x2C
		::System::Int32 variation; // 0x30
		::System::Int32 chaos; // 0x34
		::System::Boolean forceByMass; // 0x38
		::System::Boolean affectKinematic; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single heightOffset; // 0x3C
		::System::Single delay; // 0x40
		::System::Boolean destroy; // 0x44
		::System::Boolean applyDamage; // 0x45
		::System::Byte _padding1[0x2];
		::System::Single damageValue; // 0x48
		::System::Boolean play; // 0x4C
		::System::Byte _padding2[0x3];
		::System::Single volume; // 0x50
		::System::Byte _padding3[0x4];
		::UnityEngine::AudioClip* clip; // 0x58
		::E61210BA712BA156* explosionEvent; // 0x60
		::UnityEngine::Transform* transForm; // 0x68
		::UnityEngine::Vector3 bombPosition; // 0x70
		::UnityEngine::Vector3 explPosition; // 0x7C
		::Il2CppArray<::UnityEngine::Collider*>* colliders; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* projectiles; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* rigidbodies; // 0x98
		::System::Boolean showGizmo; // 0xA0
		::System::Byte _padding4[0x3];
		::System::Int32 mask; // 0xA4
		::System::String* tagFilter; // 0xA8

		::UnityEngine::Vector3 B4F9A8D013BCC2D6(::RayFire::RayfireBomb_Projectile* E2435E9647A378EC)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RayFire::RayfireBomb_Projectile*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_B4F9A8D013BCC2D6_OFFSET))(this, E2435E9647A378EC);
		}

		::System::Boolean E5B1C943BFF94207()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_E5B1C943BFF94207_OFFSET))(this);
		}

		::System::Void E0F87A836674ED8D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_E0F87A836674ED8D_OFFSET))(this);
		}

		::System::Void BC7F534A8275D79E(::RayFire::RayfireBomb* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBomb*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_BC7F534A8275D79E_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Collections::IEnumerator* F035ACEA661820F3()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_F035ACEA661820F3_OFFSET))(this);
		}

		::System::Void EAE53101AB058546()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_EAE53101AB058546_OFFSET))(this);
		}

		::System::Boolean A7FAEED9D65B9195()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_A7FAEED9D65B9195_OFFSET))(this);
		}

		::System::Void BEF1833396953486(::RayFire::RayfireBomb_Projectile* E2435E9647A378EC)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBomb_Projectile*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_BEF1833396953486_OFFSET))(this, E2435E9647A378EC);
		}

		::System::Single B00E4137AA67505C(::UnityEngine::Vector3 A46B36A0939C9405, ::UnityEngine::Vector3 F0A32063A65D6227)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_B00E4137AA67505C_OFFSET))(this, A46B36A0939C9405, F0A32063A65D6227);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB__CTOR_OFFSET))(this);
		}

		::System::Void E3C8347BF6367BF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_E3C8347BF6367BF3_OFFSET))(this);
		}

		::System::Void E3C8347BF6367BF3_1(::System::Single AAF17A08465C5AB4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_E3C8347BF6367BF3_1_OFFSET))(this, AAF17A08465C5AB4);
		}

		::System::Void BBDA5DE54ED5D6E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_BBDA5DE54ED5D6E7_OFFSET))(this);
		}

		::System::Void BF128134802B6CC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_BF128134802B6CC9_OFFSET))(this);
		}

		::System::Void B4AD6582E095BF8D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_B4AD6582E095BF8D_OFFSET))(this);
		}

		::System::Void F6527C0E78E6CFE5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_F6527C0E78E6CFE5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AC1DAC920E653FB6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_AC1DAC920E653FB6_OFFSET))(this);
		}

		::System::Void BD87623221A3DEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_BD87623221A3DEAB_OFFSET))(this);
		}
	};
}
