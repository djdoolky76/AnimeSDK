#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CINHOPCLLOK.h"
#include "unitysdk/FGNDLIMOJFE.h"
#include "unitysdk/GMNHIIPLJOF.h"
#include "unitysdk/HIALBCLPEJG.h"
#include "unitysdk/JNOBNNENGOH.h"
#include "unitysdk/OLDOKDOLLOJ.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GABJDBFJIAD_BILHEFEDLKM_OFFSET UNITYSDK_OFFSET(0x15CCE8B0)
#define GABJDBFJIAD_CLOPNGMAMMA_OFFSET UNITYSDK_OFFSET(0x15CCEA40)
#define GABJDBFJIAD_EMHIGKJJJAG_OFFSET UNITYSDK_OFFSET(0x15CCE6E0)
#define GABJDBFJIAD_MPGFGMGAHLO_OFFSET UNITYSDK_OFFSET(0x15CCE580)
#define GABJDBFJIAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCE570)

inline static constexpr unsigned int GABJDBFJIAD_TypeDefinitionIndex = 67400;

class GABJDBFJIAD : public ::System::Object
{
public:
	::GMNHIIPLJOF KPKMOLDCHIM; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 DGCNAFMPKMA; // 0x18
	::FGNDLIMOJFE FOPEEDFBOGA; // 0x20
	::CINHOPCLLOK GDMPJIIHICM; // 0x24
	::HIALBCLPEJG BLGJHHMIKBG; // 0x28
	::JNOBNNENGOH OJGMPGPHIFM; // 0x2C
	::System::UInt64 FCOMCHJLFOA; // 0x30
	::OLDOKDOLLOJ PFGPPLNIPPA; // 0x38
	::System::Boolean CJHDFOLLOIA; // 0x3C
	::System::Boolean OGDDNBJOCKO; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJDBFJIAD__CTOR_OFFSET))(this);
	}

	::System::String* MPGFGMGAHLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJDBFJIAD_MPGFGMGAHLO_OFFSET))(this);
	}

	::System::String* EMHIGKJJJAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJDBFJIAD_EMHIGKJJJAG_OFFSET))(this);
	}

	::System::String* BILHEFEDLKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJDBFJIAD_BILHEFEDLKM_OFFSET))(this);
	}

	::System::String* CLOPNGMAMMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJDBFJIAD_CLOPNGMAMMA_OFFSET))(this);
	}
};
