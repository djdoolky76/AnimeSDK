#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseSwitch.h"
#include "unitysdk/E379DE61A548837D.h"

#define AF7DB4C550F1CB6A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AF7DB4C550F1CB6A_TypeDefinitionIndex = 8979;

class AF7DB4C550F1CB6A : public ::E379DE61A548837D
{
public:
	::ABC::Config::WwiseSwitch FD9C1E64CD6ABA66; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF7DB4C550F1CB6A__CTOR_OFFSET))(this);
	}
};
