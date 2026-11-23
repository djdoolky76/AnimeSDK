#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB12822C4406B00F;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define E61044ADE58F1266_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1A7C410)
#define E61044ADE58F1266_BAE5E918CC968D2D_OFFSET UNITYSDK_OFFSET(0x1A7C6C0)
#define E61044ADE58F1266_F7B3C0A79B062A0C_OFFSET UNITYSDK_OFFSET(0x1A7C5A0)
#define E61044ADE58F1266_F82CA29ABA3D896F_OFFSET UNITYSDK_OFFSET(0x1A7C460)
#define E61044ADE58F1266_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1A7C2D0)
#define E61044ADE58F1266_FECAE14C69EB1EEE_OFFSET UNITYSDK_OFFSET(0x1A7C7C0)
#define E61044ADE58F1266__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C8F0)

inline static constexpr unsigned int E61044ADE58F1266_TypeDefinitionIndex = 1883;

class E61044ADE58F1266 : public ::System::Object
{
public:
	::UnityEngine::GameObject* E7EF1A47C3985444; // 0x10
	::UnityEngine::Transform* B2A0B12783A9A3A2; // 0x18
	::System::String* A1AD49ABC0442489; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* FAC6A5025CABE7AB; // 0x28
	::UnityEngine::Rigidbody* F827079E09CA19D9; // 0x30
	::UnityEngine::Collider* AFF3A330201666A7; // 0x38
	::System::Boolean A39B491EE55F6E65; // 0x40

	::System::Void F7B3C0A79B062A0C(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E61044ADE58F1266_F7B3C0A79B062A0C_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Void _ctor(::AB12822C4406B00F* ACDE58E97E37D13C, ::UnityEngine::Transform* F9FDFD51453AA5CA)
	{
		return ((::System::Void(*)(::PVOID, ::AB12822C4406B00F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + E61044ADE58F1266__CTOR_OFFSET))(this, ACDE58E97E37D13C, F9FDFD51453AA5CA);
	}

	::System::Void F82CA29ABA3D896F(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E61044ADE58F1266_F82CA29ABA3D896F_OFFSET))(this, A3E26351629B9EF8);
	}

	::System::Void FECAE14C69EB1EEE(::System::Boolean A187B0A4ACA502FF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E61044ADE58F1266_FECAE14C69EB1EEE_OFFSET))(this, A187B0A4ACA502FF);
	}

	::System::Void BAE5E918CC968D2D(::UnityEngine::Quaternion A0556B8B541B6D55)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + E61044ADE58F1266_BAE5E918CC968D2D_OFFSET))(this, A0556B8B541B6D55);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E61044ADE58F1266_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E61044ADE58F1266_A1E97155B145443C_OFFSET))(this);
	}
};
