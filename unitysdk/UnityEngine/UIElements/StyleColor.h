#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8BB480)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x8BB430)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8BB520)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8BB3A0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D5BBC60)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D5BBCB0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8BB5C0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8BB400)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB3D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleColor_TypeDefinitionIndex = 27602;

	struct alignas(4) StyleColor
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::Color m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x24

		::System::Void _ctor(::UnityEngine::Color v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_OFFSET))(this, v);
		}

		::System::Void _ctor_1(::UnityEngine::Color v, ::UnityEngine::UIElements::StyleKeyword keyword)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_1_OFFSET))(this, v, keyword);
		}

		::UnityEngine::Color get_value()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleColor lhs, ::UnityEngine::UIElements::StyleColor rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleColor, ::UnityEngine::UIElements::StyleColor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::UnityEngine::UIElements::StyleColor op_Implicit(::UnityEngine::Color v)
		{
			return ((::UnityEngine::UIElements::StyleColor(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::UIElements::StyleColor other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleColor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
