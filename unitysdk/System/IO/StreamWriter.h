#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class StreamWriter; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAMWRITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5210)
#define SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D3F3650)
#define SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D3F4480)
#define SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET UNITYSDK_OFFSET(0x1D3F43F0)
#define SYSTEM_IO_STREAMWRITER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3F3A30)
#define SYSTEM_IO_STREAMWRITER_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3F3D00)
#define SYSTEM_IO_STREAMWRITER_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3F3D20)
#define SYSTEM_IO_STREAMWRITER_CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D3F3AB0)
#define SYSTEM_IO_STREAMWRITER_CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D3F3FD0)
#define SYSTEM_IO_STREAMWRITER_CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D3F4070)
#define SYSTEM_IO_STREAMWRITER_CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D3F40F0)
#define SYSTEM_IO_STREAMWRITER_CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D3F4050)
#define SYSTEM_IO_STREAMWRITER_CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D3F4110)
#define SYSTEM_IO_STREAMWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F3850)
#define SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3F4530)
#define SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x1D3F4730)
#define SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D3F4B30)
#define SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1D3F4CC0)
#define SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET UNITYSDK_OFFSET(0x1D3F4720)
#define SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET UNITYSDK_OFFSET(0x1D3F36D0)
#define SYSTEM_IO_STREAMWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x1D3F3D40)
#define SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1D3F4C20)
#define SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D3F4DB0)
#define SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1D3F4ED0)
#define SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1D3F50F0)
#define SYSTEM_IO_STREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1D3F4CD0)

namespace System::IO
{
	inline static constexpr unsigned int StreamWriter_TypeDefinitionIndex = 694;

	class StreamWriter : public ::System::IO::TextWriter
	{
	public:
		::System::Text::Encoder* encoder; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Text::Encoding* encoding; // 0x38
		::System::Threading::Tasks::Task* _asyncWriteTask; // 0x40
		::Il2CppArray<::System::Char>* charBuffer; // 0x48
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x50
		::System::Int32 charPos; // 0x58
		::System::Boolean closable; // 0x5C
		::System::Boolean haveWrittenPreamble; // 0x5D
		::System::Boolean autoFlush; // 0x5E
		::System::Byte _padding0[0x1];
		::System::Int32 charLen; // 0x60
		static ::System::IO::StreamWriter** StaticGet_Null()
		{
			return (::System::IO::StreamWriter**)UnitySDK::FromName("System.IO", "StreamWriter")->GetStaticField(0x18780);
		}

		static ::System::Text::Encoding** StaticGet__UTF8NoBOM()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.IO", "StreamWriter")->GetStaticField(0x18788);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_5_OFFSET))(this, a1);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_9(::System::String* a1, ::System::Boolean a2, ::System::Text::Encoding* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CCTOR_OFFSET))();
		}

		::System::Void CheckAsyncTaskInProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CHECKASYNCTASKINPROGRESS_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_UTF8NoBOM()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_UTF8NOBOM_OFFSET))();
		}

		::System::Void Init(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::IO::Stream* CreateFile(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CREATEFILE_OFFSET))(a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Flush_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_FLUSH_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_AutoFlush(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_SET_AUTOFLUSH_OFFSET))(this, a1);
		}

		::System::Boolean get_LeaveOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_LEAVEOPEN_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMWRITER_WRITE_3_OFFSET))(this, a1);
		}

	};
}
