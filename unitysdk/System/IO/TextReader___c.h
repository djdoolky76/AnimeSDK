#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_IO_TEXTREADER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2700C0)
#define SYSTEM_IO_TEXTREADER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2700F0)
#define SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1C270100)
#define SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_1_OFFSET UNITYSDK_OFFSET(0x1C2701C0)

namespace System::IO
{
	class TextReader___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.IO", "<>c")->GetStaticField(0x15F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C_CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__22_0(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_0_OFFSET))(this, a1);
		}

		::System::Int32 __cctor_b__22_1(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_1_OFFSET))(this, a1);
		}

	};
}
