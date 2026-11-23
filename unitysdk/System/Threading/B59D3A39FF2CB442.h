#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define SYSTEM_THREADING_B59D3A39FF2CB442_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_THREADING_B59D3A39FF2CB442__CTOR_OFFSET UNITYSDK_OFFSET(0x2936F40)

namespace System::Threading
{
	inline static constexpr unsigned int B59D3A39FF2CB442_TypeDefinitionIndex = 10745;

	class B59D3A39FF2CB442 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Object* E5EB06E4FD2C32F7, ::System::Boolean AF626EC2E15F7B20)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_B59D3A39FF2CB442_INVOKE_OFFSET))(this, E5EB06E4FD2C32F7, AF626EC2E15F7B20);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_B59D3A39FF2CB442__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
