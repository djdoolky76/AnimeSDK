#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }

#define BB89B59A2CC48295_FCD030E20089548E_1_OFFSET UNITYSDK_OFFSET(0x4095F70)
#define BB89B59A2CC48295_FCD030E20089548E_OFFSET UNITYSDK_OFFSET(0x4095C80)
#define BB89B59A2CC48295__CTOR_OFFSET UNITYSDK_OFFSET(0x4096280)

inline static constexpr unsigned int BB89B59A2CC48295_TypeDefinitionIndex = 18193;

struct alignas(8) BB89B59A2CC48295
{
	::System::Int32 B48C66E5FB2449C6; // 0x10
	::System::Byte _padding0[0x4];
	::TMPro::TMP_FontAsset* A04B97A6BA51CC83; // 0x18
	::TMPro::TMP_SpriteAsset* FBB25D464987D82F; // 0x20
	::UnityEngine::Material* E3AD885F703BB54B; // 0x28
	::System::Boolean B00F52AA2C5C19F6; // 0x30
	::System::Boolean B7C72ACB7ECFCB5F; // 0x31
	::System::Byte _padding1[0x6];
	::UnityEngine::Material* FF62661DF92753A8; // 0x38
	::System::Single F5B33D06A6A6D3C1; // 0x40
	::System::Int32 E30524E1E71BBFD5; // 0x44

	/*
	static ::System::Int32 FCD030E20089548E(::UnityEngine::Material* E3AD885F703BB54B, ::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::Il2CppArray<::BB89B59A2CC48295>*& E6B2F6FD75CEDF18, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* F3E4CE398E358471)
	{
		return ((::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_SpriteAsset*, ::Il2CppArray<::BB89B59A2CC48295>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + BB89B59A2CC48295_FCD030E20089548E_OFFSET))(E3AD885F703BB54B, FBB25D464987D82F, E6B2F6FD75CEDF18, F3E4CE398E358471);
	}
	*/

	::System::Void _ctor(::System::Int32 B48C66E5FB2449C6, ::TMPro::TMP_FontAsset* A04B97A6BA51CC83, ::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::UnityEngine::Material* E3AD885F703BB54B, ::System::Single F5B33D06A6A6D3C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_FontAsset*, ::TMPro::TMP_SpriteAsset*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + BB89B59A2CC48295__CTOR_OFFSET))(this, B48C66E5FB2449C6, A04B97A6BA51CC83, FBB25D464987D82F, E3AD885F703BB54B, F5B33D06A6A6D3C1);
	}

	/*
	static ::System::Int32 FCD030E20089548E_1(::UnityEngine::Material* E3AD885F703BB54B, ::TMPro::TMP_FontAsset* A04B97A6BA51CC83, ::Il2CppArray<::BB89B59A2CC48295>*& E6B2F6FD75CEDF18, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* F3E4CE398E358471)
	{
		return ((::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_FontAsset*, ::Il2CppArray<::BB89B59A2CC48295>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + BB89B59A2CC48295_FCD030E20089548E_1_OFFSET))(E3AD885F703BB54B, A04B97A6BA51CC83, E6B2F6FD75CEDF18, F3E4CE398E358471);
	}
	*/
};
