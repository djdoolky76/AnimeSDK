#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A842050E314079D9.h"

class EE64595D306D6866;

#define B1F0B8FB24E5D90C_E7764A26FB8DEC34_OFFSET UNITYSDK_OFFSET(0x1AB5E50)
#define B1F0B8FB24E5D90C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A71F0)

inline static constexpr unsigned int B1F0B8FB24E5D90C_TypeDefinitionIndex = 1955;

class B1F0B8FB24E5D90C : public ::A842050E314079D9
{
public:
	::EE64595D306D6866* E7764A26FB8DEC34()
	{
		return ((::EE64595D306D6866*(*)(::PVOID))((::PBYTE)hIl2Cpp + B1F0B8FB24E5D90C_E7764A26FB8DEC34_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1F0B8FB24E5D90C__CTOR_OFFSET))(this);
	}
};
