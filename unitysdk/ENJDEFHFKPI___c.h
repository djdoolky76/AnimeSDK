#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENJDEFHFKPI;
namespace System { class Object; }

#define ENJDEFHFKPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F2640)
#define ENJDEFHFKPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F2680)
#define ENJDEFHFKPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2F2690)

	class ENJDEFHFKPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENJDEFHFKPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI___C_CTOR_OFFSET))(this);
		}

		::ENJDEFHFKPI* __cctor_b__23_0()
		{
			return ((::ENJDEFHFKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
