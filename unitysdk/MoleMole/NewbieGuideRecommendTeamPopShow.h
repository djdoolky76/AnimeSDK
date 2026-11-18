#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace MoleMole { class UINewbieGuideRecommendPopWindowController_Context; }

#define MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1810E830)
#define MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1810E820)
#define MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1810E930)
#define MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1810E900)

namespace MoleMole
{
	inline static constexpr unsigned int NewbieGuideRecommendTeamPopShow_TypeDefinitionIndex = 61014;

	class NewbieGuideRecommendTeamPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UINewbieGuideRecommendPopWindowController_Context* context; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEGUIDERECOMMENDTEAMPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
