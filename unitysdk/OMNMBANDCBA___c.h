#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNMBANDCBA;
namespace System { class Object; }

#define OMNMBANDCBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDB40)
#define OMNMBANDCBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDB80)
#define OMNMBANDCBA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEBDB90)

	class OMNMBANDCBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNMBANDCBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA___C_CTOR_OFFSET))(this);
		}

		::OMNMBANDCBA* __cctor_b__38_0()
		{
			return ((::OMNMBANDCBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
