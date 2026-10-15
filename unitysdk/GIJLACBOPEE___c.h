#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJLACBOPEE;
namespace System { class Object; }

#define GIJLACBOPEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49D030)
#define GIJLACBOPEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49D070)
#define GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E49D080)

	class GIJLACBOPEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CTOR_OFFSET))(this);
		}

		::GIJLACBOPEE* __cctor_b__33_0()
		{
			return ((::GIJLACBOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
