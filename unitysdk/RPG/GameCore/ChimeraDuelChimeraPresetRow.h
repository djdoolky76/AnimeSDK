#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56FC60)
#define RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D56F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraPresetRow_TypeDefinitionIndex = 11139;

	class ChimeraDuelChimeraPresetRow : public ::System::Object
	{
	public:
		::System::Int32 DeltaAttack; // 0x10
		::System::UInt32 ChimeraID; // 0x14
		::System::UInt32 ExpGained; // 0x18
		::System::UInt32 ChimeraPresetID; // 0x1C
		::System::Int32 DeltaHP; // 0x20
		::System::UInt32 SpecialParam; // 0x24
		::System::UInt32 EquipmentID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraPresetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
