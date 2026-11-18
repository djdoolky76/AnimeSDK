#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AMJCFGOGENM_KDFGEBABGGC;
namespace MoleMole { class UISummerFishingCollectItemWidgetController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISUMMERFISHINGCOLLECTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185C02B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingCollectItemContext_TypeDefinitionIndex = 79625;

	class UISummerFishingCollectItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AMJCFGOGENM_KDFGEBABGGC* data; // 0x28
		::System::Action_2<::System::Object*, ::MoleMole::UISummerFishingCollectItemWidgetController*>* clickAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
