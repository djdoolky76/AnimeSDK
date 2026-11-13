#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideMaxSpiritLevelRow; }

#define RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908D40)
#define RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E908C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMaxSpiritLevelRow_TypeDefinitionIndex = 10954;

	class AetherDivideMaxSpiritLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxSpiritLevel; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
