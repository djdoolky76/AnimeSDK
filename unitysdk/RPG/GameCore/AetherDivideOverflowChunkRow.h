#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideOverflowChunkRow; }

#define RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D6AD0)
#define RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D68B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideOverflowChunkRow_TypeDefinitionIndex = 10920;

	class AetherDivideOverflowChunkRow : public ::System::Object
	{
	public:
		::System::UInt32 SpiritID; // 0x10
		::System::UInt32 BattleAreaID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 MazeBuffID; // 0x1C
		::System::UInt32 EventID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideOverflowChunkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideOverflowChunkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
