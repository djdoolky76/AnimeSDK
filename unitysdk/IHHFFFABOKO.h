#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGOHCKHPJBN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IHHFFFABOKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x13A9C150)
#define IHHFFFABOKO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13A9C660)
#define IHHFFFABOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x13A9C100)

inline static constexpr unsigned int IHHFFFABOKO_TypeDefinitionIndex = 81432;

class IHHFFFABOKO : public ::System::Object
{
public:
	::UnityEngine::RectTransform* JMNGJIGDNBE; // 0x10
	::LGOHCKHPJBN MODHJGILAPJ; // 0x18

	::System::Void _ctor(::System::String* HIFGPJELONC, ::UnityEngine::Vector2 OLIAHNKBBEK, ::UnityEngine::RectTransform* MLBOEALKNGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IHHFFFABOKO__CTOR_OFFSET))(this, HIFGPJELONC, OLIAHNKBBEK, MLBOEALKNGH);
	}

	::System::Void OKJCHFGIKBH(::UnityEngine::Transform* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IHHFFFABOKO_OKJCHFGIKBH_OFFSET))(this, BDHOILPIGKB);
	}

	static ::LGOHCKHPJBN LNFENFDLMIG(::System::String* NGIHHDEEOHO, ::UnityEngine::Vector2 OLIAHNKBBEK)
	{
		return ((::LGOHCKHPJBN(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IHHFFFABOKO_LNFENFDLMIG_OFFSET))(NGIHHDEEOHO, OLIAHNKBBEK);
	}
};
