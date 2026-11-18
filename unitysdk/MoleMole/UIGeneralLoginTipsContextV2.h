#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOEHMFIFFAJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALLOGINTIPSCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x17845310)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsContextV2_TypeDefinitionIndex = 50779;

	class UIGeneralLoginTipsContextV2 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* tipDesc; // 0x28
		::FOEHMFIFFAJ tipsType; // 0x30
		::System::Nullable_1<::UnityEngine::Vector2> anchoredPosition; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSCONTEXTV2__CTOR_OFFSET))(this);
		}
	};
}
