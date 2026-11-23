#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B9E4CC8EC8E4849E.h"
#include "unitysdk/E008D7DFD883F6F8.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define FE399E8C446747BE_BCA44AF342A2F369_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define FE399E8C446747BE_BCA44AF342A2F369__CTOR_OFFSET UNITYSDK_OFFSET(0x2911D50)

inline static constexpr unsigned int FE399E8C446747BE_BCA44AF342A2F369_TypeDefinitionIndex = 19702;

class FE399E8C446747BE_BCA44AF342A2F369 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BCA44AF342A2F369__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E008D7DFD883F6F8 A038B60110362D20, ::B9E4CC8EC8E4849E F547EDEB66D05D29, ::System::UInt32 BADCD2620F5CF985, ::System::UInt64 F33FA6F0CC1A9835, ::System::String* E48AD1455DB6004E)
	{
		return ((::System::Void(*)(::PVOID, ::E008D7DFD883F6F8, ::B9E4CC8EC8E4849E, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BCA44AF342A2F369_INVOKE_OFFSET))(this, A038B60110362D20, F547EDEB66D05D29, BADCD2620F5CF985, F33FA6F0CC1A9835, E48AD1455DB6004E);
	}
};
