#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALIIEMMEMAO;

#define ALIIEMMEMAO_NKAEPJJAIDN_KHPJBELILAG_OFFSET UNITYSDK_OFFSET(0x1550B110)
#define ALIIEMMEMAO_NKAEPJJAIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B100)

inline static constexpr unsigned int ALIIEMMEMAO_NKAEPJJAIDN_TypeDefinitionIndex = 93260;

class ALIIEMMEMAO_NKAEPJJAIDN : public ::System::Object
{
public:
	::ALIIEMMEMAO* KLHPEBKNIFB; // 0x10
	::System::Int32 AOCOIDIMLIH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_NKAEPJJAIDN__CTOR_OFFSET))(this);
	}

	::System::Void KHPJBELILAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_NKAEPJJAIDN_KHPJBELILAG_OFFSET))(this);
	}
};
