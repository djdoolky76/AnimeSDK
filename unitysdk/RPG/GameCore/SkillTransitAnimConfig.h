#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTRANSITANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC28F0)
#define RPG_GAMECORE_SKILLTRANSITANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC26C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTransitAnimConfig_TypeDefinitionIndex = 16501;

	class SkillTransitAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 From; // 0x10
		::System::Int32 To; // 0x14
		::System::String* AnimStateName; // 0x18
		::System::Single TransitionInTime; // 0x20
		::System::Single ReverseOutroTime; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTRANSITANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillTransitAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillTransitAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTRANSITANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
