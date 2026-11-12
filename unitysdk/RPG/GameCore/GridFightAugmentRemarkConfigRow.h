#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9303A0)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E930220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentRemarkConfigRow_TypeDefinitionIndex = 13479;

	class GridFightAugmentRemarkConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AugmentID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AugmentRemark; // 0x18
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
