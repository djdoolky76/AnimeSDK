#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitConditionString; }

#define RPG_GAMECORE_WAITCONDITIONSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA7AA0)
#define RPG_GAMECORE_WAITCONDITIONSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEA7AB0)
#define RPG_GAMECORE_WAITCONDITIONSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEA7950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitConditionString_TypeDefinitionIndex = 20787;

	class WaitConditionString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TaskID; // 0x18
		::System::Boolean WaitOwnerOnly; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitConditionString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitConditionString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
