#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;
class NPPLKJIMDIE_OELOIEMLPHE;

#define NPPLKJIMDIE_BCMJLOAPNPE_LFLHKFCKEDP_OFFSET UNITYSDK_OFFSET(0x1004B270)
#define NPPLKJIMDIE_BCMJLOAPNPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1004B260)

inline static constexpr unsigned int NPPLKJIMDIE_BCMJLOAPNPE_TypeDefinitionIndex = 45728;

class NPPLKJIMDIE_BCMJLOAPNPE : public ::System::Object
{
public:
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x10
	::NPPLKJIMDIE_OELOIEMLPHE* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE_BCMJLOAPNPE__CTOR_OFFSET))(this);
	}

	::System::Void LFLHKFCKEDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE_BCMJLOAPNPE_LFLHKFCKEDP_OFFSET))(this);
	}
};
