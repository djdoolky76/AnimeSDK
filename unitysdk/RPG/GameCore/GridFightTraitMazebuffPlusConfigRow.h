#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitMazebuffPlusConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7480F0)
#define RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D747F10)

namespace RPG::GameCore
{
	class GridFightTraitMazebuffPlusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* BEParamList; // 0x18
		::System::UInt32 StanceDamageDisplay; // 0x20
		::System::UInt32 MazebuffID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
