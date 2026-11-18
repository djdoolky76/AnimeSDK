#pragma once
#include "unitysdk/unitysdk.h"

#define TESTLYRASECTORLOADER_KEYTOPACKEDASSETDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F8B30)

inline static constexpr unsigned int TestLyraSectorLoader_KeyToPackedAssetDict_TypeDefinitionIndex = 27101;

class TestLyraSectorLoader_KeyToPackedAssetDict
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_KEYTOPACKEDASSETDICT__CTOR_OFFSET))(this);
	}
};
