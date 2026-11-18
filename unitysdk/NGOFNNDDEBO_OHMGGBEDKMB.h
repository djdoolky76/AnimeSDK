#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELKNCGOJPN.h"
#include "unitysdk/NDPKCBLNKJB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class NGOFNNDDEBO;

#define NGOFNNDDEBO_OHMGGBEDKMB_BJLGBGPJELN_OFFSET UNITYSDK_OFFSET(0x16B72D80)
#define NGOFNNDDEBO_OHMGGBEDKMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B72560)

inline static constexpr unsigned int NGOFNNDDEBO_OHMGGBEDKMB_TypeDefinitionIndex = 71209;

class NGOFNNDDEBO_OHMGGBEDKMB : public ::System::Object
{
public:
	::NGOFNNDDEBO* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::CELKNCGOJPN GHNAFBPJNKB; // 0x20
	::NDPKCBLNKJB IIGHHFNIJNC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_OHMGGBEDKMB__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BJLGBGPJELN()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_OHMGGBEDKMB_BJLGBGPJELN_OFFSET))(this);
	}
};
