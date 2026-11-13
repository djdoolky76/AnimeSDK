#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueRoomContentUpdateFinish; }

#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x208002A0)
#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208002B0)
#define RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20800260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueRoomContentUpdateFinish_TypeDefinitionIndex = 21152;

	class WaitRogueRoomContentUpdateFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueRoomContentUpdateFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEROOMCONTENTUPDATEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
