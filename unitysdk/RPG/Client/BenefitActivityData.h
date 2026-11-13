#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_BENEFITACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD98060)
#define RPG_CLIENT_BENEFITACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD98280)
#define RPG_CLIENT_BENEFITACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1CD98070)
#define RPG_CLIENT_BENEFITACTIVITYDATA__EXISTINGOPERTABLETAB_OFFSET UNITYSDK_OFFSET(0x1CD981E0)
#define RPG_CLIENT_BENEFITACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x1CD98120)
#define RPG_CLIENT_BENEFITACTIVITYDATA__ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1CD982E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BenefitActivityData_TypeDefinitionIndex = 62991;

	class BenefitActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean _HaveRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean _ExistingOpertableTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__EXISTINGOPERTABLETAB_OFFSET))(this);
		}

		::System::Boolean _IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__ISALLREWARDTAKEN_OFFSET))(this);
		}

	};
}
