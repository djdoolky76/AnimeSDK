#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define B3FB68A61959313A_A58A6DA0FD8844FB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B3FB68A61959313A_A58A6DA0FD8844FB__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int B3FB68A61959313A_A58A6DA0FD8844FB_TypeDefinitionIndex = 19238;

class B3FB68A61959313A_A58A6DA0FD8844FB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B3FB68A61959313A_A58A6DA0FD8844FB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B3FB68A61959313A_A58A6DA0FD8844FB_INVOKE_OFFSET))(this, B083BE7841B347C4);
	}
};
