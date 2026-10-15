#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNPGBGDPIIK;
namespace System { class Object; }

#define LNPGBGDPIIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8AE0)
#define LNPGBGDPIIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8B20)
#define LNPGBGDPIIK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9B8B30)

	class LNPGBGDPIIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNPGBGDPIIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPGBGDPIIK___C_CTOR_OFFSET))(this);
		}

		::LNPGBGDPIIK* __cctor_b__38_0()
		{
			return ((::LNPGBGDPIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPGBGDPIIK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
