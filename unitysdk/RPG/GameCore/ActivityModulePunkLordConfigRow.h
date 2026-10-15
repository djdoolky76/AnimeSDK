#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityModulePunkLordConfigRow; }

#define RPG_GAMECORE_ACTIVITYMODULEPUNKLORDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33DEA0)
#define RPG_GAMECORE_ACTIVITYMODULEPUNKLORDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33DD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityModulePunkLordConfigRow_TypeDefinitionIndex = 12287;

	class ActivityModulePunkLordConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEPUNKLORDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityModulePunkLordConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityModulePunkLordConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMODULEPUNKLORDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
