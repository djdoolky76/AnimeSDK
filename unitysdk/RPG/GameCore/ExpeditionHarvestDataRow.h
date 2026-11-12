#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89FB20)
#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E89F870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionHarvestDataRow_TypeDefinitionIndex = 13331;

	class ExpeditionHarvestDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 Group; // 0x20
		::System::UInt32 ExpeditionID; // 0x24
		::System::UInt32 RewardID; // 0x28
		::System::UInt32 Order; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionHarvestDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionHarvestDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
