#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRoguePickAvatar; }

#define RPG_GAMECORE_WAITROGUEPICKAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9FFF0)
#define RPG_GAMECORE_WAITROGUEPICKAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0000)
#define RPG_GAMECORE_WAITROGUEPICKAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9FFB0)

namespace RPG::GameCore
{
	class WaitRoguePickAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRoguePickAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRoguePickAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRoguePickAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRoguePickAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEPICKAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
