#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKODNPNBOEN;
namespace System { class Object; }

#define CKODNPNBOEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EDA40)
#define CKODNPNBOEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EDA80)
#define CKODNPNBOEN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0EDA90)

	class CKODNPNBOEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKODNPNBOEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNPNBOEN___C_CTOR_OFFSET))(this);
		}

		::CKODNPNBOEN* __cctor_b__33_0()
		{
			return ((::CKODNPNBOEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNPNBOEN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
