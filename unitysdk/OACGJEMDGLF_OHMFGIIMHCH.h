#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/System/Object.h"

#define OACGJEMDGLF_OHMFGIIMHCH_BBPGOLPGIMA_OFFSET UNITYSDK_OFFSET(0x10051B80)
#define OACGJEMDGLF_OHMFGIIMHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x10051B70)

inline static constexpr unsigned int OACGJEMDGLF_OHMFGIIMHCH_TypeDefinitionIndex = 60428;

class OACGJEMDGLF_OHMFGIIMHCH : public ::System::Object
{
public:
	::MoleMole::AbyssS2_GenConfigMeta KFPJGDOLEBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACGJEMDGLF_OHMFGIIMHCH__CTOR_OFFSET))(this);
	}

	::System::Int32 BBPGOLPGIMA(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OACGJEMDGLF_OHMFGIIMHCH_BBPGOLPGIMA_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
