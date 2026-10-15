#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CollectDataConditions; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_COLLECTDATACONDITIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9EE0)
#define RPG_GAMECORE_COLLECTDATACONDITIONS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C9EF0)
#define RPG_GAMECORE_COLLECTDATACONDITIONS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C9EB0)

namespace RPG::GameCore
{
	class CollectDataConditions : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TaskIDList; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20
		::Il2CppArray<::System::UInt32>* PerformanceIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* PerformanceIDDsList; // 0x30
		::Il2CppArray<::System::UInt32>* CustomValueMainMissionIDList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectDataConditions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CollectDataConditions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
