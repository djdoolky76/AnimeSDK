#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillMaxHitConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLMAXHITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF9C0)
#define RPG_GAMECORE_SKILLMAXHITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillMaxHitConfig_TypeDefinitionIndex = 16529;

	class SkillMaxHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::Int32 MaxHitCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillMaxHitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillMaxHitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
