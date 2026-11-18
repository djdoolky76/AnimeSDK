#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class HFOJLFDHICK;
namespace MoleMole { class UISuibianRankQuestsFinishPopWindowController; }

#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14671740)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x14671720)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x146719C0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityTempleRankQuestFinish_TypeDefinitionIndex = 67586;

	class MainCityTempleRankQuestFinish : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::MoleMole::UISuibianRankQuestsFinishPopWindowController* _controller; // 0x30
		::HFOJLFDHICK* _context; // 0x38

		::System::Void _ctor(::HFOJLFDHICK* context)
		{
			return ((::System::Void(*)(::PVOID, ::HFOJLFDHICK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
