#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHPENFEPAJ;
namespace System { class Object; }

#define EPHPENFEPAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30D8C0)
#define EPHPENFEPAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30D900)
#define EPHPENFEPAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E30D910)

	class EPHPENFEPAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C_CTOR_OFFSET))(this);
		}

		::EPHPENFEPAJ* __cctor_b__23_0()
		{
			return ((::EPHPENFEPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
