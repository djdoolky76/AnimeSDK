#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PHKFHHNHHBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1553C2A0)
#define PHKFHHNHHBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1553C2E0)

inline static constexpr unsigned int PHKFHHNHHBL_TypeDefinitionIndex = 59192;

class PHKFHHNHHBL : public ::System::Object
{
public:
	::System::UInt32 DAAADMJIMJM; // 0x10
	::System::UInt32 IBCFCOOFBKH; // 0x14
	::System::UInt32 MNAIIBHLHMA; // 0x18
	::UnityEngine::Vector3 BDIEDFPGFHF; // 0x1C
	::UnityEngine::Vector3 GKDIPNMPMJE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFHHNHHBL__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKFHHNHHBL_DISPOSE_OFFSET))(this);
	}
};
