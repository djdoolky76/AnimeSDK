#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillExtraConfigBase.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillPropertyConfig; }

#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA642C0)
#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA642D0)
#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillPropertyConfig_TypeDefinitionIndex = 17670;

	class RtSkillPropertyConfig : public ::RPG::GameCore::RtSkillExtraConfigBase
	{
	public:
		::RPG::GameCore::RtSkillPropertyType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
