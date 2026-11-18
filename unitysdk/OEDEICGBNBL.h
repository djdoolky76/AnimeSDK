#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define OEDEICGBNBL_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0xFD672E0)
#define OEDEICGBNBL_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0xFD67120)
#define OEDEICGBNBL_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0xFD67380)
#define OEDEICGBNBL_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0xFD66BF0)
#define OEDEICGBNBL__CTOR_OFFSET UNITYSDK_OFFSET(0xFD66BE0)

inline static constexpr unsigned int OEDEICGBNBL_TypeDefinitionIndex = 45204;

class OEDEICGBNBL : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + OEDEICGBNBL__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEDEICGBNBL_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + OEDEICGBNBL_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEDEICGBNBL_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + OEDEICGBNBL_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}
};
