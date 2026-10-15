#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByTotalHPFromMonsterID; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7E8E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7E990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7E810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTotalHPFromMonsterID_TypeDefinitionIndex = 22769;

	class SetDynamicValueByTotalHPFromMonsterID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x28
		::RPG::GameCore::DynamicFloat* WaveIndex; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideLevel; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideHardLevelGroup; // 0x40
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup; // 0x48
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup2; // 0x50
		::RPG::GameCore::DynamicFloat* Phase; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
