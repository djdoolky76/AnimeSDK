#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEAECEINKCC_CCEOGLFLIJI;

#define HEAECEINKCC_AFBNKEBOIJK_FIGNGDNPFMD_OFFSET UNITYSDK_OFFSET(0x16F284E0)
#define HEAECEINKCC_AFBNKEBOIJK_JLMNPEHBFAI_OFFSET UNITYSDK_OFFSET(0x16F286F0)
#define HEAECEINKCC_AFBNKEBOIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F284D0)

inline static constexpr unsigned int HEAECEINKCC_AFBNKEBOIJK_TypeDefinitionIndex = 64555;

class HEAECEINKCC_AFBNKEBOIJK : public ::System::Object
{
public:
	::HEAECEINKCC_CCEOGLFLIJI* EEMOEMFLABI; // 0x10
	::System::Int64 FCAHPAABMMN; // 0x18
	::System::Boolean JOBJDBBKHBM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_AFBNKEBOIJK__CTOR_OFFSET))(this);
	}

	::System::Void FIGNGDNPFMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_AFBNKEBOIJK_FIGNGDNPFMD_OFFSET))(this);
	}

	::System::Boolean JLMNPEHBFAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_AFBNKEBOIJK_JLMNPEHBFAI_OFFSET))(this);
	}
};
