#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_TMP_TEXT_A85F1BD475006BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x4096340)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_A85F1BD475006BA0_TypeDefinitionIndex = 18209;

	struct alignas(8) TMP_Text_A85F1BD475006BA0
	{
		::TMPro::TMP_Character* F1971BC3E14481B3; // 0x10
		::TMPro::TMP_FontAsset* A04B97A6BA51CC83; // 0x18
		::UnityEngine::Material* E3AD885F703BB54B; // 0x20
		::System::Int32 AB37EDC84A0257FF; // 0x28

		::System::Void _ctor(::TMPro::TMP_Character* F1971BC3E14481B3, ::System::Int32 AB37EDC84A0257FF)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Character*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_A85F1BD475006BA0__CTOR_OFFSET))(this, F1971BC3E14481B3, AB37EDC84A0257FF);
		}
	};
}
