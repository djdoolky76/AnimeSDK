#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHOPOIIJCPD;
namespace System { class Object; }

#define CHOPOIIJCPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDEC0)
#define CHOPOIIJCPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDF00)
#define CHOPOIIJCPD___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E0CDF10)

	class CHOPOIIJCPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x170B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHOPOIIJCPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOPOIIJCPD___C_CTOR_OFFSET))(this);
		}

		::CHOPOIIJCPD* __cctor_b__58_0()
		{
			return ((::CHOPOIIJCPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOPOIIJCPD___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
