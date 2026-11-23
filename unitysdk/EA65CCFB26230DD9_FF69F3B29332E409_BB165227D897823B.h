#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B__CTOR_OFFSET UNITYSDK_OFFSET(0x2F7E8C0)

inline static constexpr unsigned int EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B_TypeDefinitionIndex = 10386;

class EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::System::Int32 F4FB98098AF61409)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EA65CCFB26230DD9_FF69F3B29332E409_BB165227D897823B_INVOKE_OFFSET))(this, F4FB98098AF61409);
	}
};
