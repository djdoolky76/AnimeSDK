#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JBEKOJKMNJN_BLEBEKFFKDP_OFFSET UNITYSDK_OFFSET(0x160D16C0)
#define JBEKOJKMNJN_FKHCGLHACLG_OFFSET UNITYSDK_OFFSET(0x160D1750)
#define JBEKOJKMNJN_GJPNPJNAMHL_OFFSET UNITYSDK_OFFSET(0x160D1790)
#define JBEKOJKMNJN_KKKJLMABFNF_OFFSET UNITYSDK_OFFSET(0x160D1680)
#define JBEKOJKMNJN_PMAPOKDHIJF_OFFSET UNITYSDK_OFFSET(0x160D1700)
#define JBEKOJKMNJN__CTOR_OFFSET UNITYSDK_OFFSET(0x160D17D0)

inline static constexpr unsigned int JBEKOJKMNJN_TypeDefinitionIndex = 74285;

class JBEKOJKMNJN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKOJKMNJN__CTOR_OFFSET))(this);
	}

	::System::Void KKKJLMABFNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKOJKMNJN_KKKJLMABFNF_OFFSET))(this);
	}

	::System::Void BLEBEKFFKDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKOJKMNJN_BLEBEKFFKDP_OFFSET))(this);
	}

	::System::Void PMAPOKDHIJF(::System::Action* MGAKJHJAGJI, ::System::Action* KFEKMPJMBCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JBEKOJKMNJN_PMAPOKDHIJF_OFFSET))(this, MGAKJHJAGJI, KFEKMPJMBCC);
	}

	::System::Void FKHCGLHACLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKOJKMNJN_FKHCGLHACLG_OFFSET))(this);
	}

	::System::Void GJPNPJNAMHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEKOJKMNJN_GJPNPJNAMHL_OFFSET))(this);
	}
};
