#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UpdateFloorSavedValue; }

#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC788E0)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC788F0)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC788A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateFloorSavedValue_TypeDefinitionIndex = 20705;

	class UpdateFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
