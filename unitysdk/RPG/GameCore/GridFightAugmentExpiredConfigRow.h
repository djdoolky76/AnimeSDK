#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentExpiredConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726380)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D726210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentExpiredConfigRow_TypeDefinitionIndex = 13409;

	class GridFightAugmentExpiredConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SubSeasonID; // 0x10
		::System::UInt32 SeasonID; // 0x14
		::System::UInt32 AugmentID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAugmentExpiredConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
