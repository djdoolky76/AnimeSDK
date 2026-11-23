#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }

#define A7C4D8DC50C86DC6_F3389D52164761AE_FBE252C2CDB6312E__CTOR_OFFSET UNITYSDK_OFFSET(0x4206B10)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int F3389D52164761AE_FBE252C2CDB6312E_TypeDefinitionIndex = 18761;

	struct alignas(8) F3389D52164761AE_FBE252C2CDB6312E
	{
		::System::Int32 BE4CBE1050D6AE49; // 0x10
		::System::Int32 ADBB6669411DF112; // 0x14
		::System::Int32 B2E557FDF31E6294; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 F4ACC94961C1EA0A; // 0x20
		::UnityEngine::TextCore::Text::FontAsset* E86CCBD799F54C45; // 0x28

		::System::Void _ctor(::System::Int32 B7DC3A4658B83C1E, ::System::Int32 A3BF5513164A8316, ::System::Int32 AD6F88C4A9154A26, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_F3389D52164761AE_FBE252C2CDB6312E__CTOR_OFFSET))(this, B7DC3A4658B83C1E, A3BF5513164A8316, AD6F88C4A9154A26, A04B97A6BA51CC83);
		}
	};
}
