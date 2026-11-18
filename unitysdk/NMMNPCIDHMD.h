#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHKIGLHEE.h"

#define NMMNPCIDHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x114AE4B0)

inline static constexpr unsigned int NMMNPCIDHMD_TypeDefinitionIndex = 86538;

class NMMNPCIDHMD : public ::DFNHKIGLHEE
{
public:
	::System::Int32 KPAOHPIPHGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNPCIDHMD__CTOR_OFFSET))(this);
	}
};
