#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F30685647BD0B802_F31A0DC01B53E350_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F30685647BD0B802_F31A0DC01B53E350__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int F30685647BD0B802_F31A0DC01B53E350_TypeDefinitionIndex = 11814;

class F30685647BD0B802_F31A0DC01B53E350 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_F31A0DC01B53E350__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F30685647BD0B802_F31A0DC01B53E350_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
