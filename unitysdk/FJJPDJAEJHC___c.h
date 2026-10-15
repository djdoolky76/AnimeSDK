#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJJPDJAEJHC;
namespace System { class Object; }

#define FJJPDJAEJHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5200)
#define FJJPDJAEJHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5240)
#define FJJPDJAEJHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3A5250)

	class FJJPDJAEJHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJJPDJAEJHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC___C_CTOR_OFFSET))(this);
		}

		::FJJPDJAEJHC* __cctor_b__23_0()
		{
			return ((::FJJPDJAEJHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJPDJAEJHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
