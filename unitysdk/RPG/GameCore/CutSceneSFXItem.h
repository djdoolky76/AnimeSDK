#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutSceneSFXItem; }
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENESFXITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EB290)
#define RPG_GAMECORE_CUTSCENESFXITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EB0B0)

namespace RPG::GameCore
{
	class CutSceneSFXItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::Single StartTime; // 0x18
		::System::Single EndTime; // 0x1C
		::System::Boolean IsLoop; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CutSceneSFXItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CutSceneSFXItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
