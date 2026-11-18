#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"

class GPENEFDLKHI;

#define NEAMGDNOKGA_OMFFIFKPJOM_CHMKFEGNAJK_OFFSET UNITYSDK_OFFSET(0x120FBC70)
#define NEAMGDNOKGA_OMFFIFKPJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x120FBC60)

inline static constexpr unsigned int NEAMGDNOKGA_OMFFIFKPJOM_TypeDefinitionIndex = 57837;

class NEAMGDNOKGA_OMFFIFKPJOM : public ::System::Object
{
public:
	::GPENEFDLKHI* DFMKILICPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMGDNOKGA_OMFFIFKPJOM__CTOR_OFFSET))(this);
	}

	::System::Boolean CHMKFEGNAJK(::MoleMole::Config::SceneConfigRuntimeDataArea PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + NEAMGDNOKGA_OMFFIFKPJOM_CHMKFEGNAJK_OFFSET))(this, PELAJIFDIPN);
	}
};
