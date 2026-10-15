#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHKDPNBGPOA;
namespace System { class Object; }

#define OHKDPNBGPOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE64E50)
#define OHKDPNBGPOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE64E90)
#define OHKDPNBGPOA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE64EA0)

	class OHKDPNBGPOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHKDPNBGPOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA___C_CTOR_OFFSET))(this);
		}

		::OHKDPNBGPOA* __cctor_b__43_0()
		{
			return ((::OHKDPNBGPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKDPNBGPOA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
