#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGAOGMJHCK;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define JOGAOGMJHCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBACC050)
#define JOGAOGMJHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBACC0E0)

inline static constexpr unsigned int JOGAOGMJHCK_TypeDefinitionIndex = 73913;

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
