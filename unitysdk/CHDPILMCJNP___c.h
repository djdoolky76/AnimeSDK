#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDPILMCJNP;
namespace System { class Object; }

#define CHDPILMCJNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2E00)
#define CHDPILMCJNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2E40)
#define CHDPILMCJNP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0C2E50)

	class CHDPILMCJNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDPILMCJNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP___C_CTOR_OFFSET))(this);
		}

		::CHDPILMCJNP* __cctor_b__18_0()
		{
			return ((::CHDPILMCJNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
