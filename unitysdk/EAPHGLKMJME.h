#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCKNFAHGFCH;

#define EAPHGLKMJME_IEFBOJPEEPG_OFFSET UNITYSDK_OFFSET(0x132AE660)
#define EAPHGLKMJME__CTOR_OFFSET UNITYSDK_OFFSET(0x132AE650)

inline static constexpr unsigned int EAPHGLKMJME_TypeDefinitionIndex = 87687;

class EAPHGLKMJME : public ::System::Object
{
public:
	::System::UInt32 OLIPFOIGIFB; // 0x10
	::System::UInt32 FGNAJOFAHFL; // 0x14
	::System::UInt32 LKBHJCOEMMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHGLKMJME__CTOR_OFFSET))(this);
	}

	::PCKNFAHGFCH* IEFBOJPEEPG()
	{
		return ((::PCKNFAHGFCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHGLKMJME_IEFBOJPEEPG_OFFSET))(this);
	}
};
