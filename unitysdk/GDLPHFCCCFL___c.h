#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLPHFCCCFL;
namespace System { class Object; }

#define GDLPHFCCCFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44ECB0)
#define GDLPHFCCCFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44ECF0)
#define GDLPHFCCCFL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E44ED00)

	class GDLPHFCCCFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x113B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLPHFCCCFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL___C_CTOR_OFFSET))(this);
		}

		::GDLPHFCCCFL* __cctor_b__33_0()
		{
			return ((::GDLPHFCCCFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
