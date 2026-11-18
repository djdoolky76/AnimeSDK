#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGPHEOPDGAF;
namespace MoleMole::Config { class SceneConfigRuntimeData; }

#define PHHJFKEMPAI_OMKBHKIIBKN_1_OFFSET UNITYSDK_OFFSET(0x13A94D70)
#define PHHJFKEMPAI_OMKBHKIIBKN_OFFSET UNITYSDK_OFFSET(0x13A94D10)

inline static constexpr unsigned int PHHJFKEMPAI_TypeDefinitionIndex = 49911;

class PHHJFKEMPAI : public ::System::Object
{
public:
	static ::System::Boolean OMKBHKIIBKN(::MoleMole::Config::SceneConfigRuntimeData* PMNLAHHMNFM)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + PHHJFKEMPAI_OMKBHKIIBKN_OFFSET))(PMNLAHHMNFM);
	}

	static ::System::Boolean OMKBHKIIBKN_1(::DGPHEOPDGAF* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::DGPHEOPDGAF*))((::PBYTE)hIl2Cpp + PHHJFKEMPAI_OMKBHKIIBKN_1_OFFSET))(LJBPECKCCEA);
	}
};
