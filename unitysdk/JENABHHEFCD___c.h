#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JENABHHEFCD;
namespace System { class Object; }

#define JENABHHEFCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E720430)
#define JENABHHEFCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E720470)
#define JENABHHEFCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E720480)

	class JENABHHEFCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENABHHEFCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD___C_CTOR_OFFSET))(this);
		}

		::JENABHHEFCD* __cctor_b__23_0()
		{
			return ((::JENABHHEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
