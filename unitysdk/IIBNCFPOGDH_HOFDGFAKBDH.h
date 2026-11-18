#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define IIBNCFPOGDH_HOFDGFAKBDH_AFGPAKIHGOG_OFFSET UNITYSDK_OFFSET(0xF8749C0)
#define IIBNCFPOGDH_HOFDGFAKBDH__CTOR_OFFSET UNITYSDK_OFFSET(0xF8749B0)

inline static constexpr unsigned int IIBNCFPOGDH_HOFDGFAKBDH_TypeDefinitionIndex = 87268;

class IIBNCFPOGDH_HOFDGFAKBDH : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewsBubbleRowWidgetController* MNOMCCLBJAO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_HOFDGFAKBDH__CTOR_OFFSET))(this);
	}

	::System::Boolean AFGPAKIHGOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_HOFDGFAKBDH_AFGPAKIHGOG_OFFSET))(this);
	}
};
