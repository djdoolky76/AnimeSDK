#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANPNPAOHJGA;
namespace System { class Object; }

#define ANPNPAOHJGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E666F50)
#define ANPNPAOHJGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E666F80)
#define ANPNPAOHJGA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E666F90)

	class ANPNPAOHJGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANPNPAOHJGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPNPAOHJGA___C_CTOR_OFFSET))(this);
		}

		::ANPNPAOHJGA* __cctor_b__58_0()
		{
			return ((::ANPNPAOHJGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPNPAOHJGA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
