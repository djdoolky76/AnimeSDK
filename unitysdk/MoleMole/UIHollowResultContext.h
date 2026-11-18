#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHFHNALEHGD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class GDCLGFPAMDH;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET UNITYSDK_OFFSET(0x16F0DF90)
#define MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0E160)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultContext_TypeDefinitionIndex = 77883;

	class UIHollowResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GDCLGFPAMDH* dungeonNotify; // 0x28
		::MoleMole::UILevelResultPageContext* levelPageContext; // 0x30
		::System::Int32 EditorTestFail; // 0x38
		::System::Int32 missionId; // 0x3C
		::System::Nullable_1<::System::Int32> NumberResult; // 0x40
		::MHFHNALEHGD type; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsItemGetTipsDungeonRewardOverflow(::System::EventArgs* onItemGetTipsArgs)
		{
			return ((::System::Boolean(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET))(onItemGetTipsArgs);
		}
	};
}
