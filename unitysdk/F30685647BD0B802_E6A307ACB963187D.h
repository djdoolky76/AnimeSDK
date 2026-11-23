#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F30685647BD0B802_E6A307ACB963187D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_E6A307ACB963187D__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

inline static constexpr unsigned int F30685647BD0B802_E6A307ACB963187D_TypeDefinitionIndex = 11824;

class F30685647BD0B802_E6A307ACB963187D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_E6A307ACB963187D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* F1BF0FE85E9DD584, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F30685647BD0B802_E6A307ACB963187D_INVOKE_OFFSET))(this, F1BF0FE85E9DD584, E04D2BE64FCE9814);
	}
};
