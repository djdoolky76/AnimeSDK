#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

class A8C5C890EA8DE6C2;
namespace System { class Object; }

#define B68A010ABD4B03C6_F548CE556A5E182C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B68A010ABD4B03C6_F548CE556A5E182C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

namespace B68A010ABD4B03C6
{
	inline static constexpr unsigned int F548CE556A5E182C_TypeDefinitionIndex = 9542;

	class F548CE556A5E182C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B68A010ABD4B03C6_F548CE556A5E182C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::E12F55A5FCCCF1EC Invoke(::A8C5C890EA8DE6C2* A226EC781ADD7E7B)
		{
			return ((::E12F55A5FCCCF1EC(*)(::PVOID, ::A8C5C890EA8DE6C2*))((::PBYTE)hIl2Cpp + B68A010ABD4B03C6_F548CE556A5E182C_INVOKE_OFFSET))(this, A226EC781ADD7E7B);
		}
	};
}
