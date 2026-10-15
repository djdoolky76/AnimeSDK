#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDJFKFFPDKI;
namespace System { class Object; }

#define PDJFKFFPDKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF10950)
#define PDJFKFFPDKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF10990)
#define PDJFKFFPDKI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF109A0)

	class PDJFKFFPDKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDJFKFFPDKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJFKFFPDKI___C_CTOR_OFFSET))(this);
		}

		::PDJFKFFPDKI* __cctor_b__23_0()
		{
			return ((::PDJFKFFPDKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJFKFFPDKI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
