#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDMOOGBPGMN;

#define KDMOOGBPGMN_KIFAHHEGLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x130B4E20)

inline static constexpr unsigned int KDMOOGBPGMN_KIFAHHEGLFD_TypeDefinitionIndex = 45198;

class KDMOOGBPGMN_KIFAHHEGLFD : public ::System::Object
{
public:
	::KDMOOGBPGMN* KLHPEBKNIFB; // 0x10
	::System::Boolean GGDPEIAPBIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOGBPGMN_KIFAHHEGLFD__CTOR_OFFSET))(this);
	}
};
