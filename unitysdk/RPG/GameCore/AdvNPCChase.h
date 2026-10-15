#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCChase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCCHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3EF0)
#define RPG_GAMECORE_ADVNPCCHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A3F00)
#define RPG_GAMECORE_ADVNPCCHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A3EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCChase_TypeDefinitionIndex = 19980;

	class AdvNPCChase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChaseRadius; // 0x18
		::System::Single SearchOffsetFromTarget; // 0x1C
		::RPG::GameCore::TaskConfig* OnMissTarget; // 0x20
		::RPG::GameCore::TaskConfig* OnFoundTarget; // 0x28
		::RPG::GameCore::TaskConfig* OnEnterChase; // 0x30
		::RPG::GameCore::TaskConfig* OnLeaveChase; // 0x38
		::RPG::GameCore::TaskConfig* OnEnterChaseButNoTarget; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCChase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCChase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
