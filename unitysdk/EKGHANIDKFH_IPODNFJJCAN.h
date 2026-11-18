#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define EKGHANIDKFH_IPODNFJJCAN_HLHILDJEAON_OFFSET UNITYSDK_OFFSET(0x11CB1160)
#define EKGHANIDKFH_IPODNFJJCAN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB1150)

inline static constexpr unsigned int EKGHANIDKFH_IPODNFJJCAN_TypeDefinitionIndex = 75040;

class EKGHANIDKFH_IPODNFJJCAN : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* CPCOBKCDFIF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGHANIDKFH_IPODNFJJCAN__CTOR_OFFSET))(this);
	}

	::System::Void HLHILDJEAON(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKGHANIDKFH_IPODNFJJCAN_HLHILDJEAON_OFFSET))(this, EBFCACIEKBC);
	}
};
