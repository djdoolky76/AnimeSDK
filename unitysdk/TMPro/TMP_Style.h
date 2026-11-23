#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET UNITYSDK_OFFSET(0x40A2650)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x165A410)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0x40A2330)
#define TMPRO_TMP_STYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x40A2590)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Style_TypeDefinitionIndex = 18199;

	class TMP_Style : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Style** StaticGet_k_NormalStyle()
		{
			return (::TMPro::TMP_Style**)Il2CppClass::FromTypeDefinitionIndex(TMP_Style_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::Int32>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::Int32>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::UInt32>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::UInt32>* m_ClosingTagUnicodeArray; // 0x48

		::Il2CppArray<::System::Int32>* get_styleOpeningTagArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_styleClosingTagArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET))(this);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET))(this);
		}

		static ::TMPro::TMP_Style* get_NormalStyle()
		{
			return ((::TMPro::TMP_Style*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET))();
		}

		::System::Void RefreshStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* F89A4C1B7A38A7A5, ::System::String* E352C3BA11DC0186, ::System::String* A6A90326EF212C3C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE__CTOR_OFFSET))(this, F89A4C1B7A38A7A5, E352C3BA11DC0186, A6A90326EF212C3C);
		}
	};
}
