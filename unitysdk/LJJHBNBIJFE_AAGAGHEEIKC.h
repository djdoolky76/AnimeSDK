#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define LJJHBNBIJFE_AAGAGHEEIKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB6A00)
#define LJJHBNBIJFE_AAGAGHEEIKC_GET_CANVASGROUP_OFFSET UNITYSDK_OFFSET(0xBFB6A90)
#define LJJHBNBIJFE_AAGAGHEEIKC_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xBFB6A70)
#define LJJHBNBIJFE_AAGAGHEEIKC_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xBFB6A80)

inline static constexpr unsigned int LJJHBNBIJFE_AAGAGHEEIKC_TypeDefinitionIndex = 74942;

	class LJJHBNBIJFE_AAGAGHEEIKC : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* _CanvasGroup_k__BackingField; // 0x10
		::UnityEngine::UI::Text* _Text_k__BackingField; // 0x18
		::UnityEngine::Transform* _Root_k__BackingField; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::CanvasGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Text*, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_AAGAGHEEIKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_AAGAGHEEIKC_GET_ROOT_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_AAGAGHEEIKC_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_CanvasGroup()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_AAGAGHEEIKC_GET_CANVASGROUP_OFFSET))(this);
		}

	};
