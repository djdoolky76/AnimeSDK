#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FEB15D0F6A26C506_F1E905A9A25EDD66.h"

namespace System { class Object; }

#define FEB15D0F6A26C506_BE98FE9519DF7A0E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FEB15D0F6A26C506_BE98FE9519DF7A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x33414C0)

inline static constexpr unsigned int FEB15D0F6A26C506_BE98FE9519DF7A0E_TypeDefinitionIndex = 20507;

class FEB15D0F6A26C506_BE98FE9519DF7A0E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FEB15D0F6A26C506_BE98FE9519DF7A0E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr A13B7748C703FE2E, ::FEB15D0F6A26C506_F1E905A9A25EDD66& A6B5840567522F01)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::FEB15D0F6A26C506_F1E905A9A25EDD66&))((::PBYTE)hIl2Cpp + FEB15D0F6A26C506_BE98FE9519DF7A0E_INVOKE_OFFSET))(this, A13B7748C703FE2E, A6B5840567522F01);
	}
};
