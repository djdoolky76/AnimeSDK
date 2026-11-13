#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarRarityRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARRARITYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE633F0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE62C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRarityRow_TypeDefinitionIndex = 12248;

	class PlanetFesAvatarRarityRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 IncomeParam; // 0x18
		::System::UInt32 CostParam; // 0x1C
		::System::UInt32 LevelSkipStarUpDetail; // 0x20
		::System::UInt32 Rarity; // 0x24
		::System::UInt32 PieceTransferNum; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarRarityRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
