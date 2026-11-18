#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define AKOALDECNCP_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x17CDD5C0)
#define AKOALDECNCP_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x17CDD360)
#define AKOALDECNCP_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x17CDD520)
#define AKOALDECNCP_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x17CDC510)
#define AKOALDECNCP__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDC500)

inline static constexpr unsigned int AKOALDECNCP_TypeDefinitionIndex = 91580;

class AKOALDECNCP : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + AKOALDECNCP__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOALDECNCP_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKOALDECNCP_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKOALDECNCP_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOALDECNCP_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
