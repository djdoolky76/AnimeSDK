#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EADEPBIABND_IIGEEFDMDDF;
class IDGDIFDMIDP;

#define EADEPBIABND_KFDPADAAODA_LFLHKFCKEDP_OFFSET UNITYSDK_OFFSET(0x15465D00)
#define EADEPBIABND_KFDPADAAODA__CTOR_OFFSET UNITYSDK_OFFSET(0x15465CF0)

inline static constexpr unsigned int EADEPBIABND_KFDPADAAODA_TypeDefinitionIndex = 89540;

class EADEPBIABND_KFDPADAAODA : public ::System::Object
{
public:
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x10
	::EADEPBIABND_IIGEEFDMDDF* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_KFDPADAAODA__CTOR_OFFSET))(this);
	}

	::System::Void LFLHKFCKEDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_KFDPADAAODA_LFLHKFCKEDP_OFFSET))(this);
	}
};
