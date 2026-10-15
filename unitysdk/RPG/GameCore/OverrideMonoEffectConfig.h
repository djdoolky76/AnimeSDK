#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E85E0)
#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8E8600)
#define RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideMonoEffectConfig_TypeDefinitionIndex = 20270;

	class OverrideMonoEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BoolEx FollowVisibleWithCaster; // 0x10
		::RPG::GameCore::BoolEx DontDisableIfAttachedIsDisable; // 0x14
		::RPG::GameCore::BoolEx OnlyFollowFirstFrame; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideMonoEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OverrideMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OverrideMonoEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONOEFFECTCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
