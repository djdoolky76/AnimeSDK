#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class NPPLKJIMDIE_OELOIEMLPHE;

#define NPPLKJIMDIE_GBOEKJKHIEK_ALLFEFPLLKI_OFFSET UNITYSDK_OFFSET(0x114DDE10)
#define NPPLKJIMDIE_GBOEKJKHIEK__CTOR_OFFSET UNITYSDK_OFFSET(0x114DDE00)

inline static constexpr unsigned int NPPLKJIMDIE_GBOEKJKHIEK_TypeDefinitionIndex = 45726;

class NPPLKJIMDIE_GBOEKJKHIEK : public ::System::Object
{
public:
	::FBHPDPBIGPK* PMLAACAFPDO; // 0x10
	::NPPLKJIMDIE_OELOIEMLPHE* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE_GBOEKJKHIEK__CTOR_OFFSET))(this);
	}

	::System::Void ALLFEFPLLKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLKJIMDIE_GBOEKJKHIEK_ALLFEFPLLKI_OFFSET))(this);
	}
};
