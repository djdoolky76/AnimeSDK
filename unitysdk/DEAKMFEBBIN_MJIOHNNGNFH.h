#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DEAKMFEBBIN_MJIOHNNGNFH_PPBHDPLFOGI_OFFSET UNITYSDK_OFFSET(0x12404B60)
#define DEAKMFEBBIN_MJIOHNNGNFH__CTOR_OFFSET UNITYSDK_OFFSET(0x12404B50)

inline static constexpr unsigned int DEAKMFEBBIN_MJIOHNNGNFH_TypeDefinitionIndex = 67716;

class DEAKMFEBBIN_MJIOHNNGNFH : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_MJIOHNNGNFH__CTOR_OFFSET))(this);
	}

	::System::Void PPBHDPLFOGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_MJIOHNNGNFH_PPBHDPLFOGI_OFFSET))(this);
	}
};
