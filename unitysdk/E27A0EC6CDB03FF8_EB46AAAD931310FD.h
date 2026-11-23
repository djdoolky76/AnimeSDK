#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FF5156FD193EB145.h"

namespace System { class Object; }

#define E27A0EC6CDB03FF8_EB46AAAD931310FD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define E27A0EC6CDB03FF8_EB46AAAD931310FD__CTOR_OFFSET UNITYSDK_OFFSET(0x3CAD220)

inline static constexpr unsigned int E27A0EC6CDB03FF8_EB46AAAD931310FD_TypeDefinitionIndex = 10430;

class E27A0EC6CDB03FF8_EB46AAAD931310FD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E27A0EC6CDB03FF8_EB46AAAD931310FD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::FF5156FD193EB145& BB83557721B5F386, ::System::Int32 E70C1DCC648798D3, ::System::Int32& E82293C0814051A5)
	{
		return ((::System::Boolean(*)(::PVOID, ::FF5156FD193EB145&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + E27A0EC6CDB03FF8_EB46AAAD931310FD_INVOKE_OFFSET))(this, BB83557721B5F386, E70C1DCC648798D3, E82293C0814051A5);
	}
};
