#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/E379DE61A548837D.h"

#define FC3F4100442F6641__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC3F4100442F6641_TypeDefinitionIndex = 1933;

class FC3F4100442F6641 : public ::E379DE61A548837D
{
public:
	::AD41610DAE684581 F669FF7168CBC939; // 0x38
	::AD41610DAE684581 B3B5179EC19280EB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC3F4100442F6641__CTOR_OFFSET))(this);
	}
};
