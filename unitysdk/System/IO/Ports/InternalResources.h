#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDOFFILE_OFFSET UNITYSDK_OFFSET(0x1CBE11D0)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDREADCALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x1CBE13E0)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDWRITECALLEDTWICE_OFFSET UNITYSDK_OFFSET(0x1CBE1440)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_FILENOTOPEN_OFFSET UNITYSDK_OFFSET(0x1CBE1320)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBE1230)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_MAKEHRFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1CBE1790)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_WINIOERROR_OFFSET UNITYSDK_OFFSET(0x1CBE14A0)
#define SYSTEM_IO_PORTS_INTERNALRESOURCES_WRONGASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1CBE1380)

namespace System::IO::Ports
{
	inline static constexpr unsigned int InternalResources_TypeDefinitionIndex = 3238;

	class InternalResources : public ::System::Object
	{
	public:
		static ::System::Void EndOfFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDOFFILE_OFFSET))();
		}

		static ::System::String* GetMessage(::System::Int32 errorCode)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_GETMESSAGE_OFFSET))(errorCode);
		}

		static ::System::Void FileNotOpen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_FILENOTOPEN_OFFSET))();
		}

		static ::System::Void WrongAsyncResult()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_WRONGASYNCRESULT_OFFSET))();
		}

		static ::System::Void EndReadCalledTwice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDREADCALLEDTWICE_OFFSET))();
		}

		static ::System::Void EndWriteCalledTwice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_ENDWRITECALLEDTWICE_OFFSET))();
		}

		static ::System::Void WinIOError(::System::Int32 errorCode, ::System::String* str)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_WINIOERROR_OFFSET))(errorCode, str);
		}

		static ::System::Int32 MakeHRFromErrorCode(::System::Int32 errorCode)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_INTERNALRESOURCES_MAKEHRFROMERRORCODE_OFFSET))(errorCode);
		}
	};
}
