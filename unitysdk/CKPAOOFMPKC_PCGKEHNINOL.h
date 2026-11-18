#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }

#define CKPAOOFMPKC_PCGKEHNINOL_GOGCOHKECLL_OFFSET UNITYSDK_OFFSET(0x16874500)
#define CKPAOOFMPKC_PCGKEHNINOL__CTOR_OFFSET UNITYSDK_OFFSET(0x168744F0)

inline static constexpr unsigned int CKPAOOFMPKC_PCGKEHNINOL_TypeDefinitionIndex = 90502;

class CKPAOOFMPKC_PCGKEHNINOL : public ::System::Object
{
public:
	::System::Int32 ABHBKFJKINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PCGKEHNINOL__CTOR_OFFSET))(this);
	}

	::System::Boolean GOGCOHKECLL(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* ELIHJHAAANF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_PCGKEHNINOL_GOGCOHKECLL_OFFSET))(this, ELIHJHAAANF);
	}
};
