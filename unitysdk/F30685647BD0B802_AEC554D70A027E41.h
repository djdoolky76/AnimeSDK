#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_AEC554D70A027E41_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_AEC554D70A027E41__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

inline static constexpr unsigned int F30685647BD0B802_AEC554D70A027E41_TypeDefinitionIndex = 11849;

class F30685647BD0B802_AEC554D70A027E41 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_AEC554D70A027E41__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* F1BF0FE85E9DD584, ::System::Action* F8668871271D968A)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + F30685647BD0B802_AEC554D70A027E41_INVOKE_OFFSET))(this, F1BF0FE85E9DD584, F8668871271D968A);
	}
};
