#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCHPLEJCKC;
namespace System { class Object; }

#define KPCHPLEJCKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B90C0)
#define KPCHPLEJCKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9100)
#define KPCHPLEJCKC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8B9110)

	class KPCHPLEJCKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C_CTOR_OFFSET))(this);
		}

		::KPCHPLEJCKC* __cctor_b__38_0()
		{
			return ((::KPCHPLEJCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
