#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AMAJILNNDMA;

#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x191A2430)
#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x191A2510)
#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x191A2570)

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemContextBase_TypeDefinitionIndex = 71599;

	class UIComposeItemContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AMAJILNNDMA* selectItem; // 0x28
		::System::Int32 filterIndex; // 0x30
		::System::Int32 selectTab; // 0x34
		::System::Int32 setCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
