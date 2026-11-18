#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHIKMAAKCA;
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define BPHIKMAAKCA_ILMIELHAEIK_MBEBCIOOBGE_OFFSET UNITYSDK_OFFSET(0x14F0A1E0)
#define BPHIKMAAKCA_ILMIELHAEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0A1D0)

inline static constexpr unsigned int BPHIKMAAKCA_ILMIELHAEIK_TypeDefinitionIndex = 64372;

class BPHIKMAAKCA_ILMIELHAEIK : public ::System::Object
{
public:
	::BPHIKMAAKCA* KLHPEBKNIFB; // 0x10
	::MoleMole::UIGeneralNewsBubbleWidgetController* EEKOLEIENAD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKMAAKCA_ILMIELHAEIK__CTOR_OFFSET))(this);
	}

	::System::Void MBEBCIOOBGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKMAAKCA_ILMIELHAEIK_MBEBCIOOBGE_OFFSET))(this);
	}
};
