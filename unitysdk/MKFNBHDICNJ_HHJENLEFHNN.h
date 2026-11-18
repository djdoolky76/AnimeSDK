#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_HHJENLEFHNN_IOFNKAGCJKH_OFFSET UNITYSDK_OFFSET(0x1A695BA0)
#define MKFNBHDICNJ_HHJENLEFHNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A692FB0)

inline static constexpr unsigned int MKFNBHDICNJ_HHJENLEFHNN_TypeDefinitionIndex = 61330;

class MKFNBHDICNJ_HHJENLEFHNN : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_HHJENLEFHNN__CTOR_OFFSET))(this);
	}

	::System::Void IOFNKAGCJKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_HHJENLEFHNN_IOFNKAGCJKH_OFFSET))(this);
	}
};
