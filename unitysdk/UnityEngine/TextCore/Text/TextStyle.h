#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x2EEE5A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x3929700)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x3929710)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0x4206330)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x42065D0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextStyle_TypeDefinitionIndex = 18731;

	class TextStyle : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::UInt32>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::UInt32>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::UInt32>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::UInt32>* m_ClosingTagUnicodeArray; // 0x48

		::Il2CppArray<::System::UInt32>* get_styleClosingTagArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLECLOSINGTAGARRAY_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* F89A4C1B7A38A7A5, ::System::String* E352C3BA11DC0186, ::System::String* A6A90326EF212C3C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE__CTOR_OFFSET))(this, F89A4C1B7A38A7A5, E352C3BA11DC0186, A6A90326EF212C3C);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_HASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_styleOpeningTagArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_GET_STYLEOPENINGTAGARRAY_OFFSET))(this);
		}

		::System::Void RefreshStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSTYLE_REFRESHSTYLE_OFFSET))(this);
		}
	};
}
