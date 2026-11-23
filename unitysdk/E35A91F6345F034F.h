#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF7060C74F3D2626.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define E35A91F6345F034F_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x1CB8620)
#define E35A91F6345F034F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8710)

inline static constexpr unsigned int E35A91F6345F034F_TypeDefinitionIndex = 9750;

class E35A91F6345F034F : public ::BF7060C74F3D2626
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E35A91F6345F034F__CTOR_OFFSET))(this);
	}

	::System::Void FFC8F57E8D4599A9(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + E35A91F6345F034F_FFC8F57E8D4599A9_OFFSET))(this, E937D4885DAA1AE8);
	}
};
