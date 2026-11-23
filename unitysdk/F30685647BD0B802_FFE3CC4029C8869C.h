#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_FFE3CC4029C8869C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_FFE3CC4029C8869C__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

inline static constexpr unsigned int F30685647BD0B802_FFE3CC4029C8869C_TypeDefinitionIndex = 11807;

class F30685647BD0B802_FFE3CC4029C8869C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_FFE3CC4029C8869C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* B960AC235824C6C8, ::System::Action* F8668871271D968A)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + F30685647BD0B802_FFE3CC4029C8869C_INVOKE_OFFSET))(this, B960AC235824C6C8, F8668871271D968A);
	}
};
