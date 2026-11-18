#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAOFHEPOEPE;
namespace System { class Action; }

#define MAOFHEPOEPE_BKCDDMOAPPN_DEKACAPGGFG_OFFSET UNITYSDK_OFFSET(0x15916B60)
#define MAOFHEPOEPE_BKCDDMOAPPN_IBFGKAELBNP_OFFSET UNITYSDK_OFFSET(0x15916B40)
#define MAOFHEPOEPE_BKCDDMOAPPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15916B30)

inline static constexpr unsigned int MAOFHEPOEPE_BKCDDMOAPPN_TypeDefinitionIndex = 83246;

class MAOFHEPOEPE_BKCDDMOAPPN : public ::System::Object
{
public:
	::MAOFHEPOEPE* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_BKCDDMOAPPN__CTOR_OFFSET))(this);
	}

	::System::Void IBFGKAELBNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_BKCDDMOAPPN_IBFGKAELBNP_OFFSET))(this);
	}

	::System::Void DEKACAPGGFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_BKCDDMOAPPN_DEKACAPGGFG_OFFSET))(this);
	}
};
