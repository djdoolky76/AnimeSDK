#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define KNPLNBCOBBJ_NGPPDDNPOLL_ABIEFLHAACA_OFFSET UNITYSDK_OFFSET(0x19968120)
#define KNPLNBCOBBJ_NGPPDDNPOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19968110)

inline static constexpr unsigned int KNPLNBCOBBJ_NGPPDDNPOLL_TypeDefinitionIndex = 62094;

class KNPLNBCOBBJ_NGPPDDNPOLL : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* OFJCLIEIOFI; // 0x10
	::System::Int32 NJBALIKDOCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ_NGPPDDNPOLL__CTOR_OFFSET))(this);
	}

	::System::Void ABIEFLHAACA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ_NGPPDDNPOLL_ABIEFLHAACA_OFFSET))(this);
	}
};
