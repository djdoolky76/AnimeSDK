#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FD4101280B84CDEE.h"

namespace System { class Object; }

#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_B8722B4D6D9A7DE6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_B8722B4D6D9A7DE6__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95CF0)

namespace BFBBD469AD96C5F8
{
	inline static constexpr unsigned int EA9AC2AF232AB7B3_B8722B4D6D9A7DE6_TypeDefinitionIndex = 19230;

	class EA9AC2AF232AB7B3_B8722B4D6D9A7DE6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_B8722B4D6D9A7DE6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::FD4101280B84CDEE& AB21234ED7F394F1)
		{
			return ((::System::Void(*)(::PVOID, ::FD4101280B84CDEE&))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_B8722B4D6D9A7DE6_INVOKE_OFFSET))(this, AB21234ED7F394F1);
		}
	};
}
