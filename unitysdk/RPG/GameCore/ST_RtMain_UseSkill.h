#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_RtMain_UseSkill; }
namespace System { class String; }

#define RPG_GAMECORE_ST_RTMAIN_USESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA54800)
#define RPG_GAMECORE_ST_RTMAIN_USESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA54810)
#define RPG_GAMECORE_ST_RTMAIN_USESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA547D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtMain_UseSkill_TypeDefinitionIndex = 24078;

	class ST_RtMain_UseSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_UseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_UseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
