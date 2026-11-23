#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"

class F5DC12EC825CCBF6;

#define F6393FEAE5DF0FC6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F6393FEAE5DF0FC6_TypeDefinitionIndex = 7840;

class F6393FEAE5DF0FC6 : public ::E379DE61A548837D
{
public:
	::F5DC12EC825CCBF6* F061685D0179412A; // 0x38
	::E68AA4EB51923C98::B92BBABCE5ECD236 F563CD3B888A768C; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6393FEAE5DF0FC6__CTOR_OFFSET))(this);
	}
};
