#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPresetTeamRow; }

#define RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7630)
#define RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A74B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetTeamRow_TypeDefinitionIndex = 11137;

	class ChimeraDuelPresetTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PresetIDList; // 0x10
		::System::UInt32 MasterID; // 0x18
		::System::UInt32 TeamID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPresetTeamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPresetTeamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
