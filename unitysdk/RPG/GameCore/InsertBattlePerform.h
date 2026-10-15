#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InsertBattlePerform; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_INSERTBATTLEPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B3B0)
#define RPG_GAMECORE_INSERTBATTLEPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D75B3C0)
#define RPG_GAMECORE_INSERTBATTLEPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75B380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertBattlePerform_TypeDefinitionIndex = 23378;

	class InsertBattlePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BattlePerformPath; // 0x18
		::System::Boolean ForbidShowMainPageOnEnd; // 0x20
		::System::Boolean ForbidFadeIn; // 0x21
		::System::Boolean ForbidPlayMissionTalk; // 0x22
		::System::Boolean ForbidShowUIPage; // 0x23
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformFinish; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
