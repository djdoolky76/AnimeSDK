#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossession; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_NPCPOSSESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD610)
#define RPG_GAMECORE_NPCPOSSESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DD620)
#define RPG_GAMECORE_NPCPOSSESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DD5E0)

namespace RPG::GameCore
{
	class NpcPossession : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::System::String* NpcUniqueName; // 0x28
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionInfo; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* AdditivePossessionInfos; // 0x38
		::System::Boolean IsDelete; // 0x40
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48
		::RPG::GameCore::NpcPossessionEffectConfig* AttachEffectConfig; // 0x50
		::Il2CppArray<::RPG::GameCore::NpcPossessionEffectConfig*>* AttachAdditiveEffectConfigs; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcPossession* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcPossession*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcPossession* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcPossession*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
