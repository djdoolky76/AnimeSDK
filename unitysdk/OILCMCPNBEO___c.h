#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OILCMCPNBEO;
namespace System { class Object; }

#define OILCMCPNBEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE469B0)
#define OILCMCPNBEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE469F0)
#define OILCMCPNBEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE46A00)

inline static constexpr unsigned int OILCMCPNBEO___c_TypeDefinitionIndex = 29396;

	class OILCMCPNBEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OILCMCPNBEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO___C_CTOR_OFFSET))(this);
		}

		::OILCMCPNBEO* __cctor_b__23_0()
		{
			return ((::OILCMCPNBEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
