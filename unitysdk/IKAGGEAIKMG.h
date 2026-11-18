#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System::Collections { class IEnumerator; }

#define IKAGGEAIKMG_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1987E510)
#define IKAGGEAIKMG_DNJFAPKCNFB_OFFSET UNITYSDK_OFFSET(0x1987E490)
#define IKAGGEAIKMG_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1987E260)
#define IKAGGEAIKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1987E140)

inline static constexpr unsigned int IKAGGEAIKMG_TypeDefinitionIndex = 75170;

class IKAGGEAIKMG : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + IKAGGEAIKMG__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKAGGEAIKMG_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Collections::IEnumerator* DNJFAPKCNFB()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAGGEAIKMG_DNJFAPKCNFB_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKAGGEAIKMG_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
