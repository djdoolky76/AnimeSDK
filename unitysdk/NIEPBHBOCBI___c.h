#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEPBHBOCBI;
namespace System { class Object; }

#define NIEPBHBOCBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2C030)
#define NIEPBHBOCBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2C070)
#define NIEPBHBOCBI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB2C080)

	class NIEPBHBOCBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEPBHBOCBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI___C_CTOR_OFFSET))(this);
		}

		::NIEPBHBOCBI* __cctor_b__33_0()
		{
			return ((::NIEPBHBOCBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPBHBOCBI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
