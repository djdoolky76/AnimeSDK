#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_FB1EA8B73B3FAA74_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_FB1EA8B73B3FAA74__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int F30685647BD0B802_FB1EA8B73B3FAA74_TypeDefinitionIndex = 11853;

class F30685647BD0B802_FB1EA8B73B3FAA74 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_FB1EA8B73B3FAA74__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AB46D6A196F8FF64, ::System::String* BD2C65BCCC92F212)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + F30685647BD0B802_FB1EA8B73B3FAA74_INVOKE_OFFSET))(this, AB46D6A196F8FF64, BD2C65BCCC92F212);
	}
};
