#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDDPBFJFEMN_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x13B5BA00)
#define NDDPBFJFEMN__CTOR_OFFSET UNITYSDK_OFFSET(0x13B5B9F0)

inline static constexpr unsigned int NDDPBFJFEMN_TypeDefinitionIndex = 49997;

class NDDPBFJFEMN : public ::System::Object
{
public:
	::System::Boolean BKEEIFNAANN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDPBFJFEMN__CTOR_OFFSET))(this);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDPBFJFEMN_HDLGEDBNEIP_OFFSET))(this);
	}
};
