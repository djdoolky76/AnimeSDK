#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DJKHNKJFMJO_KHNCCINLADO_CAOBDPEIMOG_OFFSET UNITYSDK_OFFSET(0x12414950)
#define DJKHNKJFMJO_KHNCCINLADO__CTOR_OFFSET UNITYSDK_OFFSET(0x12414940)

inline static constexpr unsigned int DJKHNKJFMJO_KHNCCINLADO_TypeDefinitionIndex = 57072;

class DJKHNKJFMJO_KHNCCINLADO : public ::System::Object
{
public:
	::DJKHNKJFMJO* KLHPEBKNIFB; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FCCFGMANMKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_KHNCCINLADO__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CAOBDPEIMOG()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_KHNCCINLADO_CAOBDPEIMOG_OFFSET))(this);
	}
};
