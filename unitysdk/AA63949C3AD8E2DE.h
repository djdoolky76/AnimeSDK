#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define AA63949C3AD8E2DE_B03F95A8592EC33B_OFFSET UNITYSDK_OFFSET(0x3ABE370)
#define AA63949C3AD8E2DE_E3D7718C9A607BDA_OFFSET UNITYSDK_OFFSET(0x3ABE410)
#define AA63949C3AD8E2DE_EDB313D2214C6B1F_OFFSET UNITYSDK_OFFSET(0x3ABE520)

inline static constexpr unsigned int AA63949C3AD8E2DE_TypeDefinitionIndex = 12134;

class AA63949C3AD8E2DE : public ::System::Object
{
public:
	static ::System::Void B03F95A8592EC33B(::UnityEngine::RectTransform* B856F1DD25F702CF, ::UnityEngine::Vector2 E937D4885DAA1AE8, ::UnityEngine::Vector2 BE9B161B3F3C2937, ::UnityEngine::Vector2 F54AF627638DE3C9, ::System::Boolean AA06AAB20989E907)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + AA63949C3AD8E2DE_B03F95A8592EC33B_OFFSET))(B856F1DD25F702CF, E937D4885DAA1AE8, BE9B161B3F3C2937, F54AF627638DE3C9, AA06AAB20989E907);
	}

	static ::System::Void EDB313D2214C6B1F(::UnityEngine::RectTransform* B856F1DD25F702CF, ::UnityEngine::Vector2 BE9B161B3F3C2937, ::UnityEngine::Vector2 F54AF627638DE3C9, ::System::Boolean AA06AAB20989E907)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + AA63949C3AD8E2DE_EDB313D2214C6B1F_OFFSET))(B856F1DD25F702CF, BE9B161B3F3C2937, F54AF627638DE3C9, AA06AAB20989E907);
	}

	static ::System::Void E3D7718C9A607BDA(::UnityEngine::RectTransform* B856F1DD25F702CF, ::System::Single B3C8833FC07E571A, ::System::Single B1FC70F15C97A4A3, ::System::Single B13A8C26C5E7B120, ::System::Single FC7391111C6C4235)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AA63949C3AD8E2DE_E3D7718C9A607BDA_OFFSET))(B856F1DD25F702CF, B3C8833FC07E571A, B1FC70F15C97A4A3, B13A8C26C5E7B120, FC7391111C6C4235);
	}
};
