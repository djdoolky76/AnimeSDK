#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCGuarding; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCGUARDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4380)
#define RPG_GAMECORE_ADVNPCGUARDING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A4390)
#define RPG_GAMECORE_ADVNPCGUARDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A4340)

namespace RPG::GameCore
{
	class AdvNPCGuarding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableSearch; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single SearchOffset; // 0x1C
		::RPG::GameCore::TaskConfig* OnGuardStart; // 0x20
		::RPG::GameCore::TaskConfig* OnGuardEnd; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGUARDING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
