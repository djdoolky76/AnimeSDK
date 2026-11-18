#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNBFJCMPEOM__CTOR_OFFSET UNITYSDK_OFFSET(0x18642510)

inline static constexpr unsigned int KNBFJCMPEOM_TypeDefinitionIndex = 87030;

class KNBFJCMPEOM : public ::System::Object
{
public:
	::System::Int32 BABIHDEGHAB; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBFJCMPEOM__CTOR_OFFSET))(this);
	}
};
