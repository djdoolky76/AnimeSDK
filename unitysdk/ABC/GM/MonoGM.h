#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro { class TMP_InputField; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define ABC_GM_MONOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E910)

namespace ABC::GM
{
	inline static constexpr unsigned int MonoGM_TypeDefinitionIndex = 7798;

	class MonoGM
	{
	public:
		::UnityEngine::UI::Button* ConsoleCommandGMButton; // 0x20
		::UnityEngine::GameObject* ConsoleCommandGameObject; // 0x28
		::TMPro::TMP_InputField* ConsoleCommandInputField; // 0x30
		::TMPro::TMP_Text* ConsoleCommandPreviewText; // 0x38
		::UnityEngine::UI::Button* ConsoleCommandUpButton; // 0x40
		::UnityEngine::UI::Button* ConsoleCommandDownButton; // 0x48
		::UnityEngine::UI::Button* ConsoleCommandEnterButton; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GM_MONOGM__CTOR_OFFSET))(this);
		}
	};
}
