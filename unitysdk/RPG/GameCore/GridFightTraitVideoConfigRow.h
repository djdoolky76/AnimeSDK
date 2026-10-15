#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitVideoConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71B110)
#define RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D71AF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitVideoConfigRow_TypeDefinitionIndex = 13701;

	class GridFightTraitVideoConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Description; // 0x10
		::System::UInt32 TraitID; // 0x20
		::System::UInt32 VideoID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitVideoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitVideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITVIDEOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
