#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILCAHCBKAI;
namespace System { class Object; }

#define NILCAHCBKAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB360D0)
#define NILCAHCBKAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB36110)
#define NILCAHCBKAI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB36120)

	class NILCAHCBKAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILCAHCBKAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI___C_CTOR_OFFSET))(this);
		}

		::NILCAHCBKAI* __cctor_b__38_0()
		{
			return ((::NILCAHCBKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
