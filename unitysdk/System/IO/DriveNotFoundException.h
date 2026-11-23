#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B7F600)
#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B7F620)
#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B71B60)

namespace System::IO
{
	inline static constexpr unsigned int DriveNotFoundException_TypeDefinitionIndex = 11069;

	class DriveNotFoundException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
