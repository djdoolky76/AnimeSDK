#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EADEPBIABND_IIGEEFDMDDF;
class FBHPDPBIGPK;

#define EADEPBIABND_KPHLLGOOJBE_ALLFEFPLLKI_OFFSET UNITYSDK_OFFSET(0x16BCD520)
#define EADEPBIABND_KPHLLGOOJBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCD510)

inline static constexpr unsigned int EADEPBIABND_KPHLLGOOJBE_TypeDefinitionIndex = 89542;

class EADEPBIABND_KPHLLGOOJBE : public ::System::Object
{
public:
	::EADEPBIABND_IIGEEFDMDDF* FGBNBFHOKAA; // 0x10
	::FBHPDPBIGPK* PMLAACAFPDO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_KPHLLGOOJBE__CTOR_OFFSET))(this);
	}

	::System::Void ALLFEFPLLKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND_KPHLLGOOJBE_ALLFEFPLLKI_OFFSET))(this);
	}
};
