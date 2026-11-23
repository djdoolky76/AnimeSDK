#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E9E9BEF2B706BE80.h"

#define E47BF27D3D233D25__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E47BF27D3D233D25_TypeDefinitionIndex = 4521;

class E47BF27D3D233D25 : public ::E379DE61A548837D
{
public:
	::E9E9BEF2B706BE80 B6FD36227C05499E; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E47BF27D3D233D25__CTOR_OFFSET))(this);
	}
};
