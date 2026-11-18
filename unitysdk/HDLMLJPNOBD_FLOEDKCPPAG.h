#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class HDLMLJPNOBD_PCMACKHEFAD;

#define HDLMLJPNOBD_FLOEDKCPPAG_HHGAKGGHGBE_OFFSET UNITYSDK_OFFSET(0x17AECC00)
#define HDLMLJPNOBD_FLOEDKCPPAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17AECBF0)

inline static constexpr unsigned int HDLMLJPNOBD_FLOEDKCPPAG_TypeDefinitionIndex = 38704;

class HDLMLJPNOBD_FLOEDKCPPAG : public ::System::Object
{
public:
	::HDLMLJPNOBD_PCMACKHEFAD* EEMOEMFLABI; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_FLOEDKCPPAG__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HHGAKGGHGBE()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_FLOEDKCPPAG_HHGAKGGHGBE_OFFSET))(this);
	}
};
