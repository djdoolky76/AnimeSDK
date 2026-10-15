#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCADAPOHGKB;
namespace System { class Object; }

#define BCADAPOHGKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E903CB0)
#define BCADAPOHGKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E903CE0)
#define BCADAPOHGKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E903CF0)

	class BCADAPOHGKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCADAPOHGKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB___C_CTOR_OFFSET))(this);
		}

		::BCADAPOHGKB* __cctor_b__33_0()
		{
			return ((::BCADAPOHGKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
