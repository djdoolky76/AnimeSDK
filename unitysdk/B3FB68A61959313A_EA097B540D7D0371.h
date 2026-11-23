#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B3FB68A61959313A_EA097B540D7D0371_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define B3FB68A61959313A_EA097B540D7D0371__CTOR_OFFSET UNITYSDK_OFFSET(0x2AC4690)

inline static constexpr unsigned int B3FB68A61959313A_EA097B540D7D0371_TypeDefinitionIndex = 19239;

class B3FB68A61959313A_EA097B540D7D0371 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B3FB68A61959313A_EA097B540D7D0371__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::IntPtr AC0C72AF210E17A1, ::System::UInt32 ED6BA5E2880F301C, ::System::UInt32 AB470184008E3FF1, ::System::IntPtr B95F68936D33858D)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + B3FB68A61959313A_EA097B540D7D0371_INVOKE_OFFSET))(this, AC0C72AF210E17A1, ED6BA5E2880F301C, AB470184008E3FF1, B95F68936D33858D);
	}
};
