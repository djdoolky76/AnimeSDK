#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBossPluralityHP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETBOSSPLURALITYHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F85CFC0)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F85D050)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F85CF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBossPluralityHP_TypeDefinitionIndex = 23365;

	class SetBossPluralityHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* PluralityValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
