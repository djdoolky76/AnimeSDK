#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireHealConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREHEALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FD810)
#define RPG_GAMECORE_GRIDFIGHTBONFIREHEALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FD6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireHealConfigRow_TypeDefinitionIndex = 13576;

	class GridFightBonfireHealConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 HealNum; // 0x10
		::System::UInt32 ChapterID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREHEALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireHealConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireHealConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREHEALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
