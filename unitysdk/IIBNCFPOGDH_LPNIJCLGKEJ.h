#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define IIBNCFPOGDH_LPNIJCLGKEJ_BOGIHODGIFB_OFFSET UNITYSDK_OFFSET(0xEBDE640)
#define IIBNCFPOGDH_LPNIJCLGKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDE630)

inline static constexpr unsigned int IIBNCFPOGDH_LPNIJCLGKEJ_TypeDefinitionIndex = 87264;

class IIBNCFPOGDH_LPNIJCLGKEJ : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewsBubbleRowWidgetController* MNOMCCLBJAO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_LPNIJCLGKEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean BOGIHODGIFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_LPNIJCLGKEJ_BOGIHODGIFB_OFFSET))(this);
	}
};
