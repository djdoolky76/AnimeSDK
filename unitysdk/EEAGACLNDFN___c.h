#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEAGACLNDFN;
namespace System { class Object; }

#define EEAGACLNDFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E264290)
#define EEAGACLNDFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2642D0)
#define EEAGACLNDFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2642E0)

	class EEAGACLNDFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEAGACLNDFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN___C_CTOR_OFFSET))(this);
		}

		::EEAGACLNDFN* __cctor_b__23_0()
		{
			return ((::EEAGACLNDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAGACLNDFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
