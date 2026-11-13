#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace RPG::GameCore { class AlleyDockGridItemData; }

#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE97890)
#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE978A0)
#define RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE98EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyDockGridItemData_TypeDefinitionIndex = 15836;

	class AlleyDockGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* UnlockConditions; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyDockGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyDockGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyDockGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyDockGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDOCKGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
