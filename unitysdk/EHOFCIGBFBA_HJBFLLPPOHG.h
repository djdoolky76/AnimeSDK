#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFCIGBFBA_MLLILMBHLBA;
namespace System { class Action; }

#define EHOFCIGBFBA_HJBFLLPPOHG_FCKGFLOFNML_OFFSET UNITYSDK_OFFSET(0x14A968E0)
#define EHOFCIGBFBA_HJBFLLPPOHG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A968D0)

inline static constexpr unsigned int EHOFCIGBFBA_HJBFLLPPOHG_TypeDefinitionIndex = 52218;

class EHOFCIGBFBA_HJBFLLPPOHG : public ::System::Object
{
public:
	::System::Action* KJOHGDIENDJ; // 0x10
	::EHOFCIGBFBA_MLLILMBHLBA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_HJBFLLPPOHG__CTOR_OFFSET))(this);
	}

	::System::Void FCKGFLOFNML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_HJBFLLPPOHG_FCKGFLOFNML_OFFSET))(this);
	}
};
