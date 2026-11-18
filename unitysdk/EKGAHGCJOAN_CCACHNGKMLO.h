#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace System { class Action; }

#define EKGAHGCJOAN_CCACHNGKMLO_FCJBEGEMGHJ_OFFSET UNITYSDK_OFFSET(0x16158440)
#define EKGAHGCJOAN_CCACHNGKMLO_MFILDFBPAFL_OFFSET UNITYSDK_OFFSET(0x16158510)
#define EKGAHGCJOAN_CCACHNGKMLO__CTOR_OFFSET UNITYSDK_OFFSET(0x16158430)

inline static constexpr unsigned int EKGAHGCJOAN_CCACHNGKMLO_TypeDefinitionIndex = 51220;

class EKGAHGCJOAN_CCACHNGKMLO : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCACHNGKMLO__CTOR_OFFSET))(this);
	}

	::System::Void FCJBEGEMGHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCACHNGKMLO_FCJBEGEMGHJ_OFFSET))(this);
	}

	::System::Void MFILDFBPAFL(::FMHDMLBDIJC* JBJMGPNEEDC)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCACHNGKMLO_MFILDFBPAFL_OFFSET))(this, JBJMGPNEEDC);
	}
};
