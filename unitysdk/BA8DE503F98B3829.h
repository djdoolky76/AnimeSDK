#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BA8DE503F98B3829__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BA8DE503F98B3829_TypeDefinitionIndex = 431;

class BA8DE503F98B3829 : public ::E379DE61A548837D
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x38
	::System::Boolean BE0D89692039BC47; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA8DE503F98B3829__CTOR_OFFSET))(this);
	}
};
