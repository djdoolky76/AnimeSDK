#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Toggle; }

#define E80254D19731A8BF_A947389377A6037E_OFFSET UNITYSDK_OFFSET(0x3ADE350)
#define E80254D19731A8BF_B089B93183962756_OFFSET UNITYSDK_OFFSET(0x3ADEC00)
#define E80254D19731A8BF_E032D74C33AC061F_OFFSET UNITYSDK_OFFSET(0x165A410)
#define E80254D19731A8BF_E365F5125C6BDB0C_OFFSET UNITYSDK_OFFSET(0x227E4B0)
#define E80254D19731A8BF_EE3412BF2F7198C4_OFFSET UNITYSDK_OFFSET(0x3ADE870)
#define E80254D19731A8BF_EFE0DC36A053AB22_OFFSET UNITYSDK_OFFSET(0x165A480)
#define E80254D19731A8BF_F0DE5842378AD709_OFFSET UNITYSDK_OFFSET(0x3ADE430)
#define E80254D19731A8BF_F2955DF37FF86F1E_OFFSET UNITYSDK_OFFSET(0x3ADE8E0)
#define E80254D19731A8BF_F2E9FBBED0CE54CA_OFFSET UNITYSDK_OFFSET(0x3ADE900)
#define E80254D19731A8BF_F6B57B2A4CE17728_OFFSET UNITYSDK_OFFSET(0x3ADE640)
#define E80254D19731A8BF_FA0B329CF80510AB_OFFSET UNITYSDK_OFFSET(0x3ADE970)
#define E80254D19731A8BF__CTOR_OFFSET UNITYSDK_OFFSET(0x3ADF090)

inline static constexpr unsigned int E80254D19731A8BF_TypeDefinitionIndex = 12193;

class E80254D19731A8BF : public ::System::Object
{
public:
	::System::Single EBFA786BA598E0E0; // 0x10
	::System::Single BB461E8D0BCA6454; // 0x14
	::System::Int32 B808429359B8DD71; // 0x18
	::System::Int32 B4F2CA5A0642CC04; // 0x1C
	::System::Int32 EAE614680514C3FB; // 0x20
	::System::Boolean B472D9C07F02FF94; // 0x24
	::System::Byte _padding0[0x3];
	::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* E7BF908026582688; // 0x28
	::UnityEngine::UI::ScrollRect* E71E473183A103C4; // 0x30
	::UnityEngine::UI::Dropdown* BBBAFC79DDD0B965; // 0x38
	::System::Int32 AC2C205439C3A287; // 0x40
	::System::Boolean F70010E8CFB2B469; // 0x44
	::System::Boolean A5FA1BF891636EF2; // 0x45

	::System::Void EFE0DC36A053AB22(::UnityEngine::UI::Dropdown* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + E80254D19731A8BF_EFE0DC36A053AB22_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FA0B329CF80510AB(::System::Int32 B48C66E5FB2449C6, ::System::Int32 E188813C941163ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + E80254D19731A8BF_FA0B329CF80510AB_OFFSET))(this, B48C66E5FB2449C6, E188813C941163ED);
	}

	::System::Void A947389377A6037E(::System::Int32 A199913F8B1E98E6, ::System::Int32 B4F2CA5A0642CC04)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + E80254D19731A8BF_A947389377A6037E_OFFSET))(this, A199913F8B1E98E6, B4F2CA5A0642CC04);
	}

	static ::UnityEngine::GameObject* EE3412BF2F7198C4(::UnityEngine::UI::Dropdown* B96C1083BC4A610B)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + E80254D19731A8BF_EE3412BF2F7198C4_OFFSET))(B96C1083BC4A610B);
	}

	::UnityEngine::UI::Dropdown* E032D74C33AC061F()
	{
		return ((::UnityEngine::UI::Dropdown*(*)(::PVOID))((::PBYTE)hIl2Cpp + E80254D19731A8BF_E032D74C33AC061F_OFFSET))(this);
	}

	::System::Void F0DE5842378AD709(::System::Boolean A2998A6C9A9CA0A0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E80254D19731A8BF_F0DE5842378AD709_OFFSET))(this, A2998A6C9A9CA0A0);
	}

	::System::Boolean E365F5125C6BDB0C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E80254D19731A8BF_E365F5125C6BDB0C_OFFSET))(this);
	}

	::System::Boolean B089B93183962756(::UnityEngine::GameObject* E9836B6458AB3A63)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E80254D19731A8BF_B089B93183962756_OFFSET))(this, E9836B6458AB3A63);
	}

	::System::Boolean F6B57B2A4CE17728(::UnityEngine::GameObject* E676A094A4C5626B)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E80254D19731A8BF_F6B57B2A4CE17728_OFFSET))(this, E676A094A4C5626B);
	}

	static ::System::Single F2955DF37FF86F1E(::System::Single E83D30C8C3378C08)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + E80254D19731A8BF_F2955DF37FF86F1E_OFFSET))(E83D30C8C3378C08);
	}

	::System::Collections::IEnumerator* F2E9FBBED0CE54CA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + E80254D19731A8BF_F2E9FBBED0CE54CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E80254D19731A8BF__CTOR_OFFSET))(this);
	}
};
