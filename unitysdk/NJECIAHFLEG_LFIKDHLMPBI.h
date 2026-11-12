#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define NJECIAHFLEG_LFIKDHLMPBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC4EE890)

inline static constexpr unsigned int NJECIAHFLEG_LFIKDHLMPBI_TypeDefinitionIndex = 75035;

	class NJECIAHFLEG_LFIKDHLMPBI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AGNIKDCLNPI; // 0x10
		::UnityEngine::UI::Text* NJLHJAGNHKM; // 0x18
		::UnityEngine::CanvasGroup* KHGEBMPAFNA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJECIAHFLEG_LFIKDHLMPBI_CTOR_OFFSET))(this);
		}

	};
