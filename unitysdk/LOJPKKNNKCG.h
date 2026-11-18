#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNAHOHABAIC;
namespace MoleMole { class UIInterKnowCourseTopPointWidgetController; }

#define LOJPKKNNKCG_MLOMHMJILKP_OFFSET UNITYSDK_OFFSET(0x14D402F0)
#define LOJPKKNNKCG_ONBKMHBPJOF_OFFSET UNITYSDK_OFFSET(0x14D40230)
#define LOJPKKNNKCG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D40220)

inline static constexpr unsigned int LOJPKKNNKCG_TypeDefinitionIndex = 92420;

class LOJPKKNNKCG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJPKKNNKCG__CTOR_OFFSET))(this);
	}

	static ::JNAHOHABAIC* ONBKMHBPJOF(::JNAHOHABAIC* DKDOJCMMAAN)
	{
		return ((::JNAHOHABAIC*(*)(::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + LOJPKKNNKCG_ONBKMHBPJOF_OFFSET))(DKDOJCMMAAN);
	}

	static ::System::Void MLOMHMJILKP(::MoleMole::UIInterKnowCourseTopPointWidgetController* GDFIJEHLDOC, ::JNAHOHABAIC* PNILEAMOIMO)
	{
		return ((::System::Void(*)(::MoleMole::UIInterKnowCourseTopPointWidgetController*, ::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + LOJPKKNNKCG_MLOMHMJILKP_OFFSET))(GDFIJEHLDOC, PNILEAMOIMO);
	}
};
