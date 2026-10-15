#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNpcStatus; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE2F0)
#define RPG_GAMECORE_SETNPCSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABE320)
#define RPG_GAMECORE_SETNPCSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABE2A0)

namespace RPG::GameCore
{
	class SetNpcStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NPCStatus Status; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
