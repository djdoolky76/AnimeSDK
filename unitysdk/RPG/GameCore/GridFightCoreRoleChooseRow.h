#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCoreRoleChooseRow; }

#define RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E934430)
#define RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9341F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCoreRoleChooseRow_TypeDefinitionIndex = 13816;

	class GridFightCoreRoleChooseRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChooseDesc; // 0x10
		::System::UInt32 Parameter; // 0x20
		::System::UInt32 TraitID; // 0x24
		::RPG::GameCore::GridFightTraitSrcType Type; // 0x28
		::System::UInt32 SubTraitID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCoreRoleChooseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCoreRoleChooseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLECHOOSEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
