#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0_TypeDefinitionIndex = 20981;

class BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BA382EB502630596_B4B844EDC3AE8543_B7A5B2FC3B5741E0_INVOKE_OFFSET))(this);
	}
};
