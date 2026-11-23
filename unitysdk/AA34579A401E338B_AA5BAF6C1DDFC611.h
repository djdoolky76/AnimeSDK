#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define AA34579A401E338B_AA5BAF6C1DDFC611_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define AA34579A401E338B_AA5BAF6C1DDFC611__CTOR_OFFSET UNITYSDK_OFFSET(0x3E73DF0)

inline static constexpr unsigned int AA34579A401E338B_AA5BAF6C1DDFC611_TypeDefinitionIndex = 14924;

class AA34579A401E338B_AA5BAF6C1DDFC611 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AA34579A401E338B_AA5BAF6C1DDFC611__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr BB83557721B5F386, ::System::IntPtr F2E014F34A4A1D04, ::System::IntPtr F99B0FE319DB74D1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + AA34579A401E338B_AA5BAF6C1DDFC611_INVOKE_OFFSET))(this, BB83557721B5F386, F2E014F34A4A1D04, F99B0FE319DB74D1);
	}
};
