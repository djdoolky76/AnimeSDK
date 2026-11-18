#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHIKMAAKCA;
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define BPHIKMAAKCA_KMCLNLKEHLG_GAHGJFPNPDF_OFFSET UNITYSDK_OFFSET(0x16934640)
#define BPHIKMAAKCA_KMCLNLKEHLG__CTOR_OFFSET UNITYSDK_OFFSET(0x16934630)

inline static constexpr unsigned int BPHIKMAAKCA_KMCLNLKEHLG_TypeDefinitionIndex = 64371;

class BPHIKMAAKCA_KMCLNLKEHLG : public ::System::Object
{
public:
	::BPHIKMAAKCA* KLHPEBKNIFB; // 0x10
	::MoleMole::UIGeneralNewsBubbleWidgetController* EEKOLEIENAD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKMAAKCA_KMCLNLKEHLG__CTOR_OFFSET))(this);
	}

	::System::Void GAHGJFPNPDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKMAAKCA_KMCLNLKEHLG_GAHGJFPNPDF_OFFSET))(this);
	}
};
