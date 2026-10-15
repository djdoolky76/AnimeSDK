#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFloorSavedValueChange; }
namespace System { class String; }

#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6ABA0)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6ABB0)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6AB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorSavedValueChange_TypeDefinitionIndex = 20708;

	class WaitFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
