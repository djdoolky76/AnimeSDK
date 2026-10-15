#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONJHKFHDPGH;
namespace System { class Object; }

#define ONJHKFHDPGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6F00)
#define ONJHKFHDPGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6F40)
#define ONJHKFHDPGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEC6F50)

	class ONJHKFHDPGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONJHKFHDPGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJHKFHDPGH___C_CTOR_OFFSET))(this);
		}

		::ONJHKFHDPGH* __cctor_b__23_0()
		{
			return ((::ONJHKFHDPGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJHKFHDPGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
