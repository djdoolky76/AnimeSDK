#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightBonusType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F96C0)
#define RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F94B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBasicBonusConfigRow_TypeDefinitionIndex = 13420;

	class GridFightBasicBonusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BonusTypeParamList; // 0x10
		::System::UInt32 BonusTypeParam; // 0x18
		::RPG::GameCore::GridFightBonusType BonusType; // 0x1C
		::System::UInt32 Value; // 0x20
		::System::UInt32 BonusID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBasicBonusConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBasicBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
