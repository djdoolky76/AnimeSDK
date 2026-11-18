#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define AJDFHEJCJHG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x135EB540)
#define AJDFHEJCJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EB530)

inline static constexpr unsigned int AJDFHEJCJHG_TypeDefinitionIndex = 67522;

class AJDFHEJCJHG : public ::IGKOFMFKNNO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFHEJCJHG__CTOR_OFFSET))(this);
	}

	static ::AJDFHEJCJHG* JFDOOELFAOA()
	{
		return ((::AJDFHEJCJHG*(*)())((::PBYTE)hIl2Cpp + AJDFHEJCJHG_JFDOOELFAOA_OFFSET))();
	}
};
