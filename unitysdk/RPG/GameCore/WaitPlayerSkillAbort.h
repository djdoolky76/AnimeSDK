#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPlayerSkillAbort; }

#define RPG_GAMECORE_WAITPLAYERSKILLABORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC706D0)
#define RPG_GAMECORE_WAITPLAYERSKILLABORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC706E0)
#define RPG_GAMECORE_WAITPLAYERSKILLABORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC706A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerSkillAbort_TypeDefinitionIndex = 20913;

	class WaitPlayerSkillAbort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoop; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkillAbort; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerSkillAbort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerSkillAbort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERSKILLABORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
