#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60A3C0)
#define RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60A270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatNotAvatarPreviewConfig_TypeDefinitionIndex = 16126;

	class DiceCombatNotAvatarPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatSkillPreviewInvokeType InvokeType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATNOTAVATARPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
