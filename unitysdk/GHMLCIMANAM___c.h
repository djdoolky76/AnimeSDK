#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMLCIMANAM;
namespace System { class Object; }

#define GHMLCIMANAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48D750)
#define GHMLCIMANAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48D790)
#define GHMLCIMANAM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E48D7A0)

	class GHMLCIMANAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMLCIMANAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM___C_CTOR_OFFSET))(this);
		}

		::GHMLCIMANAM* __cctor_b__33_0()
		{
			return ((::GHMLCIMANAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
