#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEMJCFNNLDD;
namespace MoleMole { class UIZenkovTalentPointWidgetController; }

#define HEMJCFNNLDD_NPCKHPBKPDF_MPHMKIMCJFM_OFFSET UNITYSDK_OFFSET(0x16F2E230)
#define HEMJCFNNLDD_NPCKHPBKPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E220)

inline static constexpr unsigned int HEMJCFNNLDD_NPCKHPBKPDF_TypeDefinitionIndex = 42457;

class HEMJCFNNLDD_NPCKHPBKPDF : public ::System::Object
{
public:
	::MoleMole::UIZenkovTalentPointWidgetController* NCIMBHDKIJM; // 0x10
	::HEMJCFNNLDD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_NPCKHPBKPDF__CTOR_OFFSET))(this);
	}

	::System::Void MPHMKIMCJFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_NPCKHPBKPDF_MPHMKIMCJFM_OFFSET))(this);
	}
};
