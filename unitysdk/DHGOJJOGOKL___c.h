#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGOJJOGOKL;
namespace System { class Object; }

#define DHGOJJOGOKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5350)
#define DHGOJJOGOKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5390)
#define DHGOJJOGOKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1B53A0)

	class DHGOJJOGOKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C_CTOR_OFFSET))(this);
		}

		::DHGOJJOGOKL* __cctor_b__23_0()
		{
			return ((::DHGOJJOGOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
