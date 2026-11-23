#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BCA08575A137A002_BEF53DA91F1BCD0E;
namespace System { class Object; }

#define BCA08575A137A002_A58A6DA0FD8844FB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BCA08575A137A002_A58A6DA0FD8844FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int BCA08575A137A002_A58A6DA0FD8844FB_TypeDefinitionIndex = 16035;

class BCA08575A137A002_A58A6DA0FD8844FB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BCA08575A137A002_A58A6DA0FD8844FB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::BCA08575A137A002_BEF53DA91F1BCD0E* B31D2A0991A78809)
	{
		return ((::System::Void(*)(::PVOID, ::BCA08575A137A002_BEF53DA91F1BCD0E*))((::PBYTE)hIl2Cpp + BCA08575A137A002_A58A6DA0FD8844FB_INVOKE_OFFSET))(this, B31D2A0991A78809);
	}
};
