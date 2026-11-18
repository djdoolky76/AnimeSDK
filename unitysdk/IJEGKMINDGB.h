#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define IJEGKMINDGB_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x14A26FB0)
#define IJEGKMINDGB_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x14A26E00)
#define IJEGKMINDGB_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x14A26F10)
#define IJEGKMINDGB_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14A26850)
#define IJEGKMINDGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A26840)

inline static constexpr unsigned int IJEGKMINDGB_TypeDefinitionIndex = 52045;

class IJEGKMINDGB : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + IJEGKMINDGB__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEGKMINDGB_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IJEGKMINDGB_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IJEGKMINDGB_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEGKMINDGB_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
