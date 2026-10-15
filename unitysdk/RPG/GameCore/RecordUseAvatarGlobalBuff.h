#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordUseAvatarGlobalBuff; }

#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974EF0)
#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974F00)
#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974EC0)

namespace RPG::GameCore
{
	class RecordUseAvatarGlobalBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazeBuffID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
