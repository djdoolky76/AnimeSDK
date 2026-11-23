#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }

#define A7C4D8DC50C86DC6_E4AF99438EF4717F_B953BAF7D97511CF_1_OFFSET UNITYSDK_OFFSET(0x41F7C30)
#define A7C4D8DC50C86DC6_E4AF99438EF4717F_B953BAF7D97511CF_OFFSET UNITYSDK_OFFSET(0x41F7940)
#define A7C4D8DC50C86DC6_E4AF99438EF4717F__CTOR_OFFSET UNITYSDK_OFFSET(0x41F7F20)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int E4AF99438EF4717F_TypeDefinitionIndex = 18750;

	struct alignas(8) E4AF99438EF4717F
	{
		::System::Int32 EBC9556C8060B538; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::TextCore::Text::FontAsset* E86CCBD799F54C45; // 0x18
		::UnityEngine::TextCore::Text::SpriteAsset* EE7F0D1D3AD492F9; // 0x20
		::UnityEngine::Material* F1F4E8E077FFCED5; // 0x28
		::System::Boolean FAC0C033A7DF3085; // 0x30
		::System::Boolean F48D61CF9ED65EF9; // 0x31
		::System::Byte _padding1[0x6];
		::UnityEngine::Material* EDA9CCC38AEA0626; // 0x38
		::System::Single F57165B281724F35; // 0x40
		::System::Int32 B19F772ADE63E931; // 0x44

		::System::Void _ctor(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83, ::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::UnityEngine::Material* E3AD885F703BB54B, ::System::Single F5B33D06A6A6D3C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_E4AF99438EF4717F__CTOR_OFFSET))(this, B48C66E5FB2449C6, A04B97A6BA51CC83, FBB25D464987D82F, E3AD885F703BB54B, F5B33D06A6A6D3C1);
		}

		/*
		static ::System::Int32 B953BAF7D97511CF(::UnityEngine::Material* E3AD885F703BB54B, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83, ::Il2CppArray<::A7C4D8DC50C86DC6::E4AF99438EF4717F>*& E6B2F6FD75CEDF18, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* F3E4CE398E358471)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::FontAsset*, ::Il2CppArray<::A7C4D8DC50C86DC6::E4AF99438EF4717F>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_E4AF99438EF4717F_B953BAF7D97511CF_OFFSET))(E3AD885F703BB54B, A04B97A6BA51CC83, E6B2F6FD75CEDF18, F3E4CE398E358471);
		}
		*/

		/*
		static ::System::Int32 B953BAF7D97511CF_1(::UnityEngine::Material* E3AD885F703BB54B, ::UnityEngine::TextCore::Text::SpriteAsset* FBB25D464987D82F, ::Il2CppArray<::A7C4D8DC50C86DC6::E4AF99438EF4717F>*& E6B2F6FD75CEDF18, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* F3E4CE398E358471)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::Il2CppArray<::A7C4D8DC50C86DC6::E4AF99438EF4717F>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_E4AF99438EF4717F_B953BAF7D97511CF_1_OFFSET))(E3AD885F703BB54B, FBB25D464987D82F, E6B2F6FD75CEDF18, F3E4CE398E358471);
		}
		*/
	};
}
