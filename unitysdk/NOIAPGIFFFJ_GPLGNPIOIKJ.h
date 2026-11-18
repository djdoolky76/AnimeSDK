#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { template <typename T> class Action_1; }

#define NOIAPGIFFFJ_GPLGNPIOIKJ_LIGNCNBEJJG_OFFSET UNITYSDK_OFFSET(0xE1ACF20)
#define NOIAPGIFFFJ_GPLGNPIOIKJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE1ACF10)

inline static constexpr unsigned int NOIAPGIFFFJ_GPLGNPIOIKJ_TypeDefinitionIndex = 61572;

class NOIAPGIFFFJ_GPLGNPIOIKJ : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KHGFAKJKDGG; // 0x10
	::System::Action_1<::System::Boolean>* AMHGBGMOMLL; // 0x18
	::System::Int32 NLGLKFCLBGE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_GPLGNPIOIKJ__CTOR_OFFSET))(this);
	}

	::System::Void LIGNCNBEJJG(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_GPLGNPIOIKJ_LIGNCNBEJJG_OFFSET))(this, PIIPCLCCOIG);
	}
};
