#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }

#define CKPAOOFMPKC_OLIBFEPMKBI_JBMPKKMFLLI_OFFSET UNITYSDK_OFFSET(0x159E0420)
#define CKPAOOFMPKC_OLIBFEPMKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x159E0410)

inline static constexpr unsigned int CKPAOOFMPKC_OLIBFEPMKBI_TypeDefinitionIndex = 90499;

class CKPAOOFMPKC_OLIBFEPMKBI : public ::System::Object
{
public:
	::System::Int32 DEGHHNGDMNJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OLIBFEPMKBI__CTOR_OFFSET))(this);
	}

	::System::Boolean JBMPKKMFLLI(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_OLIBFEPMKBI_JBMPKKMFLLI_OFFSET))(this, EIFONLCJOPG);
	}
};
