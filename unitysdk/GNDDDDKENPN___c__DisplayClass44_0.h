#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class FileInfo; }

#define GNDDDDKENPN___C__DISPLAYCLASS44_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC141A0)
#define GNDDDDKENPN___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET UNITYSDK_OFFSET(0x1EC1B7F0)

	class GNDDDDKENPN___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::String* exceptName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C__DISPLAYCLASS44_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _DeleteFiles_b__0(::System::IO::FileInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + GNDDDDKENPN___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET))(this, a1);
		}

	};
