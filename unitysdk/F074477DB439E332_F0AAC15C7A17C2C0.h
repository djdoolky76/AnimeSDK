#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F074477DB439E332_F0AAC15C7A17C2C0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F074477DB439E332_F0AAC15C7A17C2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int F074477DB439E332_F0AAC15C7A17C2C0_TypeDefinitionIndex = 19710;

class F074477DB439E332_F0AAC15C7A17C2C0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F074477DB439E332_F0AAC15C7A17C2C0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F074477DB439E332_F0AAC15C7A17C2C0_INVOKE_OFFSET))(this, B083BE7841B347C4);
	}
};
