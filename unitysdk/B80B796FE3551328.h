#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BBE3E3684AC67964.h"

#define B80B796FE3551328__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B80B796FE3551328_TypeDefinitionIndex = 582;

class B80B796FE3551328 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::BBE3E3684AC67964 ABBF7FE48471FAE1; // 0x38
	::System::Boolean F80FDF32CA9943E0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B80B796FE3551328__CTOR_OFFSET))(this);
	}
};
