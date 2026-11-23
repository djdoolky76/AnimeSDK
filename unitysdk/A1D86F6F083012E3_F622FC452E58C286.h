#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A1D86F6F083012E3_F622FC452E58C286_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A1D86F6F083012E3_F622FC452E58C286__CTOR_OFFSET UNITYSDK_OFFSET(0x3B3A1C0)

inline static constexpr unsigned int A1D86F6F083012E3_F622FC452E58C286_TypeDefinitionIndex = 14703;

class A1D86F6F083012E3_F622FC452E58C286 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A1D86F6F083012E3_F622FC452E58C286__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::IntPtr Invoke(::PVOID B44B7249A0CEA238, ::PVOID F6C2EBBDFCAEF915, ::System::IntPtr FEC4F3B16B8FC7F1, ::PVOID F11A941F20AF1CF7)
	{
		return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + A1D86F6F083012E3_F622FC452E58C286_INVOKE_OFFSET))(this, B44B7249A0CEA238, F6C2EBBDFCAEF915, FEC4F3B16B8FC7F1, F11A941F20AF1CF7);
	}
};
