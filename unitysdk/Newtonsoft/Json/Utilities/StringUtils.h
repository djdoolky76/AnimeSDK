#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class StringWriter; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET UNITYSDK_OFFSET(0x208661D0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x208665C0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_1_OFFSET UNITYSDK_OFFSET(0x2085D810)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_2_OFFSET UNITYSDK_OFFSET(0x20865E00)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_3_OFFSET UNITYSDK_OFFSET(0x20865FB0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_4_OFFSET UNITYSDK_OFFSET(0x20865D30)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET UNITYSDK_OFFSET(0x2085D010)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x20866270)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x20866570)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x20866580)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x20866590)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x20866360)
#define NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET UNITYSDK_OFFSET(0x20866290)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 9691;

	class StringUtils : public ::System::Object
	{
	public:
		static ::System::String* FormatWith(::System::String* a1, ::System::IFormatProvider* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatWith_1(::System::String* a1, ::System::IFormatProvider* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatWith_2(::System::String* a1, ::System::IFormatProvider* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* FormatWith_3(::System::String* a1, ::System::IFormatProvider* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* FormatWith_4(::System::String* a1, ::System::IFormatProvider* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_FORMATWITH_4_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::StringWriter* CreateStringWriter(::System::Int32 a1)
		{
			return ((::System::IO::StringWriter*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_CREATESTRINGWRITER_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int32> GetLength(::System::String* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_GETLENGTH_OFFSET))(a1);
		}

		static ::System::Void ToCharAsUnicode(::System::Char a1, ::Il2CppArray<::System::Char>* a2)
		{
			return ((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCHARASUNICODE_OFFSET))(a1, a2);
		}

		static ::System::String* ToCamelCase(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_TOCAMELCASE_OFFSET))(a1);
		}

		static ::System::Boolean IsHighSurrogate(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISHIGHSURROGATE_OFFSET))(a1);
		}

		static ::System::Boolean IsLowSurrogate(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ISLOWSURROGATE_OFFSET))(a1);
		}

		static ::System::Boolean StartsWith(::System::String* a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_STARTSWITH_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndsWith(::System::String* a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGUTILS_ENDSWITH_OFFSET))(a1, a2);
		}

	};
}
