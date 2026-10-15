#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByCustomName; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA76310)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA76320)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA762E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCustomName_TypeDefinitionIndex = 21802;

	class SetDynamicValueByCustomName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCustomName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCustomName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
