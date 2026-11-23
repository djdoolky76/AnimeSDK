#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EB54343F144D93E2_B90EF2DCE6E1DD00_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EB54343F144D93E2_B90EF2DCE6E1DD00__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

inline static constexpr unsigned int EB54343F144D93E2_B90EF2DCE6E1DD00_TypeDefinitionIndex = 3152;

class EB54343F144D93E2_B90EF2DCE6E1DD00 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB54343F144D93E2_B90EF2DCE6E1DD00__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 F68FE485C2FCB7C2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EB54343F144D93E2_B90EF2DCE6E1DD00_INVOKE_OFFSET))(this, F68FE485C2FCB7C2);
	}
};
