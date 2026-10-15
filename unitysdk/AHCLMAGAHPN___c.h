#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
namespace System { class Object; }

#define AHCLMAGAHPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26D400)
#define AHCLMAGAHPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26D430)
#define AHCLMAGAHPN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E26D440)

	class AHCLMAGAHPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x318C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHCLMAGAHPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN___C_CTOR_OFFSET))(this);
		}

		::AHCLMAGAHPN* __cctor_b__28_0()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
