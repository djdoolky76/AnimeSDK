#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

#define TMPRO_TMP_SELECTIONCARET_B0A356D5C8D5FC30_OFFSET UNITYSDK_OFFSET(0x40BE4E0)
#define TMPRO_TMP_SELECTIONCARET_B69D52AF03135543_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET UNITYSDK_OFFSET(0x40BE5A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SelectionCaret_TypeDefinitionIndex = 18267;

	class TMP_SelectionCaret : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Void B69D52AF03135543()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_B69D52AF03135543_OFFSET))(this);
		}

		::System::Void B0A356D5C8D5FC30(::UnityEngine::BE5668376C82998A A4FA010185392744, ::System::Boolean E6E2927E31CFA9E7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BE5668376C82998A, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_B0A356D5C8D5FC30_OFFSET))(this, A4FA010185392744, E6E2927E31CFA9E7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET))(this);
		}
	};
}
