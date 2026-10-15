#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D464D00)
#define RPG_GAMECORE_BATTLEPERFORMINIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D464D10)
#define RPG_GAMECORE_BATTLEPERFORMINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformInit_TypeDefinitionIndex = 23387;

	class BattlePerformInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaPrefabPath; // 0x18
		::System::Boolean CaptureEntity; // 0x20
		::System::Boolean AllowCaptureMember; // 0x21
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::BattlePerformCaptureActor*>* CaptureTeamLightList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattlePerformCaptureActor*>* CaptureTeamDarkList; // 0x30
		::Il2CppArray<::RPG::GameCore::BattlePerformCreateActor*>* CreateList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
