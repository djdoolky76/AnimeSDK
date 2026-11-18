#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class EGCJOPJKNLD;
namespace System { class Action; }

#define EGCJOPJKNLD_OFJNLCMKHAL_MIKLHNIAAME_OFFSET UNITYSDK_OFFSET(0x154A8830)
#define EGCJOPJKNLD_OFJNLCMKHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x154A8820)

inline static constexpr unsigned int EGCJOPJKNLD_OFJNLCMKHAL_TypeDefinitionIndex = 75247;

class EGCJOPJKNLD_OFJNLCMKHAL : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10
	::EGCJOPJKNLD* KLHPEBKNIFB; // 0x18
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_OFJNLCMKHAL__CTOR_OFFSET))(this);
	}

	::System::Void MIKLHNIAAME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_OFJNLCMKHAL_MIKLHNIAAME_OFFSET))(this);
	}
};
