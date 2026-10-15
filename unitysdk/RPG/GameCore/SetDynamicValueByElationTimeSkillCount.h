#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByElationTimeSkillCount; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4000)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA4180)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA4010)
#define RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByElationTimeSkillCount_TypeDefinitionIndex = 22619;

	class SetDynamicValueByElationTimeSkillCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYELATIONTIMESKILLCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
