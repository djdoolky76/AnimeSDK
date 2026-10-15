#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGAMBKHDBO;
namespace System { class Object; }

#define EBGAMBKHDBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2364A0)
#define EBGAMBKHDBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2364D0)
#define EBGAMBKHDBO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2364E0)

	class EBGAMBKHDBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGAMBKHDBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAMBKHDBO___C_CTOR_OFFSET))(this);
		}

		::EBGAMBKHDBO* __cctor_b__38_0()
		{
			return ((::EBGAMBKHDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAMBKHDBO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
