#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_RemoveEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86860)
#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86870)
#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RemoveEffect_TypeDefinitionIndex = 20148;

	class ST_Side_RemoveEffect : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* EffectPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RemoveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RemoveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
