#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHPStanceChangeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBossHPStanceChangeType; }

#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA98AF0)
#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA98B30)
#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA98A90)

namespace RPG::GameCore
{
	class SetBossHPStanceChangeType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BossHPStanceChangeType ChangeType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ChangeTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossHPStanceChangeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossHPStanceChangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBossHPStanceChangeType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBossHPStanceChangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
