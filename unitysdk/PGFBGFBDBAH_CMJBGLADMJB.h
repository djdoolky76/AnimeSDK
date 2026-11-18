#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
namespace MoleMole { class UIUrbanMapRightWidgetController; }

#define PGFBGFBDBAH_CMJBGLADMJB_BKMECHNBAOC_OFFSET UNITYSDK_OFFSET(0x1A7EF580)
#define PGFBGFBDBAH_CMJBGLADMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EF570)

inline static constexpr unsigned int PGFBGFBDBAH_CMJBGLADMJB_TypeDefinitionIndex = 46135;

class PGFBGFBDBAH_CMJBGLADMJB : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::MoleMole::UIUrbanMapRightWidgetController* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_CMJBGLADMJB__CTOR_OFFSET))(this);
	}

	::System::Void BKMECHNBAOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_CMJBGLADMJB_BKMECHNBAOC_OFFSET))(this);
	}
};
