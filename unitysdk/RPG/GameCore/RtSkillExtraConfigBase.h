#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillExtraConfigBase; }

#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20EB0)
#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA369C0)
#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA367B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillExtraConfigBase_TypeDefinitionIndex = 17674;

	class RtSkillExtraConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillExtraConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillExtraConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillExtraConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillExtraConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
