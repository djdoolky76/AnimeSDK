#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSortedItem; }
namespace RPG::GameCore { class SubMissionSortedItem; }

#define RPG_GAMECORE_SUBMISSIONSORTEDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB376C0)
#define RPG_GAMECORE_SUBMISSIONSORTEDITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB375A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionSortedItem_TypeDefinitionIndex = 19032;

	class SubMissionSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PerformanceSortedItem*>* PerformanceSortList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONSORTEDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubMissionSortedItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubMissionSortedItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONSORTEDITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
