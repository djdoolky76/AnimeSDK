#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINewbieGuideBridgeItemWidgetController; }
namespace System { class String; }

#define IJFBJFFMNIA_HFMKHOBHHCM_OFFSET UNITYSDK_OFFSET(0xB937710)
#define IJFBJFFMNIA_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0xB937690)
#define IJFBJFFMNIA_PHCMCFMIIKE_OFFSET UNITYSDK_OFFSET(0xB937760)
#define IJFBJFFMNIA_PMCCBCPHKGM_OFFSET UNITYSDK_OFFSET(0xB9376D0)
#define IJFBJFFMNIA__CTOR_OFFSET UNITYSDK_OFFSET(0xB937750)

inline static constexpr unsigned int IJFBJFFMNIA_TypeDefinitionIndex = 61925;

class IJFBJFFMNIA : public ::System::Object
{
public:
	::MoleMole::UINewbieGuideBridgeItemWidgetController* FPPPIIFJOBO; // 0x10
	::System::String* NAPIOPMCMPI; // 0x18
	::System::Boolean HAPCJJHJGPJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFBJFFMNIA__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFBJFFMNIA_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void PMCCBCPHKGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFBJFFMNIA_PMCCBCPHKGM_OFFSET))(this);
	}

	::System::Void HFMKHOBHHCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFBJFFMNIA_HFMKHOBHHCM_OFFSET))(this);
	}

	::System::Void PHCMCFMIIKE(::MoleMole::UINewbieGuideBridgeItemWidgetController* IHMFCJDDMKN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbieGuideBridgeItemWidgetController*))((::PBYTE)hIl2Cpp + IJFBJFFMNIA_PHCMCFMIIKE_OFFSET))(this, IHMFCJDDMKN);
	}
};
