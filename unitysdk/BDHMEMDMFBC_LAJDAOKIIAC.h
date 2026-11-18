#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDHMEMDMFBC;
namespace System { class Action; }

#define BDHMEMDMFBC_LAJDAOKIIAC_ILAFJPIINOF_OFFSET UNITYSDK_OFFSET(0x113DBEE0)
#define BDHMEMDMFBC_LAJDAOKIIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x113DBED0)

inline static constexpr unsigned int BDHMEMDMFBC_LAJDAOKIIAC_TypeDefinitionIndex = 73529;

class BDHMEMDMFBC_LAJDAOKIIAC : public ::System::Object
{
public:
	::System::Action* MPIIDHGAOHO; // 0x10
	::BDHMEMDMFBC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHMEMDMFBC_LAJDAOKIIAC__CTOR_OFFSET))(this);
	}

	::System::Void ILAFJPIINOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHMEMDMFBC_LAJDAOKIIAC_ILAFJPIINOF_OFFSET))(this);
	}
};
