#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBMCNLIKBKL;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GDMNALCNPJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159A84A0)
#define GDMNALCNPJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159A84D0)
#define GDMNALCNPJE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x159A84E0)

	class GDMNALCNPJE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IBMCNLIKBKL*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::IBMCNLIKBKL*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x560C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x560C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMNALCNPJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::IBMCNLIKBKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBMCNLIKBKL*))((::PBYTE)hIl2Cpp + GDMNALCNPJE___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
