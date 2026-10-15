#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LockBattleOperation; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LOCKBATTLEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EFFF0)
#define RPG_GAMECORE_LOCKBATTLEOPERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F0000)
#define RPG_GAMECORE_LOCKBATTLEOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EFFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockBattleOperation_TypeDefinitionIndex = 23276;

	class LockBattleOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::BattleOperationType>* OperationWhiteList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClickLockButton; // 0x28
		::RPG::GameCore::DynamicFloat* ParamInt; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockBattleOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockBattleOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
