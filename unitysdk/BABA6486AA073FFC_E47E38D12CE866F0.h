#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define BABA6486AA073FFC_E47E38D12CE866F0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BABA6486AA073FFC_E47E38D12CE866F0__CTOR_OFFSET UNITYSDK_OFFSET(0x2911C70)

inline static constexpr unsigned int BABA6486AA073FFC_E47E38D12CE866F0_TypeDefinitionIndex = 19734;

class BABA6486AA073FFC_E47E38D12CE866F0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BABA6486AA073FFC_E47E38D12CE866F0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::UInt64 Invoke(::UnityEngine::GameObject* BC63F4052E4478D7)
	{
		return ((::System::UInt64(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BABA6486AA073FFC_E47E38D12CE866F0_INVOKE_OFFSET))(this, BC63F4052E4478D7);
	}
};
