#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachSkillTypeDisable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4025A0)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4025B0)
#define RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D402570)

namespace RPG::GameCore
{
	class AttachSkillTypeDisable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* Types; // 0x20
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* ControlSkillTypes; // 0x28
		::Il2CppArray<::System::String*>* SkillNames; // 0x30
		::RPG::Client::TextID TextmapID; // 0x38
		::RPG::Client::TextID Tip; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHSKILLTYPEDISABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
