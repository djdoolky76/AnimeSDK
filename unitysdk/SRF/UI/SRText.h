#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"
namespace SRF::UI { class SRText; }
namespace System { class Action; }

#define SRF_UI_SRTEXT_ADD_LAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1ED7A6B0)
#define SRF_UI_SRTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED81C40)
#define SRF_UI_SRTEXT_REMOVE_LAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1ED7A960)
#define SRF_UI_SRTEXT_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1ED81C00)

namespace SRF::UI
{
	inline static constexpr unsigned int SRText_TypeDefinitionIndex = 35395;

	class SRText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Action* LayoutDirty; // 0x190
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_CTOR_OFFSET))(this);
		}

		::System::Void add_LayoutDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_ADD_LAYOUTDIRTY_OFFSET))(this, a1);
		}

		::System::Void remove_LayoutDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_REMOVE_LAYOUTDIRTY_OFFSET))(this, a1);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_SETLAYOUTDIRTY_OFFSET))(this);
		}

	};
}
