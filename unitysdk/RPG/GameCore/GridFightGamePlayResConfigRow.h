#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightGamePlayResType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGamePlayResConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20609040)
#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20608E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGamePlayResConfigRow_TypeDefinitionIndex = 13533;

	class GridFightGamePlayResConfigRow : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* Name; // 0x20
		::RPG::GameCore::GridFightGamePlayResType ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGamePlayResConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGamePlayResConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
