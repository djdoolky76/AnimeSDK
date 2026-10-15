#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayAndWaitRogueSimpleTalk; }
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92C220)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92C230)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAndWaitRogueSimpleTalk_TypeDefinitionIndex = 21114;

	class PlayAndWaitRogueSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTalkInfo*>* SimpleTalkList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
