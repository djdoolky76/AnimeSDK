#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_A04B98F98CC9A607_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define F30685647BD0B802_A04B98F98CC9A607__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

inline static constexpr unsigned int F30685647BD0B802_A04B98F98CC9A607_TypeDefinitionIndex = 11851;

class F30685647BD0B802_A04B98F98CC9A607 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_A04B98F98CC9A607__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AB46D6A196F8FF64, ::System::String* BD2C65BCCC92F212, ::System::String* ADA902CFC22F5C58)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F30685647BD0B802_A04B98F98CC9A607_INVOKE_OFFSET))(this, AB46D6A196F8FF64, BD2C65BCCC92F212, ADA902CFC22F5C58);
	}
};
