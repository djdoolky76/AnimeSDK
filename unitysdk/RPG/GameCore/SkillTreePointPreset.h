#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillTreePointLevelType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillTreePointPreset; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTREEPOINTPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF02F0)
#define RPG_GAMECORE_SKILLTREEPOINTPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF01A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreePointPreset_TypeDefinitionIndex = 18136;

	class SkillTreePointPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Anchor; // 0x10
		::RPG::GameCore::SkillTreePointLevelType LevelType; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillTreePointPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillTreePointPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTREEPOINTPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
