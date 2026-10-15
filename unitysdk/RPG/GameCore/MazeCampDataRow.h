#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeCampDataRow; }

#define RPG_GAMECORE_MAZECAMPDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D863FD0)
#define RPG_GAMECORE_MAZECAMPDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8635E0)

namespace RPG::GameCore
{
	class MazeCampDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HostileCampList; // 0x10
		::RPG::GameCore::CampType CampID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeCampDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeCampDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
