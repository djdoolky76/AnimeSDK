#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
namespace MoleMole { class UIUrbanMapRightWidgetController; }

#define PGFBGFBDBAH_JNDPPDNIBGF_CDJGJCDLPIC_OFFSET UNITYSDK_OFFSET(0x136FB950)
#define PGFBGFBDBAH_JNDPPDNIBGF__CTOR_OFFSET UNITYSDK_OFFSET(0x136FB940)

inline static constexpr unsigned int PGFBGFBDBAH_JNDPPDNIBGF_TypeDefinitionIndex = 46105;

class PGFBGFBDBAH_JNDPPDNIBGF : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::MoleMole::UIUrbanMapRightWidgetController* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_JNDPPDNIBGF__CTOR_OFFSET))(this);
	}

	::System::Void CDJGJCDLPIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_JNDPPDNIBGF_CDJGJCDLPIC_OFFSET))(this);
	}
};
