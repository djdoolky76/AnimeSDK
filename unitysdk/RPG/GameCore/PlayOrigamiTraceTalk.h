#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OrigamiTraceTalk; }
namespace RPG::GameCore { class PlayOrigamiTraceTalk; }

#define RPG_GAMECORE_PLAYORIGAMITRACETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92FA10)
#define RPG_GAMECORE_PLAYORIGAMITRACETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92FA20)
#define RPG_GAMECORE_PLAYORIGAMITRACETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92F9E0)

namespace RPG::GameCore
{
	class PlayOrigamiTraceTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::Il2CppArray<::RPG::GameCore::OrigamiTraceTalk*>* TalkList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOrigamiTraceTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOrigamiTraceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOrigamiTraceTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOrigamiTraceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMITRACETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
