#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBossTotalHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA75030)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA75290)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA75040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA74FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBossTotalHP_TypeDefinitionIndex = 22770;

	class SetDynamicValueByBossTotalHP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* BossTargetType; // 0x28
		::System::Boolean CalcAllWaveBoss; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::MonsterRank MinRank; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
