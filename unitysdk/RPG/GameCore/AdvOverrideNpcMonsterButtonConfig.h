#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvOverrideNpcMonsterButtonConfig; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A9B20)
#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A9B30)
#define RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A9AF0)

namespace RPG::GameCore
{
	class AdvOverrideNpcMonsterButtonConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x20
		::System::Boolean Refresh; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDENPCMONSTERBUTTONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
