#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIJEFIIBBGG;
namespace System { class Object; }

#define KIJEFIIBBGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85CC80)
#define KIJEFIIBBGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85CCB0)
#define KIJEFIIBBGG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E85CCC0)

	class KIJEFIIBBGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C_CTOR_OFFSET))(this);
		}

		::KIJEFIIBBGG* __cctor_b__33_0()
		{
			return ((::KIJEFIIBBGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
