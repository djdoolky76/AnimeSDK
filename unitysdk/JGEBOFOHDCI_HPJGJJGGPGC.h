#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGEBOFOHDCI;
namespace MoleMole { class UIZenkovBagRoleWidgetController; }

#define JGEBOFOHDCI_HPJGJJGGPGC_AJONLLEFECO_OFFSET UNITYSDK_OFFSET(0x198B80F0)
#define JGEBOFOHDCI_HPJGJJGGPGC_DMCCBOCKKGJ_OFFSET UNITYSDK_OFFSET(0x198B8120)
#define JGEBOFOHDCI_HPJGJJGGPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x198B80E0)

inline static constexpr unsigned int JGEBOFOHDCI_HPJGJJGGPGC_TypeDefinitionIndex = 70284;

class JGEBOFOHDCI_HPJGJJGGPGC : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::System::Int32 ECAFPALMHLI; // 0x18
	::System::Int32 IPBFNIPPMBJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_HPJGJJGGPGC__CTOR_OFFSET))(this);
	}

	::System::Void AJONLLEFECO(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_HPJGJJGGPGC_AJONLLEFECO_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DMCCBOCKKGJ(::MoleMole::UIZenkovBagRoleWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovBagRoleWidgetController*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_HPJGJJGGPGC_DMCCBOCKKGJ_OFFSET))(this, JOLDOMEIKEF);
	}
};
