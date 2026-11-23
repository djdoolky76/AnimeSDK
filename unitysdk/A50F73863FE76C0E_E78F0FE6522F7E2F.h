#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A50F73863FE76C0E_B9BEE981F89DAF42.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A50F73863FE76C0E_E78F0FE6522F7E2F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A50F73863FE76C0E_E78F0FE6522F7E2F__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDD40)

inline static constexpr unsigned int A50F73863FE76C0E_E78F0FE6522F7E2F_TypeDefinitionIndex = 11795;

class A50F73863FE76C0E_E78F0FE6522F7E2F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_E78F0FE6522F7E2F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::A50F73863FE76C0E_B9BEE981F89DAF42 A3BDDE9D1F2C8C6A, ::Il2CppArray<::System::Byte>* F0D3F87128A7C4CA, ::System::UInt64 F2E014F34A4A1D04, ::System::IntPtr E6CE7391633EEC68)
	{
		return ((::System::Boolean(*)(::PVOID, ::A50F73863FE76C0E_B9BEE981F89DAF42, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_E78F0FE6522F7E2F_INVOKE_OFFSET))(this, A3BDDE9D1F2C8C6A, F0D3F87128A7C4CA, F2E014F34A4A1D04, E6CE7391633EEC68);
	}
};
