#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDayOfWeekActionParamObject; }
namespace RPG::GameCore { class PropInitDayOfWeekAction; }

#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D900)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94D910)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94D8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitDayOfWeekAction_TypeDefinitionIndex = 22076;

	class PropInitDayOfWeekAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropDayOfWeekActionParamObject*>* ActionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
