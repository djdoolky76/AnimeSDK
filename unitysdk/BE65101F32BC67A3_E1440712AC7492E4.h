#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System { class Object; }

#define BE65101F32BC67A3_E1440712AC7492E4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BE65101F32BC67A3_E1440712AC7492E4__CTOR_OFFSET UNITYSDK_OFFSET(0x2F7E8C0)

inline static constexpr unsigned int BE65101F32BC67A3_E1440712AC7492E4_TypeDefinitionIndex = 12026;

class BE65101F32BC67A3_E1440712AC7492E4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BE65101F32BC67A3_E1440712AC7492E4__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::UnityEngine::AF7290E01E012C43 AC6A3121018D8761)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AF7290E01E012C43))((::PBYTE)hIl2Cpp + BE65101F32BC67A3_E1440712AC7492E4_INVOKE_OFFSET))(this, AC6A3121018D8761);
	}
};
