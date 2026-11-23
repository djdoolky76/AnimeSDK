#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FC78227DC678F523_ACCE2D504153080B_OFFSET UNITYSDK_OFFSET(0x173A940)
#define FC78227DC678F523_E11AFF07FABA1324_OFFSET UNITYSDK_OFFSET(0x173A950)
#define FC78227DC678F523__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC78227DC678F523_TypeDefinitionIndex = 702;

class FC78227DC678F523 : public ::E379DE61A548837D
{
public:
	::System::Single EEAF604FBCC7AD72; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC78227DC678F523__CTOR_OFFSET))(this);
	}

	::System::Void E11AFF07FABA1324(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FC78227DC678F523_E11AFF07FABA1324_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Single ACCE2D504153080B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FC78227DC678F523_ACCE2D504153080B_OFFSET))(this);
	}
};
