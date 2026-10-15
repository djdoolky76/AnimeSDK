#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBIGEJHGLEH;
namespace System { class Object; }

#define PBIGEJHGLEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF73B0)
#define PBIGEJHGLEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF73F0)
#define PBIGEJHGLEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEF7400)

	class PBIGEJHGLEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x336E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIGEJHGLEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH___C_CTOR_OFFSET))(this);
		}

		::PBIGEJHGLEH* __cctor_b__23_0()
		{
			return ((::PBIGEJHGLEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
