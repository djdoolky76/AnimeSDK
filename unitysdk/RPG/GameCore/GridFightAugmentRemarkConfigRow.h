#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726690)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D726510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentRemarkConfigRow_TypeDefinitionIndex = 13407;

	class GridFightAugmentRemarkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AugmentRemark; // 0x10
		::System::UInt32 AugmentID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAugmentRemarkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
