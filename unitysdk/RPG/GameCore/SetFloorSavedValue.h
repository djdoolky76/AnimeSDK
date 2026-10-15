#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFloorSavedValue; }

#define RPG_GAMECORE_SETFLOORSAVEDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86AD0)
#define RPG_GAMECORE_SETFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86AE0)
#define RPG_GAMECORE_SETFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorSavedValue_TypeDefinitionIndex = 20704;

	class SetFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
