#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace A418C49FA6A8C1F7 { class ED7915BCDEED130C; }
namespace System { class Object; }
namespace UnityEngine { class ScriptableObject; }

#define A45AF511AA7E1304_FA7774E14CFA3337_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A45AF511AA7E1304_FA7774E14CFA3337__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

inline static constexpr unsigned int A45AF511AA7E1304_FA7774E14CFA3337_TypeDefinitionIndex = 13694;

class A45AF511AA7E1304_FA7774E14CFA3337 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A45AF511AA7E1304_FA7774E14CFA3337__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::A418C49FA6A8C1F7::ED7915BCDEED130C* Invoke(::UnityEngine::ScriptableObject* A6ED3415555601E8)
	{
		return ((::A418C49FA6A8C1F7::ED7915BCDEED130C*(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + A45AF511AA7E1304_FA7774E14CFA3337_INVOKE_OFFSET))(this, A6ED3415555601E8);
	}
};
