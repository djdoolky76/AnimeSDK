#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueSimpleTalkFinish; }

#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0250)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0260)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA0190)

namespace RPG::GameCore
{
	class WaitRogueSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
