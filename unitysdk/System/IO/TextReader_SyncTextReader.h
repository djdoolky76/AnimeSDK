#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"
namespace System { class String; }
namespace System::IO { class TextReader; }

#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1EDC3460)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC30B0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDC34F0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1EDC3520)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1EDC36F0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1EDC3780)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1EDC3640)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1EDC35B0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_SyncTextReader_TypeDefinitionIndex = 699;

	class TextReader_SyncTextReader : public ::System::IO::TextReader
	{
	public:
		::System::IO::TextReader* _in; // 0x18
		::System::Void _ctor(::System::IO::TextReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READTOEND_OFFSET))(this);
		}

	};
}
