#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define FPAHLLIBMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0119F0)

inline static constexpr unsigned int FPAHLLIBMMN_TypeDefinitionIndex = 36092;

class FPAHLLIBMMN : public ::BIHPBFHEOOA
{
public:
	::System::Int32 OIKFFGKDHME; // 0x10
	::System::Int32 JHFKDGBCOBA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAHLLIBMMN__CTOR_OFFSET))(this);
	}
};
