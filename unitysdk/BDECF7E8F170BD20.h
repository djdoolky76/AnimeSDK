#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

class A35924EFAAABD206;

#define BDECF7E8F170BD20_BC027A3F1442DAD8_OFFSET UNITYSDK_OFFSET(0x16AFC30)
#define BDECF7E8F170BD20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDECF7E8F170BD20_TypeDefinitionIndex = 7796;

class BDECF7E8F170BD20 : public ::System::Object
{
public:
	::A35924EFAAABD206* A8137B6E1E876610; // 0x10

	::E0B58AD87D1F143C::E602D86BC88653D1 BC027A3F1442DAD8()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + BDECF7E8F170BD20_BC027A3F1442DAD8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDECF7E8F170BD20__CTOR_OFFSET))(this);
	}
};
