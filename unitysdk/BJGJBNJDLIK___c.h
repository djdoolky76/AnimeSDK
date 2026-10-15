#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJGJBNJDLIK;
namespace System { class Object; }

#define BJGJBNJDLIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0AA90)
#define BJGJBNJDLIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0AAD0)
#define BJGJBNJDLIK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DE0AAE0)

	class BJGJBNJDLIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x491E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C_CTOR_OFFSET))(this);
		}

		::BJGJBNJDLIK* __cctor_b__58_0()
		{
			return ((::BJGJBNJDLIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
