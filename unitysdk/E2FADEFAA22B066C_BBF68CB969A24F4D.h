#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define E2FADEFAA22B066C_BBF68CB969A24F4D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E2FADEFAA22B066C_BBF68CB969A24F4D__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int E2FADEFAA22B066C_BBF68CB969A24F4D_TypeDefinitionIndex = 11760;

class E2FADEFAA22B066C_BBF68CB969A24F4D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E2FADEFAA22B066C_BBF68CB969A24F4D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::UnityEngine::Texture2D* E2F69B1AC05DF698)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + E2FADEFAA22B066C_BBF68CB969A24F4D_INVOKE_OFFSET))(this, E2F69B1AC05DF698);
	}
};
