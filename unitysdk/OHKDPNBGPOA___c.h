#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHKDPNBGPOA;
namespace System { class Object; }

#define OHKDPNBGPOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE37710)
#define OHKDPNBGPOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE37750)
#define OHKDPNBGPOA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE37760)

inline static constexpr unsigned int OHKDPNBGPOA___c_TypeDefinitionIndex = 28892;

	class OHKDPNBGPOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19FE0);
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
