#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define HEDFMDDHPOL_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x17AED700)
#define HEDFMDDHPOL_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x17AED450)
#define HEDFMDDHPOL_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x17AED660)
#define HEDFMDDHPOL_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x17AED1E0)
#define HEDFMDDHPOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AED1D0)

inline static constexpr unsigned int HEDFMDDHPOL_TypeDefinitionIndex = 40749;

class HEDFMDDHPOL : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HEDFMDDHPOL__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDFMDDHPOL_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + HEDFMDDHPOL_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + HEDFMDDHPOL_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDFMDDHPOL_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
