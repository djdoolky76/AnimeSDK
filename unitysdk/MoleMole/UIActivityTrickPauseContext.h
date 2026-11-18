#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGIJACLPPIN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HDGDGHMDJLK;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191616D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 38489;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HDGDGHMDJLK* TrickData; // 0x28
		::MonoUITableScrollV2* BindScrollView; // 0x30
		::System::Int32 QuestID; // 0x38
		::GGIJACLPPIN ActivityTrickType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
