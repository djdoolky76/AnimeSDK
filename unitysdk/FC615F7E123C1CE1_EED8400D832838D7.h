#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FC615F7E123C1CE1_EED8400D832838D7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define FC615F7E123C1CE1_EED8400D832838D7__CTOR_OFFSET UNITYSDK_OFFSET(0x3E0F120)

inline static constexpr unsigned int FC615F7E123C1CE1_EED8400D832838D7_TypeDefinitionIndex = 14759;

class FC615F7E123C1CE1_EED8400D832838D7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FC615F7E123C1CE1_EED8400D832838D7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr B2A58D4AFEAC153F, ::System::IntPtr F220A2D27F7C6B6C, ::System::Int32 BE4888345DA19382)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + FC615F7E123C1CE1_EED8400D832838D7_INVOKE_OFFSET))(this, B2A58D4AFEAC153F, F220A2D27F7C6B6C, BE4888345DA19382);
	}
};
