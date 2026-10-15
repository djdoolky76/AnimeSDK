#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueResidentActivityPanelData.h"
class AKPCNJCFFCI;
class PHOPKKBKAID;
namespace RPG::Client { class RogueHandbookEventRedDotFilter; }
namespace RPG::Client { class RogueHandbookRedDotFilter; }
namespace RPG::Client { class SimulatedRogueResidentActivityPanelData; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }

#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET UNITYSDK_OFFSET(0xE0E0000)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0DFFF0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0E0160)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0xE0E0320)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xE0E02E0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE0E02A0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE0E01E0)

namespace RPG::Client
{
	class SimulatedRogueResidentActivityPanelData : public ::RPG::Client::RogueResidentActivityPanelData
	{
	public:
		::RPG::Client::RogueHandbookEventRedDotFilter* _EventRedDotFilter; // 0xB0
		::RPG::Client::RogueHandbookRedDotFilter* _RedDotFilter; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SimulatedRogueResidentActivityPanelData* CreateByRow(::RPG::GameCore::RogueActivityResidentConfigRow* a1, ::RPG::GameCore::IntroDataRow* a2, ::PHOPKKBKAID* a3, ::AKPCNJCFFCI* a4)
		{
			return ((::RPG::Client::SimulatedRogueResidentActivityPanelData*(*)(::RPG::GameCore::RogueActivityResidentConfigRow*, ::RPG::GameCore::IntroDataRow*, ::PHOPKKBKAID*, ::AKPCNJCFFCI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}

	};
}
