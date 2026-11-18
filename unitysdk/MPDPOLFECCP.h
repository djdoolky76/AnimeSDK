#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define MPDPOLFECCP_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x14D98810)
#define MPDPOLFECCP_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14D98090)
#define MPDPOLFECCP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D98080)

inline static constexpr unsigned int MPDPOLFECCP_TypeDefinitionIndex = 40610;

class MPDPOLFECCP : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + MPDPOLFECCP__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPDPOLFECCP_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPDPOLFECCP_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
