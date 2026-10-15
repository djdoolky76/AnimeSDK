#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKEFJFJLOMJ;
namespace System { class Object; }

#define KKEFJFJLOMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E877880)
#define KKEFJFJLOMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8778C0)
#define KKEFJFJLOMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8778D0)

	class KKEFJFJLOMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C_CTOR_OFFSET))(this);
		}

		::KKEFJFJLOMJ* __cctor_b__23_0()
		{
			return ((::KKEFJFJLOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
