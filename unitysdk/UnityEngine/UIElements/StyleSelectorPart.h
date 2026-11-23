#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B6EDD6E47B9200A9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATECLASS_OFFSET UNITYSDK_OFFSET(0x42F4080)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEID_OFFSET UNITYSDK_OFFSET(0x42F40E0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEPREDICATE_OFFSET UNITYSDK_OFFSET(0x42F4140)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2E79A30)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2C141F0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ECE220)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x42F4190)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorPart_TypeDefinitionIndex = 13360;

	struct alignas(8) StyleSelectorPart
	{
		::System::String* m_Value; // 0x10
		::A418C49FA6A8C1F7::B6EDD6E47B9200A9 m_Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::Object* tempData; // 0x20

		/*
		static ::UnityEngine::UIElements::StyleSelectorPart CreateClass(::System::String* FB6493F8788CE54A)
		{
			return ((::UnityEngine::UIElements::StyleSelectorPart(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATECLASS_OFFSET))(FB6493F8788CE54A);
		}
		*/

		::System::String* get_value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET))(this);
		}

		/*
		static ::UnityEngine::UIElements::StyleSelectorPart CreateId(::System::String* EA7CFF2710F5BB56)
		{
			return ((::UnityEngine::UIElements::StyleSelectorPart(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEID_OFFSET))(EA7CFF2710F5BB56);
		}
		*/

		/*
		static ::UnityEngine::UIElements::StyleSelectorPart CreatePredicate(::System::Object* FED8380F90B07F47)
		{
			return ((::UnityEngine::UIElements::StyleSelectorPart(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEPREDICATE_OFFSET))(FED8380F90B07F47);
		}
		*/

		::System::Void set_type(::A418C49FA6A8C1F7::B6EDD6E47B9200A9 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::A418C49FA6A8C1F7::B6EDD6E47B9200A9))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_SET_TYPE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::A418C49FA6A8C1F7::B6EDD6E47B9200A9 get_type()
		{
			return ((::A418C49FA6A8C1F7::B6EDD6E47B9200A9(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET))(this);
		}
	};
}
