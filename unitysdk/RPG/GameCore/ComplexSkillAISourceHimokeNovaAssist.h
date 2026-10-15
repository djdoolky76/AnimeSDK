#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceHimokeNovaAssist; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0260)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0270)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceHimokeNovaAssist_TypeDefinitionIndex = 15552;

	class ComplexSkillAISourceHimokeNovaAssist : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::UInt32 HimokeCharacterID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* HimokeModifier; // 0x18
		::System::String* HimokeRank2Modifier; // 0x20
		::System::String* HimokeRank2CheckKey; // 0x28
		::Il2CppArray<::System::String*>* AstralExpressGroups; // 0x30
		::System::String* YellowGroupName; // 0x38
		::System::String* OverrideGroupsKey; // 0x40
		::Il2CppArray<::System::String*>* CtrlExcludeModifierNames; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceHimokeNovaAssist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEHIMOKENOVAASSIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
