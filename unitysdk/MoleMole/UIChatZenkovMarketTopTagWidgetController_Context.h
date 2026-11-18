#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJINPFNEHMG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OFFPFEPIFPH;
namespace System { class String; }

#define MOLEMOLE_UICHATZENKOVMARKETTOPTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18906780)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatZenkovMarketTopTagWidgetController_Context_TypeDefinitionIndex = 48760;

	class UIChatZenkovMarketTopTagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OFFPFEPIFPH* MarketBrief; // 0x28
		::System::String* ButtonTextMapKey; // 0x30
		::System::String* TitleTextMapKey; // 0x38
		::AJINPFNEHMG TabType; // 0x40
		::System::UInt32 SourceUID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATZENKOVMARKETTOPTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
