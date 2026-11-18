#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHFOLPAJCNC.h"
#include "unitysdk/System/Object.h"

#define FBHABKEFIPL_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x17263310)
#define FBHABKEFIPL_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x17263360)
#define FBHABKEFIPL__CTOR_OFFSET UNITYSDK_OFFSET(0x172633D0)

inline static constexpr unsigned int FBHABKEFIPL_TypeDefinitionIndex = 84725;

class FBHABKEFIPL : public ::System::Object
{
public:
	::MHFOLPAJCNC EOEOPBGLPJL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHABKEFIPL__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHABKEFIPL_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHABKEFIPL_ILEEFLAOOOM_OFFSET))(this);
	}
};
