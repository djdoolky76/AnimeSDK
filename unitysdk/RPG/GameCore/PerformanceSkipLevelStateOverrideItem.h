#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FSVOverridItem; }
namespace RPG::GameCore { class GroupPropertyOverrideItem; }
namespace RPG::GameCore { class PerformanceSkipLevelStateOverrideItem; }
namespace RPG::GameCore { class PropStateOverrideItem; }

#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9046B0)
#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D904420)

namespace RPG::GameCore
{
	class PerformanceSkipLevelStateOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::Il2CppArray<::RPG::GameCore::PropStateOverrideItem*>* PropStateOverrides; // 0x18
		::Il2CppArray<::RPG::GameCore::FSVOverridItem*>* FSVOverrides; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupPropertyOverrideItem*>* GroupPropertyOverrides; // 0x28
		::Il2CppArray<::System::UInt32>* ReloadGroupList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipLevelStateOverrideItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
