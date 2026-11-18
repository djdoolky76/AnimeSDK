#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIHJAMAHMIM__CTOR_OFFSET UNITYSDK_OFFSET(0xF79B660)

inline static constexpr unsigned int BIHJAMAHMIM_TypeDefinitionIndex = 39718;

class BIHJAMAHMIM : public ::System::Object
{
public:
	::System::UInt32 AOBGJLOBEHL; // 0x10
	::System::UInt32 BNCADLLALBF; // 0x14
	::System::Boolean OEDLKHNEFIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHJAMAHMIM__CTOR_OFFSET))(this);
	}
};
