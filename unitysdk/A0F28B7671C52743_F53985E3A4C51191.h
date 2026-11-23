#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_F53985E3A4C51191_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A0F28B7671C52743_F53985E3A4C51191__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7C40)

inline static constexpr unsigned int A0F28B7671C52743_F53985E3A4C51191_TypeDefinitionIndex = 12813;

class A0F28B7671C52743_F53985E3A4C51191 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F53985E3A4C51191__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::String* A5C299C395D3E1B2, ::System::String* E0C0689B1CEBE48C, ::System::String* FD0ADA5A8EB95003)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F53985E3A4C51191_INVOKE_OFFSET))(this, B8334CB64332323A, A5C299C395D3E1B2, E0C0689B1CEBE48C, FD0ADA5A8EB95003);
	}
};
