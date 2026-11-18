#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MPJFKBNPNDI.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALMEDAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199BAA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMedaItemWidgetController_Context_TypeDefinitionIndex = 70541;

	class UIGeneralMedaItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextTag; // 0x28
		::System::String* TextValue; // 0x30
		::System::Nullable_1<::Foundation::AssetPath> MarkIconPathOverride; // 0x38
		::System::Byte _padding0[0x10];
		::System::Boolean EnableInteractable; // 0x50
		::System::Boolean IsShowText; // 0x51
		::System::Byte _padding1[0x2];
		::MPJFKBNPNDI RankState; // 0x54
		::System::Int32 MedalID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
