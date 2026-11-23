#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B8872FC965FE6A5A_B0DC663523674040__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int B8872FC965FE6A5A_B0DC663523674040_TypeDefinitionIndex = 2120;

class B8872FC965FE6A5A_B0DC663523674040 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* E20BC9466A89FA9C; // 0x10
	::UnityEngine::UI::Image* B018A99EC4FA2597; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* B856F1DD25F702CF, ::UnityEngine::UI::Image* F49848274A97D1B6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + B8872FC965FE6A5A_B0DC663523674040__CTOR_OFFSET))(this, B856F1DD25F702CF, F49848274A97D1B6);
	}
};
