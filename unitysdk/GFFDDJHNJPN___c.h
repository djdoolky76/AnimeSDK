#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFDDJHNJPN;
namespace System { class Object; }

#define GFFDDJHNJPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4676C0)
#define GFFDDJHNJPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E467700)
#define GFFDDJHNJPN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E467710)

	class GFFDDJHNJPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFDDJHNJPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN___C_CTOR_OFFSET))(this);
		}

		::GFFDDJHNJPN* __cctor_b__28_0()
		{
			return ((::GFFDDJHNJPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
