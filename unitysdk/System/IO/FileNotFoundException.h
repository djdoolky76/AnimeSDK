#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3CAA630)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3CAAB60)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x3CAA750)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3CAA7F0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CAAB20)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CAAB00)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CAAA30)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3CAA9E0)

namespace System::IO
{
	inline static constexpr unsigned int FileNotFoundException_TypeDefinitionIndex = 10479;

	class FileNotFoundException : public ::System::IO::IOException
	{
	public:
		::System::String* _FileName_k__BackingField; // 0x90
		::System::String* _FusionLog_k__BackingField; // 0x98

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::String* B823BD107ED98484)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, B823BD107ED98484);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::Void _ctor_3(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
