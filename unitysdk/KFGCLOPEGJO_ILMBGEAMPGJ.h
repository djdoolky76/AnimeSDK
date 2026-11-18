#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class EGCJOPJKNLD;
class GCIMMDDIFBJ;
namespace System { class Action; }
namespace System { class String; }

#define KFGCLOPEGJO_ILMBGEAMPGJ_OAALKJDKLJI_OFFSET UNITYSDK_OFFSET(0x13C55660)
#define KFGCLOPEGJO_ILMBGEAMPGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C55650)

inline static constexpr unsigned int KFGCLOPEGJO_ILMBGEAMPGJ_TypeDefinitionIndex = 78925;

class KFGCLOPEGJO_ILMBGEAMPGJ : public ::System::Object
{
public:
	::System::String* KBMPLDNADEB; // 0x10
	::EGCJOPJKNLD* IGAPBEGEBNK; // 0x18
	::System::String* GLALGLBKENE; // 0x20
	::System::Action* HJECDMDLKON; // 0x28
	::System::Action* OCIKNBPALGG; // 0x30
	::Foundation::Coroutine::CoroutineHandle NEIEMHLFGIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_ILMBGEAMPGJ__CTOR_OFFSET))(this);
	}

	::System::Void OAALKJDKLJI(::GCIMMDDIFBJ* BKOLCDPOJAL, ::System::Boolean COJBIKBAGHC)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_ILMBGEAMPGJ_OAALKJDKLJI_OFFSET))(this, BKOLCDPOJAL, COJBIKBAGHC);
	}
};
