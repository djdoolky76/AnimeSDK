#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEKMCGJPEEF;
namespace System { class Object; }

#define GEKMCGJPEEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45BE40)
#define GEKMCGJPEEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45BE80)
#define GEKMCGJPEEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E45BE90)

	class GEKMCGJPEEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x128F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEKMCGJPEEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF___C_CTOR_OFFSET))(this);
		}

		::GEKMCGJPEEF* __cctor_b__23_0()
		{
			return ((::GEKMCGJPEEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
