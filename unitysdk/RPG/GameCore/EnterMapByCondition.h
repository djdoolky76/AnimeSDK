#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EnterMapByCondition; }

#define RPG_GAMECORE_ENTERMAPBYCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D645150)
#define RPG_GAMECORE_ENTERMAPBYCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D645160)
#define RPG_GAMECORE_ENTERMAPBYCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D645120)

namespace RPG::GameCore
{
	class EnterMapByCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EntranceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMapByCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMapByCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAPBYCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
