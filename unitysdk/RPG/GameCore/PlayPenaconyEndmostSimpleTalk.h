#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PenaconyEndmostSimpleTalkData; }
namespace RPG::GameCore { class PlayPenaconyEndmostSimpleTalk; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D930690)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9306A0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D930660)

namespace RPG::GameCore
{
	class PlayPenaconyEndmostSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PenaconyEndmostSimpleTalkData*>* SimpleTalkList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
