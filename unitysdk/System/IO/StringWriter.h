#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace System::Text { class UnicodeEncoding; }

#define SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D3F5D60)
#define SYSTEM_IO_STRINGWRITER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3F5C40)
#define SYSTEM_IO_STRINGWRITER_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3F5CD0)
#define SYSTEM_IO_STRINGWRITER_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3F5AF0)
#define SYSTEM_IO_STRINGWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F59F0)
#define SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3F5D70)
#define SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1D3F5D80)
#define SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D3F61E0)
#define SYSTEM_IO_STRINGWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D3F5FF0)
#define SYSTEM_IO_STRINGWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1D3F6160)
#define SYSTEM_IO_STRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1D3F5F00)

namespace System::IO
{
	inline static constexpr unsigned int StringWriter_TypeDefinitionIndex = 696;

	class StringWriter : public ::System::IO::TextWriter
	{
	public:
		::System::Text::StringBuilder* _sb; // 0x28
		::System::Boolean _isOpen; // 0x30
		static ::System::Text::UnicodeEncoding** StaticGet_m_encoding()
		{
			return (::System::Text::UnicodeEncoding**)UnitySDK::FromName("System.IO", "StringWriter")->GetStaticField(0x18AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IFormatProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Text::StringBuilder* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_2_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET))(this);
		}

	};
}
