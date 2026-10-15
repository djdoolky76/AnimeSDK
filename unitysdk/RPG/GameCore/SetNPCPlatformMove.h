#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNPCPlatformMove; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCPLATFORMMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD830)
#define RPG_GAMECORE_SETNPCPLATFORMMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABD840)
#define RPG_GAMECORE_SETNPCPLATFORMMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABD800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCPlatformMove_TypeDefinitionIndex = 21956;

	class SetNPCPlatformMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean EnableMove; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCPlatformMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCPlatformMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCPlatformMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCPlatformMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
