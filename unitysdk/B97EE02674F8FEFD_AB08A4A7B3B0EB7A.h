#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/B97EE02674F8FEFD_A07A2C2283BC7CCD.h"

namespace System { class Object; }

#define B97EE02674F8FEFD_AB08A4A7B3B0EB7A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B97EE02674F8FEFD_AB08A4A7B3B0EB7A__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95CF0)

inline static constexpr unsigned int B97EE02674F8FEFD_AB08A4A7B3B0EB7A_TypeDefinitionIndex = 19084;

class B97EE02674F8FEFD_AB08A4A7B3B0EB7A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B97EE02674F8FEFD_AB08A4A7B3B0EB7A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::B97EE02674F8FEFD_A07A2C2283BC7CCD& B29880F033C1F232)
	{
		return ((::System::Void(*)(::PVOID, ::B97EE02674F8FEFD_A07A2C2283BC7CCD&))((::PBYTE)hIl2Cpp + B97EE02674F8FEFD_AB08A4A7B3B0EB7A_INVOKE_OFFSET))(this, B29880F033C1F232);
	}
};
