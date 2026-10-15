#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleChooseRow; }

#define RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73D270)
#define RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73D030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleChooseRow_TypeDefinitionIndex = 13691;

	class GridFightRoleChooseRow : public ::System::Object
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::RPG::GameCore::GridFightTraitSrcType Type; // 0x14
		::System::UInt32 Parameter; // 0x18
		::System::UInt32 SubTraitID; // 0x1C
		::RPG::Client::TextID ChooseDesc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleChooseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleChooseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
