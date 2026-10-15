#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayRogueSimpleTalk.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayAeonTalk; }

#define RPG_GAMECORE_PLAYAEONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92BF80)
#define RPG_GAMECORE_PLAYAEONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92BF90)
#define RPG_GAMECORE_PLAYAEONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92BF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAeonTalk_TypeDefinitionIndex = 21115;

	class PlayAeonTalk : public ::RPG::GameCore::PlayRogueSimpleTalk
	{
	public:
		::System::UInt32 AeonTalkId; // 0x28
		::System::UInt32 AeonTalkCount; // 0x2C
		::System::UInt32 AeonTalkAssigned; // 0x30
		::System::Boolean AeonTalkIsAssigned; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYAEONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
