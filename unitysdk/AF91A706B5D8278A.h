#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define AF91A706B5D8278A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AF91A706B5D8278A_TypeDefinitionIndex = 6746;

class AF91A706B5D8278A : public ::E379DE61A548837D
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x38
	::System::UInt32 E4B18145056A6C67; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF91A706B5D8278A__CTOR_OFFSET))(this);
	}
};
