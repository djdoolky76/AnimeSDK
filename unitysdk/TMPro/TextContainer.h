#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TextContainerAnchors.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace TMPro { class TextMeshPro; }
namespace UnityEngine { class RectTransform; }

#define TMPRO_TEXTCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2002C870)
#define TMPRO_TEXTCONTAINER_GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x2002BD50)
#define TMPRO_TEXTCONTAINER_GETPIVOT_OFFSET UNITYSDK_OFFSET(0x2002C330)
#define TMPRO_TEXTCONTAINER_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x2002C2C0)
#define TMPRO_TEXTCONTAINER_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x2002C4C0)
#define TMPRO_TEXTCONTAINER_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x2002BBE0)
#define TMPRO_TEXTCONTAINER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2002C450)
#define TMPRO_TEXTCONTAINER_GET_ISAUTOFITTING_OFFSET UNITYSDK_OFFSET(0x2002C4A0)
#define TMPRO_TEXTCONTAINER_GET_ISDEFAULTHEIGHT_OFFSET UNITYSDK_OFFSET(0x2002C490)
#define TMPRO_TEXTCONTAINER_GET_ISDEFAULTWIDTH_OFFSET UNITYSDK_OFFSET(0x2002C480)
#define TMPRO_TEXTCONTAINER_GET_MARGINS_OFFSET UNITYSDK_OFFSET(0x2002C4E0)
#define TMPRO_TEXTCONTAINER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x2002BC00)
#define TMPRO_TEXTCONTAINER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x2002C550)
#define TMPRO_TEXTCONTAINER_GET_RECT_OFFSET UNITYSDK_OFFSET(0x2002C370)
#define TMPRO_TEXTCONTAINER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x2002C3B0)
#define TMPRO_TEXTCONTAINER_GET_TEXTMESHPRO_OFFSET UNITYSDK_OFFSET(0x2002C6E0)
#define TMPRO_TEXTCONTAINER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2002C420)
#define TMPRO_TEXTCONTAINER_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x2002C4D0)
#define TMPRO_TEXTCONTAINER_ONCONTAINERCHANGED_OFFSET UNITYSDK_OFFSET(0x2002BE50)
#define TMPRO_TEXTCONTAINER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2002C970)
#define TMPRO_TEXTCONTAINER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2002C960)
#define TMPRO_TEXTCONTAINER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x2002CC20)
#define TMPRO_TEXTCONTAINER_SETRECT_OFFSET UNITYSDK_OFFSET(0x2002C410)
#define TMPRO_TEXTCONTAINER_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x2002C2D0)
#define TMPRO_TEXTCONTAINER_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x2002BBF0)
#define TMPRO_TEXTCONTAINER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2002C460)
#define TMPRO_TEXTCONTAINER_SET_ISAUTOFITTING_OFFSET UNITYSDK_OFFSET(0x2002C4B0)
#define TMPRO_TEXTCONTAINER_SET_MARGINS_OFFSET UNITYSDK_OFFSET(0x2002C4F0)
#define TMPRO_TEXTCONTAINER_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x2002BC10)
#define TMPRO_TEXTCONTAINER_SET_RECT_OFFSET UNITYSDK_OFFSET(0x2002C380)
#define TMPRO_TEXTCONTAINER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x2002C3C0)
#define TMPRO_TEXTCONTAINER_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2002C430)
#define TMPRO_TEXTCONTAINER_UPDATECORNERS_OFFSET UNITYSDK_OFFSET(0x2002C980)
#define TMPRO_TEXTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2002D1D0)
#define TMPRO_TEXTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x2002D130)

namespace TMPro
{
	inline static constexpr unsigned int TextContainer_TypeDefinitionIndex = 37920;

	class TextContainer : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_k_defaultSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TextContainer_TypeDefinitionIndex)->GetStaticField(0x9DC0);
		}
		::System::Boolean m_hasChanged; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 m_pivot; // 0x1C
		::TMPro::TextContainerAnchors m_anchorPosition; // 0x24
		::UnityEngine::Rect m_rect; // 0x28
		::System::Boolean m_isDefaultWidth; // 0x38
		::System::Boolean m_isDefaultHeight; // 0x39
		::System::Boolean m_isAutoFitting; // 0x3A
		::System::Byte _padding1[0x5];
		::Il2CppArray<::UnityEngine::Vector3>* m_corners; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* m_worldCorners; // 0x48
		::UnityEngine::Vector4 m_margins; // 0x50
		::UnityEngine::RectTransform* m_rectTransform; // 0x60
		::TMPro::TextMeshPro* m_textMeshPro; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER__CCTOR_OFFSET))();
		}

		::System::Boolean get_hasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_hasChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_HASCHANGED_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_PIVOT_OFFSET))(this, value);
		}

		::TMPro::TextContainerAnchors get_anchorPosition()
		{
			return ((::TMPro::TextContainerAnchors(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_anchorPosition(::TMPro::TextContainerAnchors value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TextContainerAnchors))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_ANCHORPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_RECT_OFFSET))(this);
		}

		::System::Void set_rect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_RECT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_SIZE_OFFSET))(this, value);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_isDefaultWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISDEFAULTWIDTH_OFFSET))(this);
		}

		::System::Boolean get_isDefaultHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISDEFAULTHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_isAutoFitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISAUTOFITTING_OFFSET))(this);
		}

		::System::Void set_isAutoFitting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_ISAUTOFITTING_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_corners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_CORNERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_worldCorners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_WORLDCORNERS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_margins()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_MARGINS_OFFSET))(this);
		}

		::System::Void set_margins(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_MARGINS_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::TMPro::TextMeshPro* get_textMeshPro()
		{
			return ((::TMPro::TextMeshPro*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_TEXTMESHPRO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnContainerChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONCONTAINERCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void SetRect(::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SETRECT_OFFSET))(this, size);
		}

		::System::Void UpdateCorners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_UPDATECORNERS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPivot(::TMPro::TextContainerAnchors anchor)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::TMPro::TextContainerAnchors))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GETPIVOT_OFFSET))(this, anchor);
		}

		::TMPro::TextContainerAnchors GetAnchorPosition(::UnityEngine::Vector2 pivot)
		{
			return ((::TMPro::TextContainerAnchors(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GETANCHORPOSITION_OFFSET))(this, pivot);
		}
	};
}
