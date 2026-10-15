#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchRefFloorSavedValue; }

#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46100)
#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB46110)
#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorSavedValue_TypeDefinitionIndex = 17525;

	class SwitchRefFloorSavedValue : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
