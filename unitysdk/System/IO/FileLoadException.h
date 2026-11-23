#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x3B99280)
#define SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B992E0)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3B99730)
#define SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B99400)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B996C0)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B995F0)
#define SYSTEM_IO_FILELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B996E0)

namespace System::IO
{
	inline static constexpr unsigned int FileLoadException_TypeDefinitionIndex = 11098;

	class FileLoadException : public ::System::IO::IOException
	{
	public:
		::System::String* _FileName_k__BackingField; // 0x90
		::System::String* _FusionLog_k__BackingField; // 0x98

		static ::System::String* FormatFileLoadExceptionMessage(::System::String* B823BD107ED98484, ::System::Int32 FC0CEC57A9696C6C)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET))(B823BD107ED98484, FC0CEC57A9696C6C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
