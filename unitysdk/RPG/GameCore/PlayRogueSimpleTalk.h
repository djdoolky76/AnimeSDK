#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayRogueSimpleTalk; }
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_PLAYROGUESIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92C1E0)
#define RPG_GAMECORE_PLAYROGUESIMPLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D930C60)
#define RPG_GAMECORE_PLAYROGUESIMPLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D930B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRogueSimpleTalk_TypeDefinitionIndex = 21112;

	class PlayRogueSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTalkInfo*>* SimpleTalkList; // 0x18
		::System::Boolean IsAeonTalk; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 AeonTalkAssignedUI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUESIMPLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
