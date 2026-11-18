#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define AAMDOGBMGNO_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1420AB80)
#define AAMDOGBMGNO_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x1420A780)
#define AAMDOGBMGNO_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x1420AC20)
#define AAMDOGBMGNO_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14209940)
#define AAMDOGBMGNO__CTOR_OFFSET UNITYSDK_OFFSET(0x14209930)

inline static constexpr unsigned int AAMDOGBMGNO_TypeDefinitionIndex = 86143;

class AAMDOGBMGNO : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + AAMDOGBMGNO__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAMDOGBMGNO_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AAMDOGBMGNO_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAMDOGBMGNO_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AAMDOGBMGNO_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}
};
