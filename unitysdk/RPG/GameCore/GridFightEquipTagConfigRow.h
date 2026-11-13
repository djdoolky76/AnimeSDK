#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipTagConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20604550)
#define RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x206043D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipTagConfigRow_TypeDefinitionIndex = 13539;

	class GridFightEquipTagConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EquipTagDesc; // 0x10
		::System::UInt32 TagID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEquipTagConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEquipTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
