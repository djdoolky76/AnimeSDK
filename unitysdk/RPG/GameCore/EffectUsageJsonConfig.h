#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectUsageJsonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6318C0)
#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6317D0)

namespace RPG::GameCore
{
	class EffectUsageJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* APMMonoEffectUsageList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectUsageJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectUsageJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
