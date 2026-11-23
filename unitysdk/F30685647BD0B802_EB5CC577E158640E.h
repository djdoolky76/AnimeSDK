#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F30685647BD0B802_EB5CC577E158640E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_EB5CC577E158640E__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int F30685647BD0B802_EB5CC577E158640E_TypeDefinitionIndex = 11811;

class F30685647BD0B802_EB5CC577E158640E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_EB5CC577E158640E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F54BD0D7A1C4787C, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F30685647BD0B802_EB5CC577E158640E_INVOKE_OFFSET))(this, F54BD0D7A1C4787C, E04D2BE64FCE9814);
	}
};
