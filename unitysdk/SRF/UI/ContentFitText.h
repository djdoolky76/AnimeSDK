#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace SRF::UI { class SRText; }

#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x2043EDF0)
#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x2043EE10)
#define SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x2043F060)
#define SRF_UI_CONTENTFITTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x2043F3F0)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x2043ED00)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x2043EAC0)
#define SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x2043EDE0)
#define SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x2043EDC0)
#define SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x2043EDD0)
#define SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x2043EB80)
#define SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x2043E940)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x2043EC40)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x2043EA00)
#define SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x2043F380)
#define SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2043F310)
#define SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2043F140)
#define SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2043EE30)
#define SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x2043F0D0)
#define SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x2043EF70)

namespace SRF::UI
{
	inline static constexpr unsigned int ContentFitText_TypeDefinitionIndex = 36303;

	class ContentFitText : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::SRF::UI::SRText* CopySource; // 0x18
		::UnityEngine::Vector2 Padding; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CTOR_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void CopySourceOnLayoutDirty(::SRF::UI::SRText* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::SRText*))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET))(this, a1);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET))(this);
		}

	};
}
