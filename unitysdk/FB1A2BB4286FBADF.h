#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF7060C74F3D2626.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define FB1A2BB4286FBADF_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x1CE5F60)
#define FB1A2BB4286FBADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8710)

inline static constexpr unsigned int FB1A2BB4286FBADF_TypeDefinitionIndex = 9843;

class FB1A2BB4286FBADF : public ::BF7060C74F3D2626
{
public:
	::System::Void FFC8F57E8D4599A9(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + FB1A2BB4286FBADF_FFC8F57E8D4599A9_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB1A2BB4286FBADF__CTOR_OFFSET))(this);
	}
};
