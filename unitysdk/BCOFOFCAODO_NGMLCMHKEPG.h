#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCOFOFCAODO_INNINOALAEA;
class ODNJIAGGDMG;

#define BCOFOFCAODO_NGMLCMHKEPG_ELGLHIDPLHG_OFFSET UNITYSDK_OFFSET(0x1701ED60)
#define BCOFOFCAODO_NGMLCMHKEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1701ED50)

inline static constexpr unsigned int BCOFOFCAODO_NGMLCMHKEPG_TypeDefinitionIndex = 40855;

class BCOFOFCAODO_NGMLCMHKEPG : public ::System::Object
{
public:
	::ODNJIAGGDMG* DJCNCELJPOM; // 0x10
	::BCOFOFCAODO_INNINOALAEA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOFOFCAODO_NGMLCMHKEPG__CTOR_OFFSET))(this);
	}

	::System::Void ELGLHIDPLHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOFOFCAODO_NGMLCMHKEPG_ELGLHIDPLHG_OFFSET))(this);
	}
};
