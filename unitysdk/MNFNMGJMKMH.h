#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNFNMGJMKMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D94030)

inline static constexpr unsigned int MNFNMGJMKMH_TypeDefinitionIndex = 67083;

class MNFNMGJMKMH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFNMGJMKMH__CTOR_OFFSET))(this);
	}
};
