#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOrbConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946920)
#define RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E946710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbConfigRow_TypeDefinitionIndex = 13494;

	class GridFightOrbConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbType Type; // 0x10
		::System::UInt32 BonusID; // 0x14
		::RPG::Client::TextID OrbName; // 0x18
		::System::UInt32 OrbID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOrbConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
