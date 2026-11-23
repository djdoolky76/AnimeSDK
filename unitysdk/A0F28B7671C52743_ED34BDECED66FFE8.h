#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_ED34BDECED66FFE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_ED34BDECED66FFE8__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00CA0)

inline static constexpr unsigned int A0F28B7671C52743_ED34BDECED66FFE8_TypeDefinitionIndex = 12777;

class A0F28B7671C52743_ED34BDECED66FFE8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_ED34BDECED66FFE8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Object* Invoke(::System::String* B960AC235824C6C8, ::System::Int32 B0BAC718F575E320)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A0F28B7671C52743_ED34BDECED66FFE8_INVOKE_OFFSET))(this, B960AC235824C6C8, B0BAC718F575E320);
	}
};
