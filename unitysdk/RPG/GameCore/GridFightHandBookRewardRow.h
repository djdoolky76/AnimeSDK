#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightHandBookRewardRow; }

#define RPG_GAMECORE_GRIDFIGHTHANDBOOKREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731B80)
#define RPG_GAMECORE_GRIDFIGHTHANDBOOKREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D731A30)

namespace RPG::GameCore
{
	class GridFightHandBookRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::GameCore::GridFightHandBookType HandBookType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTHANDBOOKREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightHandBookRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightHandBookRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTHANDBOOKREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
