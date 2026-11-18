#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJDDOOKHHBM;

#define MJDDOOKHHBM_IIGBBJBAALK_JJNMMADIIEN_OFFSET UNITYSDK_OFFSET(0x151D7E80)
#define MJDDOOKHHBM_IIGBBJBAALK__CTOR_OFFSET UNITYSDK_OFFSET(0x151D7E70)

inline static constexpr unsigned int MJDDOOKHHBM_IIGBBJBAALK_TypeDefinitionIndex = 52792;

class MJDDOOKHHBM_IIGBBJBAALK : public ::System::Object
{
public:
	::MJDDOOKHHBM* KLHPEBKNIFB; // 0x10
	::System::UInt32 FKOLFCOLEBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDOOKHHBM_IIGBBJBAALK__CTOR_OFFSET))(this);
	}

	::System::Void JJNMMADIIEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDOOKHHBM_IIGBBJBAALK_JJNMMADIIEN_OFFSET))(this);
	}
};
