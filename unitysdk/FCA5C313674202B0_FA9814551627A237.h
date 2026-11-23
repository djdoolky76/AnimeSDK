#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCA5C313674202B0_FA9814551627A237_F19837050FB80EAD_OFFSET UNITYSDK_OFFSET(0x403BD20)
#define FCA5C313674202B0_FA9814551627A237__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCA5C313674202B0_FA9814551627A237_TypeDefinitionIndex = 20333;

class FCA5C313674202B0_FA9814551627A237 : public ::System::Object
{
public:
	::System::Single A813D1A43CCD0F31; // 0x10
	::System::Single F33AF2E54B25F384; // 0x14
	::System::Single EE1EAA53D764E912; // 0x18
	::System::Single E090AF0E1C4E4CA0; // 0x1C
	::System::Single BB25829A08754E80; // 0x20
	::System::Single A85A1122CA554D2D; // 0x24

	::System::Single F19837050FB80EAD(::System::Single BB8C609F76620E45)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCA5C313674202B0_FA9814551627A237_F19837050FB80EAD_OFFSET))(this, BB8C609F76620E45);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCA5C313674202B0_FA9814551627A237__CTOR_OFFSET))(this);
	}
};
