#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define OHHOOHMGPCK_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16C16840)
#define OHHOOHMGPCK_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16C16600)
#define OHHOOHMGPCK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C165F0)

inline static constexpr unsigned int OHHOOHMGPCK_TypeDefinitionIndex = 55075;

class OHHOOHMGPCK : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + OHHOOHMGPCK__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHHOOHMGPCK_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHHOOHMGPCK_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
