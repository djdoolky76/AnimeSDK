#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6935B0)
#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D693300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionHarvestDataRow_TypeDefinitionIndex = 13259;

	class ExpeditionHarvestDataRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 Order; // 0x30
		::System::UInt32 RewardID; // 0x34
		::System::UInt32 Group; // 0x38
		::System::UInt32 ExpeditionID; // 0x3C
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
