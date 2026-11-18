#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

#define OKEGMILLHJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14F89830)

inline static constexpr unsigned int OKEGMILLHJJ_TypeDefinitionIndex = 82984;

class OKEGMILLHJJ : public ::System::Object
{
public:
	::Foundation::Coroutine::CoroutineHandle JBJEIHLKBKK; // 0x10
	::System::Int32 KCKCBCPFICF; // 0x14
	::System::Int64 HJKNAKOFHDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEGMILLHJJ__CTOR_OFFSET))(this);
	}
};
