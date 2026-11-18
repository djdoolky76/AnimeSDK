#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define EBHMGDMBLGD_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1588B310)
#define EBHMGDMBLGD_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1588B0D0)
#define EBHMGDMBLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1588B0C0)

inline static constexpr unsigned int EBHMGDMBLGD_TypeDefinitionIndex = 71035;

class EBHMGDMBLGD : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + EBHMGDMBLGD__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBHMGDMBLGD_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBHMGDMBLGD_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
