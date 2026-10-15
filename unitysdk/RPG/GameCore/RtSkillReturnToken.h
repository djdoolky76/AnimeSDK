#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSkillReturnToken; }

#define RPG_GAMECORE_RTSKILLRETURNTOKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA36F50)
#define RPG_GAMECORE_RTSKILLRETURNTOKEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA36F60)
#define RPG_GAMECORE_RTSKILLRETURNTOKEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA36F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillReturnToken_TypeDefinitionIndex = 24219;

	class RtSkillReturnToken : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Token; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillReturnToken* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillReturnToken*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillReturnToken* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillReturnToken*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
