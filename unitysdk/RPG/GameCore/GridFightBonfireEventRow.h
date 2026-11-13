#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventRow; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FD6E0)
#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FD3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireEventRow_TypeDefinitionIndex = 13569;

	class GridFightBonfireEventRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 PetPalID; // 0x14
		::RPG::Client::TextID EventDesc; // 0x18
		::RPG::Client::TextID EventCardTitle; // 0x28
		::RPG::Client::TextID EventCardDesc; // 0x38
		::System::UInt32 DialogID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
