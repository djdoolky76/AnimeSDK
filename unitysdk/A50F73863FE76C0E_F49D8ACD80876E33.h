#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A50F73863FE76C0E_F49D8ACD80876E33_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A50F73863FE76C0E_F49D8ACD80876E33__CTOR_OFFSET UNITYSDK_OFFSET(0x37444E0)

inline static constexpr unsigned int A50F73863FE76C0E_F49D8ACD80876E33_TypeDefinitionIndex = 11796;

class A50F73863FE76C0E_F49D8ACD80876E33 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_F49D8ACD80876E33__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::Il2CppArray<::System::Byte>* E0C0689B1CEBE48C, ::System::UInt64 F2E014F34A4A1D04)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_F49D8ACD80876E33_INVOKE_OFFSET))(this, E0C0689B1CEBE48C, F2E014F34A4A1D04);
	}
};
