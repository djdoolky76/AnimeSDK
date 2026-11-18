#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define APNAHFGKHCN_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x11BE3A50)
#define APNAHFGKHCN_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x11BE3890)
#define APNAHFGKHCN_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x11BE3AF0)
#define APNAHFGKHCN_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x11BE33E0)
#define APNAHFGKHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE33D0)

inline static constexpr unsigned int APNAHFGKHCN_TypeDefinitionIndex = 39230;

class APNAHFGKHCN : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + APNAHFGKHCN__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + APNAHFGKHCN_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + APNAHFGKHCN_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + APNAHFGKHCN_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + APNAHFGKHCN_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}
};
