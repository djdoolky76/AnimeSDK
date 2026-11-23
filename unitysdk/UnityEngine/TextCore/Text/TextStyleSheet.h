#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::TextCore::Text { class TextStyle; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_1_OFFSET UNITYSDK_OFFSET(0x4205DF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x4205E80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GET_STYLES_OFFSET UNITYSDK_OFFSET(0x3559240)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET UNITYSDK_OFFSET(0x4205F20)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x42062A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_RESET_OFFSET UNITYSDK_OFFSET(0x42062A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x42062B0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextStyleSheet_TypeDefinitionIndex = 18748;

	class TextStyleSheet : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* m_StyleList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::TextCore::Text::TextStyle*>* m_StyleLookupDictionary; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET__CTOR_OFFSET))(this);
		}

		::System::Void RefreshStyles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_REFRESHSTYLES_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_RESET_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::TextStyle* GetStyle(::System::String* F79B4D487F303AB2)
		{
			return ((::UnityEngine::TextCore::Text::TextStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_OFFSET))(this, F79B4D487F303AB2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* get_styles()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GET_STYLES_OFFSET))(this);
		}

		::System::Void LoadStyleDictionaryInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::TextStyle* GetStyle_1(::System::Int32 AE8665F1077F631B)
		{
			return ((::UnityEngine::TextCore::Text::TextStyle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLESHEET_GETSTYLE_1_OFFSET))(this, AE8665F1077F631B);
		}
	};
}
