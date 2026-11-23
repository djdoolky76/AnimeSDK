#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FD4101280B84CDEE.h"

namespace System { class Object; }

#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_A8D1EAFCE65482B0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_A8D1EAFCE65482B0__CTOR_OFFSET UNITYSDK_OFFSET(0x2AC45E0)

namespace BFBBD469AD96C5F8
{
	inline static constexpr unsigned int EA9AC2AF232AB7B3_A8D1EAFCE65482B0_TypeDefinitionIndex = 19234;

	class EA9AC2AF232AB7B3_A8D1EAFCE65482B0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_A8D1EAFCE65482B0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::IntPtr F5F0982D4A2BF539, ::System::IntPtr E3D7208CB6507547, ::FD4101280B84CDEE& AB21234ED7F394F1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::FD4101280B84CDEE&))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_A8D1EAFCE65482B0_INVOKE_OFFSET))(this, F5F0982D4A2BF539, E3D7208CB6507547, AB21234ED7F394F1);
		}
	};
}
