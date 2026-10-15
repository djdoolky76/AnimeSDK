#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AutoUseUltraSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUTOUSEULTRASKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40AB00)
#define RPG_GAMECORE_AUTOUSEULTRASKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40AB10)
#define RPG_GAMECORE_AUTOUSEULTRASKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40AAC0)

namespace RPG::GameCore
{
	class AutoUseUltraSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean WaitCutinFinished; // 0x20
		::System::Boolean Enable; // 0x21
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::String*>* BindUltraSkillNames; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
