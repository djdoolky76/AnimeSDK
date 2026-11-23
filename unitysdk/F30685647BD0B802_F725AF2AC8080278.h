#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F30685647BD0B802_FB1EA8B73B3FAA74;
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_F725AF2AC8080278_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_F725AF2AC8080278__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int F30685647BD0B802_F725AF2AC8080278_TypeDefinitionIndex = 11854;

class F30685647BD0B802_F725AF2AC8080278 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_F725AF2AC8080278__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* BD2C65BCCC92F212, ::F30685647BD0B802_FB1EA8B73B3FAA74* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F30685647BD0B802_FB1EA8B73B3FAA74*))((::PBYTE)hIl2Cpp + F30685647BD0B802_F725AF2AC8080278_INVOKE_OFFSET))(this, BD2C65BCCC92F212, E04D2BE64FCE9814);
	}
};
