#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGAOGMJHCK;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define JOGAOGMJHCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2A0270)
#define JOGAOGMJHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0300)

inline static constexpr unsigned int JOGAOGMJHCK_TypeDefinitionIndex = 71892;

	class JOGAOGMJHCK : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* KBEPAIAFLHL; // 0x10
		::UnityEngine::RectTransform* DAGCPBPCOFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAOGMJHCK_CTOR_OFFSET))(this);
		}

		static ::JOGAOGMJHCK* BPLPBPMEODA(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::JOGAOGMJHCK*(*)(::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + JOGAOGMJHCK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
