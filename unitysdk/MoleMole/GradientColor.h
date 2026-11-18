#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_GRADIENTCOLOR_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1466D850)
#define MOLEMOLE_GRADIENTCOLOR_GCNDBCDDKPF_OFFSET UNITYSDK_OFFSET(0x1466E530)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORBOTTOM_OFFSET UNITYSDK_OFFSET(0x1466D9E0)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1466DAA0)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1466DB60)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORTOP_OFFSET UNITYSDK_OFFSET(0x1466D790)
#define MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1466DCD0)
#define MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1466DC20)
#define MOLEMOLE_GRADIENTCOLOR_GET_IGNOREPRECOLOR_OFFSET UNITYSDK_OFFSET(0x1466DD80)
#define MOLEMOLE_GRADIENTCOLOR_HEMMCCCFOKM_OFFSET UNITYSDK_OFFSET(0x1466DFD0)
#define MOLEMOLE_GRADIENTCOLOR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1466DDF0)
#define MOLEMOLE_GRADIENTCOLOR_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1466E860)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORBOTTOM_OFFSET UNITYSDK_OFFSET(0x1466D9F0)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1466DAB0)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1466DB70)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORTOP_OFFSET UNITYSDK_OFFSET(0x1466D7A0)
#define MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1466DCE0)
#define MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1466DC30)
#define MOLEMOLE_GRADIENTCOLOR_SET_IGNOREPRECOLOR_OFFSET UNITYSDK_OFFSET(0x1466DD90)
#define MOLEMOLE_GRADIENTCOLOR_START_OFFSET UNITYSDK_OFFSET(0x1466E4C0)
#define MOLEMOLE_GRADIENTCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1466E7B0)

namespace MoleMole
{
	inline static constexpr unsigned int GradientColor_TypeDefinitionIndex = 69543;

	class GradientColor : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::Int32 KHPGDALIEKG = 0x6; // 0x0
		::UnityEngine::Color m_colorTop; // 0x20
		::UnityEngine::Color m_colorBottom; // 0x30
		::UnityEngine::Color m_colorLeft; // 0x40
		::UnityEngine::Color m_colorRight; // 0x50
		::System::Single m_gradientOffsetVertical; // 0x60
		::System::Single m_gradientOffsetHorizontal; // 0x64
		::System::Boolean m_splitTextGradient; // 0x68
		::System::Boolean m_ignorePreColor; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_ColorTop()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORTOP_OFFSET))(this);
		}

		::System::Void set_ColorTop(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORTOP_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_ColorBottom()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORBOTTOM_OFFSET))(this);
		}

		::System::Void set_ColorBottom(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORBOTTOM_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_ColorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_ColorLeft(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORLEFT_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_ColorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_ColorRight(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORRIGHT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_GradientOffsetVertical()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETVERTICAL_OFFSET))(this);
		}

		::System::Void set_GradientOffsetVertical(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETVERTICAL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_GradientOffsetHorizontal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETHORIZONTAL_OFFSET))(this);
		}

		::System::Void set_GradientOffsetHorizontal(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETHORIZONTAL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IgnorePreColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_IGNOREPRECOLOR_OFFSET))(this);
		}

		::System::Void set_IgnorePreColor(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_IGNOREPRECOLOR_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_MODIFYMESH_OFFSET))(this, KKHICLCLGDM);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_START_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_ABDLEONNPAJ_OFFSET))(this);
		}

		::System::Void HEMMCCCFOKM(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* CGLPDFKDFAP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_HEMMCCCFOKM_OFFSET))(this, CGLPDFKDFAP);
		}

		::System::Void NIGDIMFIAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_NIGDIMFIAEJ_OFFSET))(this);
		}

		::System::Void GCNDBCDDKPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GCNDBCDDKPF_OFFSET))(this);
		}
	};
}
