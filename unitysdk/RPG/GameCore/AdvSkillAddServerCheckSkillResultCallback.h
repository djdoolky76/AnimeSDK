#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSkillAddServerCheckSkillResultCallback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2570)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B2580)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B2540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSkillAddServerCheckSkillResultCallback_TypeDefinitionIndex = 20216;

	class AdvSkillAddServerCheckSkillResultCallback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18
		::System::Boolean Block; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single BlockDelayTime; // 0x24
		::System::Single ShowWheelDelayTime; // 0x28
		::System::Boolean Transparent; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
