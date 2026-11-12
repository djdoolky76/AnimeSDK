#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepletablePoolCostPlanRow; }

#define RPG_GAMECORE_DEPLETABLEPOOLCOSTPLANROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80E530)
#define RPG_GAMECORE_DEPLETABLEPOOLCOSTPLANROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E80DED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DepletablePoolCostPlanRow_TypeDefinitionIndex = 13201;

	class DepletablePoolCostPlanRow : public ::System::Object
	{
	public:
		::System::UInt32 DrawIndex; // 0x10
		::System::UInt32 CostItemNum; // 0x14
		::System::UInt32 CostPlanID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLCOSTPLANROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DepletablePoolCostPlanRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DepletablePoolCostPlanRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLCOSTPLANROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
