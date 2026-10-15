#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFFCEACMEIG;
namespace System { class Object; }

#define HFFCEACMEIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567310)
#define HFFCEACMEIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E567350)
#define HFFCEACMEIG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E567360)

	class HFFCEACMEIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFFCEACMEIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG___C_CTOR_OFFSET))(this);
		}

		::HFFCEACMEIG* __cctor_b__23_0()
		{
			return ((::HFFCEACMEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
