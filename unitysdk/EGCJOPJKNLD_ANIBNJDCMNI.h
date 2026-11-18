#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class EGCJOPJKNLD;
namespace System { class Action; }

#define EGCJOPJKNLD_ANIBNJDCMNI_NPIIOHMOELA_OFFSET UNITYSDK_OFFSET(0x17230640)
#define EGCJOPJKNLD_ANIBNJDCMNI__CTOR_OFFSET UNITYSDK_OFFSET(0x17230630)

inline static constexpr unsigned int EGCJOPJKNLD_ANIBNJDCMNI_TypeDefinitionIndex = 75249;

class EGCJOPJKNLD_ANIBNJDCMNI : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10
	::EGCJOPJKNLD* KLHPEBKNIFB; // 0x18
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_ANIBNJDCMNI__CTOR_OFFSET))(this);
	}

	::System::Void NPIIOHMOELA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_ANIBNJDCMNI_NPIIOHMOELA_OFFSET))(this);
	}
};
