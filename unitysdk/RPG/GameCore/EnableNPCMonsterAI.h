#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableNPCMonsterAI; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLENPCMONSTERAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6122E0)
#define RPG_GAMECORE_ENABLENPCMONSTERAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6122F0)
#define RPG_GAMECORE_ENABLENPCMONSTERAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6122A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableNPCMonsterAI_TypeDefinitionIndex = 20423;

	class EnableNPCMonsterAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::Il2CppArray<::System::UInt32>* GroupMonsterIDs; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::System::String*>* UniqueNames; // 0x30
		::System::Boolean AbortSkillWhenDisable; // 0x38
		::System::Boolean ResetStateOnDisable; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableNPCMonsterAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableNPCMonsterAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableNPCMonsterAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableNPCMonsterAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
