#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define NIBMAECFLCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CB70)

inline static constexpr unsigned int NIBMAECFLCG_TypeDefinitionIndex = 93951;

class NIBMAECFLCG : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 DABJIHHDFNO; // 0x10
	::System::UInt32 EEKENHBPKGO; // 0x14
	::System::UInt32 BKLGNCBNEGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBMAECFLCG__CTOR_OFFSET))(this);
	}
};
