#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistSkillUIConfig; }
namespace RPG::GameCore { class SkillUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0470)
#define RPG_GAMECORE_SKILLUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEEC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillUIConfig_TypeDefinitionIndex = 18193;

	class SkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillUISpecialButtonType SpecialButtonType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* CustomSkillButtonPrefabPath; // 0x18
		::System::Boolean ForbidEnhanceEffect; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::AssistSkillUIConfig* AssistSkillUIConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
