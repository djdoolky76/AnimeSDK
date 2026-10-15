#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSkillTextDialogType; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA94AA0)
#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA94AB0)
#define RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA94A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillTextDialogType_TypeDefinitionIndex = 22935;

	class SetSkillTextDialogType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x20
		::RPG::GameCore::SkillTextDialogType Type; // 0x28
		::System::Boolean IsReplace; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTextDialogType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTextDialogType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTextDialogType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTextDialogType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTEXTDIALOGTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
