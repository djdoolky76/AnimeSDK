#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class Character; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define A7C4D8DC50C86DC6_FD3761D81BBA7F6C_AF2FCE5E3786BFEF__CTOR_OFFSET UNITYSDK_OFFSET(0x41F9700)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int FD3761D81BBA7F6C_AF2FCE5E3786BFEF_TypeDefinitionIndex = 18727;

	struct alignas(8) FD3761D81BBA7F6C_AF2FCE5E3786BFEF
	{
		::UnityEngine::TextCore::Text::Character* F2358AB615348B5F; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* E86CCBD799F54C45; // 0x18
		::UnityEngine::Material* F1F4E8E077FFCED5; // 0x20
		::System::Int32 A8F2E577415814A2; // 0x28

		::System::Void _ctor(::UnityEngine::TextCore::Text::Character* F1971BC3E14481B3, ::System::Int32 AB37EDC84A0257FF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::Character*, ::System::Int32))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_FD3761D81BBA7F6C_AF2FCE5E3786BFEF__CTOR_OFFSET))(this, F1971BC3E14481B3, AB37EDC84A0257FF);
		}
	};
}
