#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournDifficultyRow; }

#define RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA383D0)
#define RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA38290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDifficultyRow_TypeDefinitionIndex = 14954;

	class RogueTournDifficultyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelList; // 0x10
		::System::UInt32 DifficultyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournDifficultyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournDifficultyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
