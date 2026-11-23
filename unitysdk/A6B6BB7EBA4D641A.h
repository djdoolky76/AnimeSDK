#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define A6B6BB7EBA4D641A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A6B6BB7EBA4D641A_TypeDefinitionIndex = 9069;

class A6B6BB7EBA4D641A : public ::E379DE61A548837D
{
public:
	::System::UInt32 E34F9A34ECE7C571; // 0x38
	::System::Byte A35E61455FB5F910; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6B6BB7EBA4D641A__CTOR_OFFSET))(this);
	}
};
