#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChestLevelRow; }

#define RPG_GAMECORE_IDLELIVECHESTLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74BA60)
#define RPG_GAMECORE_IDLELIVECHESTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74B940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChestLevelRow_TypeDefinitionIndex = 11746;

	class IdleLiveChestLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 ExpUpLimit; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveChestLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveChestLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
