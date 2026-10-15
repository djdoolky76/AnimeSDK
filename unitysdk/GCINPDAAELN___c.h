#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCINPDAAELN;
namespace System { class Object; }

#define GCINPDAAELN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43E3F0)
#define GCINPDAAELN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43E430)
#define GCINPDAAELN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E43E440)

	class GCINPDAAELN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCINPDAAELN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN___C_CTOR_OFFSET))(this);
		}

		::GCINPDAAELN* __cctor_b__23_0()
		{
			return ((::GCINPDAAELN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
