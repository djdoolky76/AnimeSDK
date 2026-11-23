#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

class EB11DE8A8A1E3314;

#define B2F033818F6630C4_BC027A3F1442DAD8_OFFSET UNITYSDK_OFFSET(0x17B7850)
#define B2F033818F6630C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2F033818F6630C4_TypeDefinitionIndex = 7343;

class B2F033818F6630C4 : public ::System::Object
{
public:
	::EB11DE8A8A1E3314* E6358EDF0E3AAC73; // 0x10

	::E0B58AD87D1F143C::E602D86BC88653D1 BC027A3F1442DAD8()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + B2F033818F6630C4_BC027A3F1442DAD8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2F033818F6630C4__CTOR_OFFSET))(this);
	}
};
